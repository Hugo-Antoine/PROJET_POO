#include "pch.h"
#include "Client.h"
#include "SQL_CMD.h"

Client::Client()
{
    this->id = -1;
    this->nom = "";
    this->prenom = "";
    this->ddn = "";
    this->dpa = "";
}

Client::Client(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->nom = Convert::ToString(DR->ItemArray[1]);
    this->prenom = Convert::ToString(DR->ItemArray[2]);
    this->ddn = Convert::ToString(DR->ItemArray[3]);
    this->dpa = Convert::ToString(DR->ItemArray[4]);
}
void Client::setID(int id)
{
    this->id = id;
}
int Client::getID()
{
    return this->id;
}
void Client::setNom(String^ nom)
{
    this->nom = nom;
}
String^ Client::getNom()
{
    return this->nom;
}

void Client::setPrenom(String^ prenom)
{
    this->prenom = prenom;
}
String^ Client::getPrenom()
{
    return this->prenom;
}

void Client::setddn(String^ ddn)
{
    this->ddn = ddn;
}

String^ Client::getddn()
{
    return this->ddn;

}

void Client::setdpa(String^ dpa)
{
    this->ddn = dpa;
}

String^ Client::getdpa()
{
    return this->dpa;

}

void Client::setsupr(bool supr)
{
    this->supr = supr;
}

bool Client::getsupr()
{
    return this->supr;

}



array<Client^>^ Client::getClient()
{
    String^ tableName = Client::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Client^>^ Clients = gcnew array<Client^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Clients[i] = gcnew Client(ds->Tables[tableName]->Rows[i]);
    return Clients;
}
String^ Client::getTableName()
{
    return "client";
}
void Client::persist()
{
    String^ tableName = Client::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName + " (nom, prenom, date_naissance, date_premier_achat, supprimer) " +
            "VALUES('" + this->getNom() + "','" + this->getPrenom() + "','" + this->getddn() + "','" + this->getdpa() + "','" + this->getsupr() + "');SELECT @@IDENTITY;"); /*questio*/
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            "' SET nom = '" + this->getNom() + "' " +
            "',prenom = '" + this->getPrenom() + " '" +
            "' ,date_naissance = '" + this->getddn() + "'" +
            "' ,date_premier_achat = '" + this->getdpa() + "'" +
            "' ,supprimer = '" + this->getsupr() + ");");

        "WHERE(id = " + this->getID() + ");";
    }
}
