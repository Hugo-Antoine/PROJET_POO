#pragma once

using namespace System::Data;
using namespace System;

ref class Clients {
private:
    int id;
    String^ nom;
    String^ prenom;
    String^ ddn;
    String^ dpa;
    bool supr;


public:
    Clients();
    Clients(DataRow^ DR);
    void setID(int);
    int getID();
    void setNom(String^);
    String^ getNom();
    void setPrenom(String^);
    String^ getPrenom();
    void setddn(String^);
    String^ getddn();
    void setdpa(String^);
    String^ getdpa();
    void setsupr(bool);
    bool getsupr();
    static array<Clients^>^ getClient();
    static array<Clients^>^ getClientActif();
    void persist();
    static String^ getTableName();
};
