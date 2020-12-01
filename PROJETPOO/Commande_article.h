#pragma once

using namespace System::Data;
using namespace System;

ref class Commande_article {
private:
    int id;
    int id_commande;
    int quantite;
    double prix_unitaire_ht;
    int remise;


public:
    Commande_article();
    Commande_article(DataRow^ DR);
    void setID(int);
    int getID();
    void setID_commande(int);
    int getID_commande();
    void setQuantite(int);
    int getQuantite();
    void setPrixunitaire(double);
    double getPrixunitaire();
    void setremise(int);
    int getremise();


    static array<Commande_article^>^ getCommande_article();
    void persist();
    static String^ getTableName();
};
