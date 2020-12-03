#pragma once

using namespace System::Data;
using namespace System;

ref class Commande_article {
private:
    int id;
    int id_article;
    int id_commande;
    int quantite;
    double prix_unitaire_ht;
    int remise;
    bool suppr;


public:
    Commande_article();
    Commande_article(DataRow^ DR);
    void setID(int);
    int getID();
    void setID_article(int);
    int getID_article();
    void setID_commande(int);
    int getID_commande();
    void setQuantite(int);
    int getQuantite();
    void setPrixunitaire(double);
    double getPrixunitaire();
    void setremise(int);
    int getremise();
    void setSuppr(bool);
    bool getSuppr();

    static array<Commande_article^>^ getCommande_article();
    static array<Commande_article^>^ getCommande_articleActive();
    static array<Commande_article^>^ getCommande_articleActive(int);
    void persist();
    static String^ getTableName();
};
