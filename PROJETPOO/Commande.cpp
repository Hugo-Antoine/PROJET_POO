#include "pch.h"
#include "Commande.h"
#include "SQL_CMD.h"


Commande::Commande()
{
    this->id = -1;
    this->reference = "";
    this->ddl = "";
    this->de = "";
    this->dds = "";
    this->totalht = 0;
    this->totalttc = 0;
    this->id_adresse_cmd_adresse_livraison = 0;
    this->id_client = 0;
    this->id_adresse_cmd_adresse_facturation = 0;
    this->suppr = false;
}

Commande::Commande(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->reference = Convert::ToString(DR->ItemArray[1]);
    this->ddl = Convert::ToString(DR->ItemArray[2]);
    this->de = Convert::ToString(DR->ItemArray[3]);
    this->dds = Convert::ToString(DR->ItemArray[4]);
    this->totalht = Convert::ToDouble(DR->ItemArray[5]);
    this->totalttc = Convert::ToDouble(DR->ItemArray[6]);
    this->id_adresse_cmd_adresse_livraison = Convert::ToInt32(DR->ItemArray[7]);
    this->id_client = Convert::ToInt32(DR->ItemArray[8]);
    this->id_adresse_cmd_adresse_facturation = Convert::ToInt32(DR->ItemArray[9]);

}
void Commande::setID(int id)
{
    this->id = id;
}
int Commande::getID()
{
    return this->id;
}

void Commande::setRef(String^ reference)
{
    this->reference = reference;
}

String^ Commande::getref()
{
    return this->reference;
}

void Commande::setddl(String^ ddl)
{
    this->ddl = ddl;
}

String^ Commande::getddl()
{
    return this->ddl;
}

void Commande::setde(String^ de)
{
    this->de = de;
}

String^ Commande::getde()
{
    return this->de;
}

void Commande::setdds(String^ dds)
{
    this->dds = dds;
}

String^ Commande::getdds()
{
    return this->dds;
}

void Commande::settotalht(double totalht)
{
    this->totalht = totalht;
}
double Commande::gettotalht()
{
    return this->totalht;
}

void Commande::settotalttc(double totalttc)
{
    this->totalttc = totalttc;
}
double Commande::gettotalttc()
{
    return this->totalttc;
}

void Commande::setid_adresse_cmd_adresse_livraison(int id_adresse_cmd_adresse_livraison)
{
    this->id_adresse_cmd_adresse_livraison = id_adresse_cmd_adresse_livraison;
}
int Commande::getid_adresse_cmd_adresse_livraison()
{
    return this->id_adresse_cmd_adresse_livraison;
}

void Commande::setidclient(int idclient)
{
    this->id_client = idclient;
}
int Commande::getidclient()
{
    return this->id_client;
}

void Commande::setid_adresse_cmd_adresse_facturation(int idadressecmfacturation)
{
    this->id_adresse_cmd_adresse_facturation = idadressecmfacturation;
}

int Commande::getid_adresse_cmd_adresse_facturation()
{
    return this->id_adresse_cmd_adresse_facturation;
}

void Commande::setsuppr(bool suppr)
{
    this->suppr = suppr;
}

bool Commande::getsuppr()
{
    return this->suppr;
}

array<Commande^>^ Commande::getCommande()
{
    String^ tableName = Commande::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Commande^>^ Commandes = gcnew array<Commande^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Commandes[i] = gcnew Commande(ds->Tables[tableName]->Rows[i]);
    return Commandes;
}

array<Commande^>^ Commande::getCommandeActive()
{
    String^ tableName = Commande::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE supprimer = 'false';", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Commande^>^ Commandes = gcnew array<Commande^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Commandes[i] = gcnew Commande(ds->Tables[tableName]->Rows[i]);
    return Commandes;
}

String^ Commande::getTableName()
{
    return "commande";
}
int Commande::persist()
{
    String^ tableName = Commande::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName +
            " VALUES('" + this->getref() + "','" + this->getddl() + "','" + this->getde() + "','" + this->getdds() + "','" + this->gettotalht() + "','" + this->gettotalttc() + "','" + this->getid_adresse_cmd_adresse_livraison() + "','" + this->getidclient() + "','" + this->getid_adresse_cmd_adresse_facturation() +"','" + this->getsuppr() + "');SELECT @@IDENTITY;"); /*questio*/
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            " SET reference = '" + this->getref() + "' " +
            ",date_livraison = '" + this->getddl() + "' " +
            ",date_emission = '" + this->getde() + "' " +
            ",date_de_solde = '" + this->getdds() + "' " +
            ",total_ht = '" + this->gettotalht() + "' " +
            ",total_ttc = '" + this->gettotalttc() + "' " +
            ",id_adresse_cmd_adresse_livraison = '" + this->getid_adresse_cmd_adresse_livraison() + "' " +
            ",id_client = '" + this->getidclient() + "' " +
            ",id_adresse_cmd_adresse_facturation = '" + this->getid_adresse_cmd_adresse_facturation() + "' " +
            ",supprimer = '" + this->getsuppr() +
        "' WHERE(id = " + this->getID() + ");");
    }
    return this->id;
}

