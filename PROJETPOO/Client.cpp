#include "pch.h"
#include "Client.h"
#include "SQL_CMD.h"

Clients::Clients()
{
    this->id = -1;
    this->nom = "";
    this->prenom = "";
    this->ddn = "";
    this->dpa = "";
    this->supr = false;
}

Clients::Clients(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->nom = Convert::ToString(DR->ItemArray[1]);
    this->prenom = Convert::ToString(DR->ItemArray[2]);
    this->ddn = Convert::ToString(DR->ItemArray[3]);
    this->dpa = Convert::ToString(DR->ItemArray[4]);
    this->supr = Convert::ToBoolean(DR->ItemArray[5]);
}
void Clients::setID(int id)
{
    this->id = id;
}
int Clients::getID()
{
    return this->id;
}
void Clients::setNom(String^ nom)
{
    this->nom = nom;
}
String^ Clients::getNom()
{
    return this->nom;
}

void Clients::setPrenom(String^ prenom)
{
    this->prenom = prenom;
}
String^ Clients::getPrenom()
{
    return this->prenom;
}

void Clients::setddn(String^ ddn)
{
    this->ddn = ddn;
}

String^ Clients::getddn()
{
    return this->ddn;

}

void Clients::setdpa(String^ dpa)
{
    this->dpa = dpa;
}

String^ Clients::getdpa()
{
    return this->dpa;

}

void Clients::setsupr(bool supr)
{
    this->supr = supr;
}

bool Clients::getsupr()
{
    return this->supr;

}

array<Clients^>^ Clients::getClient()
{
    String^ tableName = Clients::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Clients^>^ Client = gcnew array<Clients^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Client[i] = gcnew Clients(ds->Tables[tableName]->Rows[i]);
    return Client;
}

array<Clients^>^ Clients::getClientActif()
{
    String^ tableName = Clients::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE supprimer = 'false';", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Clients^>^ Client = gcnew array<Clients^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Client[i] = gcnew Clients(ds->Tables[tableName]->Rows[i]);
    return Client;
}

String^ Clients::getTableName()
{
    return "client";
}
int Clients::persist()
{
    String^ tableName = Clients::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName +
            " VALUES('" + this->getNom() + "','" + this->getPrenom() + "','" + this->getddn() + "','" + this->getdpa() + "','" + this->getsupr() + "');SELECT @@IDENTITY;"); /*questio*/
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName + 
            " SET nom = '" + this->getNom() +"',prenom = '" + this->getPrenom() +"' ,date_naissance = '" + this->getddn() +"' ,date_premier_achat = '" + this->getdpa() + "' ,supprimer = '" + this->getsupr() + "' " +
            "WHERE(id = " + this->getID() + ");");
    }
    return this->id;
}
