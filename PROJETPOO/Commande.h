#pragma once

using namespace System::Data;
using namespace System;

ref class Commande {
private:
    int id;
    String^ reference;
    String^ ddl;
    String^ de;
    String^ dds;
    double totalht;
    double totalttc;
    int id_adresse_cmd_adresse_livraison;
    int id_client;
    int id_adresse_cmd_adresse_facturation;
    bool suppr;

public:
    Commande();
    Commande(DataRow^ DR);

    void setID(int);
    int getID();

    void setRef(String^);
    String^ getref();

    void setddl(String^);
    String^ getddl();

    void setde(String^);
    String^ getde();

    void setdds(String^);
    String^ getdds();

    void settotalht(double);
    double gettotalht();

    void settotalttc(double);
    double gettotalttc();

    void setid_adresse_cmd_adresse_livraison(int);
    int getid_adresse_cmd_adresse_livraison();

    void setidclient(int);
    int getidclient();

    void setid_adresse_cmd_adresse_facturation(int);
    int getid_adresse_cmd_adresse_facturation();

    void setsuppr(bool);
    bool getsuppr();


    static array<Commande^>^ getCommande();
    static array<Commande^>^ getCommandeActive();
    int persist();
    static String^ getTableName();
};

