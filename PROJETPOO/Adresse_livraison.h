#pragma once

using namespace System::Data;
using namespace System;

ref class Adresse_livraison {
private:
    int id;
    int id_adresse;
    int id_client;
    bool suppr;

public:
    Adresse_livraison();
    Adresse_livraison(DataRow^ DR);
    void setID(int);
    int getID();
    void setIdAdresse(int);
    int getIdAdresse(); 
    void setIdClient(int);
    int getIdClient();
 
    void setsuppr(bool);
    bool getsuppr();


    static array<Adresse_livraison^>^ getAdresse_livraison();
    static array<Adresse_livraison^>^ getAdresse_livraisonActive();
    static array<Adresse_livraison^>^ getAdresse_livraisonActive(int);
    void persist();
    static String^ getTableName();
};

