#pragma once
using namespace System::Data;
using namespace System;

ref class Paiement {
private:
    int id;
    String^ date;
    String^ moyen;
    double montant;
    int id_commande;

public:
    Paiement();
    Paiement(DataRow^ DR);
    void setID(int);
    int getID();
    void setDate(String^);
    String^ getDate();
    void setMoyen(String^);
    String^ getMoyen();
    void setMontant(double);
    double getMontant();
    void setId_Commande(int);
    int getId_Commande();

    static array<Paiement^>^ getPaiement();
    int persist();
    static String^ getTableName();
};


