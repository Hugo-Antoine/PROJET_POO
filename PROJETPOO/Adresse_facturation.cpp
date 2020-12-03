#include "pch.h"
#include "Adresse_facturation.h"
#include "SQL_CMD.h"

Adresse_facturation::Adresse_facturation()
{
    this->id = -1;
    this->id_client = 0;
    this->id_adresse = 0;
    this->suppr = false;
}

Adresse_facturation::Adresse_facturation(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->id_client = Convert::ToInt32(DR->ItemArray[1]);
    this->id_adresse = Convert::ToInt32(DR->ItemArray[2]);
    this->suppr = Convert::ToBoolean(DR->ItemArray[3]);
}

void Adresse_facturation::setID(int id)
{
    this->id = id;
}
int Adresse_facturation::getID()
{
    return this->id;
}

void Adresse_facturation::setIdClient(int id_client)
{
    this->id_client = id_client;
}
int Adresse_facturation::getIdClient()
{
    return this->id_client;
}
void Adresse_facturation::setIdAdresse(int id_adresse)
{
    this->id_adresse = id_adresse;
}

int Adresse_facturation::getIdAdresse()
{
    return this->id_adresse;

}

void Adresse_facturation::setsuppr(bool suppr)
{
    this->suppr = suppr;
}

bool Adresse_facturation::getsuppr()
{
    return this->suppr;

}

array<Adresse_facturation^>^ Adresse_facturation::getAdresse_facturation()
{
    String^ tableName = Adresse_facturation::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse_facturation^>^ Adresse_facturations = gcnew array<Adresse_facturation^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Adresse_facturations[i] = gcnew Adresse_facturation(ds->Tables[tableName]->Rows[i]);
    return Adresse_facturations;
}

array<Adresse_facturation^>^ Adresse_facturation::getAdresse_facturationActive()
{
    String^ tableName = Adresse_facturation::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE supprimer = 'false';", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse_facturation^>^ Adresse_facturations = gcnew array<Adresse_facturation^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Adresse_facturations[i] = gcnew Adresse_facturation(ds->Tables[tableName]->Rows[i]);
    return Adresse_facturations;
}

array<Adresse_facturation^>^ Adresse_facturation::getAdresse_facturationActive(int id)
{
    String^ tableName = Adresse_facturation::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE supprimer = 'false' AND id_client = '" + id + "';", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse_facturation^>^ Adresse_facturations = gcnew array<Adresse_facturation^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Adresse_facturations[i] = gcnew Adresse_facturation(ds->Tables[tableName]->Rows[i]);
    return Adresse_facturations;
}

String^ Adresse_facturation::getTableName()
{
    return "adresse_facturation";
}
void Adresse_facturation::persist()
{
    String^ tableName = Adresse_facturation::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName  +
            " VALUES('" + this->getIdClient() + "','" + this->getIdAdresse() + "','" + this->getsuppr() + "');SELECT @@IDENTITY;");
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            " SET id_client = '" + this->getIdClient() + "' ,id_adresse = '" + this->getIdAdresse() + "' ,supprimer = '" + this->getsuppr() +
            "' WHERE(id = " + this->getID() + ");");
    }
}
