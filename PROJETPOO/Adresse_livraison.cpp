#include "pch.h"
#include "Adresse_livraison.h"
#include "SQL_CMD.h"

Adresse_livraison::Adresse_livraison()
{
    this->id = -1;
    this->id_adresse = 0;
    this->id_client = 0;
    this->suppr = false;
}

Adresse_livraison::Adresse_livraison(DataRow^ DR)
{

    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->id_adresse = Convert::ToInt32(DR->ItemArray[1]);
    this->id_client = Convert::ToInt32(DR->ItemArray[2]);
    this->suppr = Convert::ToBoolean(DR->ItemArray[3]);
}

void Adresse_livraison::setID(int id)
{
    this->id = id;
}

int Adresse_livraison::getID()
{
    return this->id;
}

void Adresse_livraison::setIdAdresse(int id)
{
    this->id_adresse = id;
}
int Adresse_livraison::getIdAdresse()
{
    return this->id_adresse ;
}
void Adresse_livraison::setIdClient(int id_client)
{
    this->id_client = id_client;
}

int Adresse_livraison::getIdClient()
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

array<Adresse_livraison^>^ Adresse_livraison::getAdresse_livraisonActive()
{
    String^ tableName = Adresse_livraison::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE supprimer = 'false';", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse_livraison^>^ Adresse_livraisons = gcnew array<Adresse_livraison^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Adresse_livraisons[i] = gcnew Adresse_livraison(ds->Tables[tableName]->Rows[i]);
    return Adresse_livraisons;
}

array<Adresse_livraison^>^ Adresse_livraison::getAdresse_livraisonActive(int id)
{
    String^ tableName = Adresse_livraison::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE supprimer = 'false' AND id_client = '" + id + "';", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse_livraison^>^ Adresse_livraisons = gcnew array<Adresse_livraison^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Adresse_livraisons[i] = gcnew Adresse_livraison(ds->Tables[tableName]->Rows[i]);
    return Adresse_livraisons;
}

String^ Adresse_livraison::getTableName()
{
    return "adresse_livraison";
}
void Adresse_livraison::persist()
{
    String^ tableName = Adresse_livraison::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName +
            " VALUES('" + this->getIdAdresse() + "','"+ this->getIdClient() + "','" + this->getsuppr() + "');SELECT @@IDENTITY;"); /*questio*/
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            " SET id_adresse = '" + this->getIdAdresse() + "' ,id_client = '" + this->getIdClient() + "' ,supprimer = '" + this->getsuppr() +
            "' WHERE(id = " + this->getID() + ");");
    }
}
