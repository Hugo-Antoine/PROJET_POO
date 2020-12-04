#pragma once

using namespace System::Data;
using namespace System;

ref class Article {
private:
    
    int id;
    String^ nom;
    String^ type_Article;
    double TVA_rate;
    int quantite_stock;
    int seuil_reapro;
    bool supr;

public:
    Article();
    Article(DataRow^ DR);
    void setID(int);
    int getID();

    void setName(String^);
    String^ getName();

    void setTypeA(String^);
    String^ getTypeA();

    void setTVA(double);
    double getTVA();

    void setQuantite(int);
    int getQuantite();

    void setSeuil(int);
    int getSeuil();

    void setsupr(bool);
    bool getsupr();
    static array<Article^>^ getArticle();
    static array<Article^>^ getArticleActif();
    
    int requete1();
    int requete2();
    int requete3();
    int requete4();
    int requete5();
    int requete6();
    /*int requete7();
    int requete8();*/
    int persist();
    static String^ getTableName();
    static String^ getTableName2();
    static String^ getTableName3();
    static String^ getTableName4();
    static String^ getTableName5();
};