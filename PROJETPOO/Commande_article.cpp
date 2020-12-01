#include "pch.h"
#include "Commande_article.h"
#include "SQL_CMD.h"

Commande_article::Commande_article()
{
    this->id = -1;
    this->id_commande = -1;
    this->quantite = 0;
    this->prix_unitaire_ht = 0;
    this->remise = 0;

}

Commande_article::Commande_article(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->id_commande = Convert::ToInt32(DR->ItemArray[1]);
    this->quantite = Convert::ToInt32(DR->ItemArray[2]);
    this->prix_unitaire_ht = Convert::ToDouble(DR->ItemArray[3]);
    this->remise = Convert::ToInt32(DR->ItemArray[4]);
}

void Commande_article::setID(int id)
{
    this->id = id;
}
int Commande_article::getID()
{
    return this->id;
}

void Commande_article::setID_commande(int id_commande)
{
    this->id_commande = id_commande;
}

int Commande_article::getID_commande()
{
    return this->id_commande;
}


void Commande_article::setQuantite(int quantite)
{
    this->quantite = quantite;
}


int Commande_article::getQuantite()
{
    return this->quantite;
}

void Commande_article::setPrixunitaire(double prixunitaire)
{

    this->prix_unitaire_ht = prixunitaire;
}

double Commande_article::getPrixunitaire()
{
    return this->prix_unitaire_ht;
}

void Commande_article::setremise(int remise)
{
    this->remise = remise;
}

int Commande_article::getremise()
{
    return this->remise;
}

array<Commande_article^>^ Commande_article::getCommande_article()
{
    String^ tableName = Commande_article::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Commande_article^>^ Commande_articles = gcnew array<Commande_article^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Commande_articles[i] = gcnew Commande_article(ds->Tables[tableName]->Rows[i]);
    return Commande_articles;
}
String^ Commande_article::getTableName()
{
    return "Commande_article";
}
void Commande_article::persist()
{
    String^ tableName = Commande_article::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName + " (id_commande, quantite, prix_unitaire_ht, remise) " +
            "VALUES('" + this->getID_commande() + "','" + this->getQuantite() + "','" + this->getPrixunitaire() + "','" + this->getremise() + "');SELECT @@IDENTITY;"); /*questio*/
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            "' SET id_commande = '" + this->getID_commande() + "' " +
            "',quantite = '" + this->getQuantite() + "' " +
            "',prix_unitaire_ht = '" + this->getPrixunitaire() + "' " +
            "',remise = '" + this->getremise()
            + ");");

        "WHERE(id = " + this->getID() + ");";
    }
}
