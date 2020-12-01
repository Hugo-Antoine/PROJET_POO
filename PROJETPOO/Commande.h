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
    float totalht;
    float totalttc;
    int id_adresse;
    int id_client;
    int id_adresse_cmd_adresse_facturation;

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

    void settotalht(float);
    int gettotalht();

    void settotalttc(float);
    int gettotalttc();

    void setidadresse(int);
    int getidadresse();

    void setidclient(int);
    int getidclient();

    void setidadressecmdfacturation(int);
    int getidadressecmdfacturation();



    static array<Commande^>^ getCommande();
    void persist();
    static String^ getTableName();
};

