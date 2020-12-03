#pragma once

using namespace System::Data;
using namespace System;

ref class Adresse_facturation {
private:
    int id;
    int id_client;
    int id_adresse;
    bool suppr;


public:
    Adresse_facturation();
    Adresse_facturation(DataRow^ DR);
    void setID(int);
    int getID();
    void setIdClient(int);
    int getIdClient();
    void setIdAdresse(int);
    int getIdAdresse();
    void setsuppr(bool);
    bool getsuppr();


    static array<Adresse_facturation^>^ getAdresse_facturation();
    static array<Adresse_facturation^>^ getAdresse_facturationActive();
    static array<Adresse_facturation^>^ getAdresse_facturationActive(int);
    void persist();
    static String^ getTableName();
};

