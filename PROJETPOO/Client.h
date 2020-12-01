#pragma once

using namespace System::Data;
using namespace System;

ref class Client {
private:
    int id;
    String^ nom;
    String^ prenom;
    String^ ddn;
    String^ dpa;
    bool supr;


public:
    Client();
    Client(DataRow^ DR);
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


    static array<Client^>^ getClient();
    void persist();
    static String^ getTableName();
};
