#include "pch.h"
#include "Article.h"
#include "SQL_CMD.h"
#include "Commande_article.h"




Article::Article()
{
    this->id = -1;
    this->nom = "";
    this->type_Article = "";
    this->TVA_rate = 0, 0;
    this->quantite_stock = 0;
    this->seuil_reapro = 0;
    this->supr = false;
}

Article::Article(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->nom = Convert::ToString(DR->ItemArray[1]);
    this->type_Article = Convert::ToString(DR->ItemArray[2]);
    this->TVA_rate = Convert::ToDouble(DR->ItemArray[3]);
    this->quantite_stock = Convert::ToInt32(DR->ItemArray[4]);
    this->seuil_reapro = Convert::ToInt32(DR->ItemArray[5]);
}
void Article::setID(int id)
{
    this->id = id;
}
int Article::getID()
{
    return this->id;
}
void Article::setName(String^ nom)
{
    this->nom = nom;
}
String^ Article::getName()
{
    return this->nom;
}

void Article::setTypeA(String^ Type_Article)
{
    this->type_Article = Type_Article;
}

String^ Article::getTypeA()
{
    return this->type_Article;
}


void Article::setTVA(double TVA_rate)
{
    this->TVA_rate = TVA_rate;
}

double Article::getTVA()
{
    return this->TVA_rate;
}

void Article::setQuantite(int quantite)
{
    this->quantite_stock = quantite;
}

int Article::getQuantite()
{
    return this->quantite_stock;
}

void Article::setSeuil(int seuil)
{
    this->seuil_reapro = seuil;
}

int Article::getSeuil()
{
    return this->seuil_reapro;
}

void Article::setsupr(bool supr)
{
    this->supr = supr;
}

bool Article::getsupr()
{
    return this->supr;

}


array<Article^>^ Article::getArticle()
{
    String^ tableName = Article::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Article^>^ Articles = gcnew array<Article^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Articles[i] = gcnew Article(ds->Tables[tableName]->Rows[i]);
    return Articles;
}


array<Article^>^ Article::getArticleActif()
{
    String^ tableName = Article::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE supprimer = 'false' ;", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Article^>^ Articles = gcnew array<Article^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        Articles[i] = gcnew Article(ds->Tables[tableName]->Rows[i]);
    return Articles;
}



String^ Article::getTableName()
{
    return "article";
}
int Article::persist()
{
    String^ tableName = Article::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName + " (nom, type_article, TVA_rate, quantite_stock, seuil_reapro, supprimer) " +
            "VALUES('" + this->getName() + "','" + this->getTypeA() + "','" + this->getTVA() + "','" + this->getQuantite() + "','" + this->getSeuil() + "','" + this->getsupr() + "');SELECT @@IDENTITY;");


    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            " SET nom = '" + this->getName() + "' " +
            ",type_article = '" + this->getTypeA() + "' " +
            " ,TVA_rate = '" + this->getTVA() + "' " +
            " ,quantite_stock = '" + this->getQuantite() + " '" +
            " ,seuil_reapro = '" + this->getSeuil() + "' " +
            " ,supprimer = '" + this->getsupr() + "' " +
            "WHERE(id = " + this->getID() + "); ");
    }




    return this->id;
}
 
int Article::requete1() {

    String^ tableName = Article::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    connexion->update("SELECT * FROM " + tableName + "WHERE( " + this->getSeuil() + " > " +  this->getQuantite()  + " );" );

    return this->id;
}


