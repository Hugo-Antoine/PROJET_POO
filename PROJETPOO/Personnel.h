#pragma once
using namespace System::Data;
using namespace System;

ref class Personnel {
private:
    int id;
    String^ nom;
    String^ prenom;
    String^ de;
    bool supprimer;
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
    void setSupprimer(bool);
    bool getSupprimer();
    void setIdAdresse(int);
    int getIdAdresse();
    void setIdPersonnel(int);
    int getIdPersonnel();
    static array<Personnel^>^ getPersonnel();
    static array<Personnel^>^ getPersonnelActif();
    void persist();
    static String^ getTableName();
};

