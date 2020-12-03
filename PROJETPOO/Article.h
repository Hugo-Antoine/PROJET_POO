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


    static array<Article^>^ getArticle();
    int persist();
    static String^ getTableName();
};