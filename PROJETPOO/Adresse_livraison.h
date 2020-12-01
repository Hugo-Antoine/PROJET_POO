#pragma once

using namespace System::Data;
using namespace System;

ref class Adresse_livraison {
private:
    int id;
    int id_client;
    bool suppr;


public:
    Adresse_livraison();
    Adresse_livraison(DataRow^ DR);
    void setID(int);
    int getID();
    void setID_client(int);
    int getID_client();
    void setsuppr(bool);
    bool getsuppr();


    static array<Adresse_livraison^>^ getAdresse_livraison();
    void persist();
    static String^ getTableName();
};

