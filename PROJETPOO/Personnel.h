#pragma once
using namespace System::Data;
using namespace System;

ref class Personnel {
private:
    int id;
    String^ nom;
    String^ prenom;
    String^ de;
    int id_adresse;
    int id_personnel;

public:
    Personnel();
    Personnel(DataRow^ DR);
    void setID(int);
    int getID();
    void setNom(String^);
    String^ getNom();
    void setPrenom(String^);
    String^ getPrenom();
    void setDe(String^);
    String^ getDe();
    void setIdAdresse(int);
    int getIdAdresse();
    void setIdPersonnel(int);
    int getIdPersonnel();

    static array<Personnel^>^ getPersonnel();
    void persist();
    void Delete();
    static String^ getTableName();
};

