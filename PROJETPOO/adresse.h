#pragma once
using namespace System::Data;
using namespace System;

ref class Adresse {
private:
    int id;
    String^ ligne1;
    String^ pays;
    String^ ville;
    String^ cp;

public:
    Adresse();
    Adresse(DataRow^ DR);
    void setID(int);
    int getID();
    void setLigne1(String^);
    String^ getNom();
    void setPrenom(String^);
    String^ getPrenom();
    void setDe(String^);
    String^ getDe();
    void setIdAdresse(int);
    int getIdAdresse();
    void setIdPersonnel(int);
    int getIdPersonnel();

    static array<Personnel^>^ getPersonnels();
    void persist();
    void Delete();
    static String^ getTableName();
};
