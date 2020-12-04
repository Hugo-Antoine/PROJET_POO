#include "pch.h"
#include "Article.h"
#include "SQL_CMD.h"
#include "Commande_article.h"
#include "Commande.h"
#include "Client.h"


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

String^ Article::getTableName2()
{
    return "commande_article";
}

String^ Article::getTableName3()
{
    return "palier_remise";
}

String^ Article::getTableName4()
{
    return "commande";
}

String^ Article::getTableName5()
{
    return "client";
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

    connexion->update("SELECT * FROM article WHERE( seuil_reapro > quantite_stock );");

    return this->id;
}

int Article::requete2() {

    String^ tableName = Article::getTableName();
    String^ tableName2 = Article::getTableName2();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    connexion->update("SELECT TOP 10 article.id, article.nom, article.type_article FROM article INNER JOIN commande_article ON article.id = commande_article.id order by quantite desc);" );

    return this->id;
}

int Article::requete3() {

    String^ tableName = Article::getTableName();
    String^ tableName2 = Article::getTableName2();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    connexion->update("SELECT TOP 10 article.id, article.nom, article.type_article FROM article INNER JOIN commande_article ON article.id = commande_article.id order by quantite asc);" );

    return this->id;
}


int Article::requete4() {

    String^ tableName = Article::getTableName();
    String^ tableName3 = Article::getTableName3();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    connexion->update("SELECT SUM(article.quantite_stock*palier_remise.prix_unitaire_ht) AS valeur_com_stock  FROM article INNER JOIN palier_remise ON article.id = palier_remise.id_article" + "); ");

    return this->id;
}


int Article::requete5() {

    String^ tableName = Article::getTableName();
    String^ tableName3 = Article::getTableName3();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    connexion->update("SELECT SUM(((1+article.TVA_rate/100)*palier_remise.prix_unitaire_ht)*article.quantite_stock) AS valeur_achat_stock FROM article INNER JOIN palier_remise ON article.id = palier_remise.id_article" + "); ");

    return this->id;
}



int Article::requete6() {
    
    String^ tableName2 = Article::getTableName2();
    String^ tableName4 = Article::getTableName4();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    connexion->update("SELECT AVG(commande.total_ttc - commande_article.remise) AS panier_moyen FROM commande INNER JOIN commande_article on commande.id = commande_article.id"  );

    return this->id;
}


/*
int Article::requete7() {
    String^ tableName4 = Article::getTableName4();
    String^ tableName5 = Article::getTableName5();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    connexion->update("SELECT SUM(commande.total_ttc)" + "AS" + "total_client" + "FROM" + tableName5 +  "INNER JOIN" + tableName4 + "ON" + "client.id = commande.id_client" + "WHERE" + "client.nom = " + this->getNomChoisi() + "AND" + this->getPrenomChoisi() + ");"  );

    return this->id;
}

int Article::requete8() {
    
    String^ tableName2 = Article::getTableName2();
    String^ tableName4 = Article::getTableName4();
    SQL_CMD^ connexion = gcnew SQL_CMD();

    connexion->update("SELECT SUM(total_ttc)" + "AS" + "chiffre_affaire" + "FROM" + tableName4 + "WHERE date_de_solde" + "BETWEEN" + this->date1Choisi() + "AND" + this->date2Choisi() + ");"  );

    return this->id;
}
*/