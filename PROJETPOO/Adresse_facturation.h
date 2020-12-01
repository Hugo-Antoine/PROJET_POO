#pragma once

using namespace System::Data;
using namespace System;

ref class Adresse_facturation {
private:
    int id;
    int id_adresse;
    bool suppr;


public:
    Adresse_facturation();
    Adresse_facturation(DataRow^ DR);
    void setID(int);
    int getID();
    void setID_adresse(int);
    int getID_adresse();
    void setsuppr(bool);
    bool getsuppr();


    static array<Adresse_facturation^>^ getAdresse_facturation();
    void persist();
    static String^ getTableName();
};

