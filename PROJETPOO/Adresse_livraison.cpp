#include "pch.h"
#include "Adresse_livraison.h"
#include "SQL_CMD.h"

Adresse_livraison::Adresse_livraison()
{
    this->id = -1;
    this->id_client = -1;
    this->suppr = 0;
}

Adresse_livraison::Adresse_livraison(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->id_client = Convert::ToInt32(DR->ItemArray[1]);
    this->suppr = Convert::ToBoolean(DR->ItemArray[2]);
}

void Adresse_livraison::setID(int id)
{
    this->id = id;
}
int Adresse_livraison::getID()
{
    return this->id;
}
void Adresse_livraison::setID_client(int id_client)
{
    this->id_client = id_client;
}

int Adresse_livraison::getID_client()
{
    return this->id_client;

}

void Adresse_livraison::setsuppr(bool suppr)
{
    this->suppr = suppr;
}

bool Adresse_livraison::getsuppr()
{
    return this->suppr;

}

array<Adresse_livraison^>^ Adresse_livraison::getAdresse_livraison()
{
    String^ tableName = Adresse_livraison::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse_livraison^>^ Adresse_livraisons = gcnew array<Adresse_livraison^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Adresse_livraisons[i] = gcnew Adresse_livraison(ds->Tables[tableName]->Rows[i]);
    return Adresse_livraisons;
}
String^ Adresse_livraison::getTableName()
{
    return "Adresse_livraison";
}
void Adresse_livraison::persist()
{
    String^ tableName = Adresse_livraison::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName + " (id_client, supprimer) " +
            "VALUES('" + this->getID_client() + "','" + this->getsuppr() + "');SELECT @@IDENTITY;"); /*questio*/
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            "' SET id_client = '" + this->getID_client() + "' " +
            "',suppr = '" + this->getsuppr()
            + ");");

        "WHERE(id = " + this->getID() + ");";
    }
}
