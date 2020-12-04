#pragma once
using namespace System::Data;
using namespace System;

ref class Palier_Remise {
private:
    int id;
    int q_mini;
    double p_u_ht;
    int id_article;
    bool suppr;

public:
    Palier_Remise();
    Palier_Remise(DataRow^ DR);
    void setID(int);
    int getID();
    void setQ_Mini(int);
    int getQ_Mini();
    void setP_U_HT(double);
    double getP_U_HT();
    void setId_Article(int);
    int getId_Article();
    void setSuppr(bool);
    bool getSuppr();

    static array<Palier_Remise^>^ getPalier_Remise();
    static array<Palier_Remise^>^ getPalier_RemiseActif();
    static array<Palier_Remise^>^ getPalier_RemiseActif(int);
    int persist();
    static String^ getTableName();
};
