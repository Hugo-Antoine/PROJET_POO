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
    String^ getLigne1();
    void setPays(String^);
    String^ getPays();
    void setVille(String^);
    String^ getVille();
    void setCp(String^);
    String^ getCp();


    static array<Adresse^>^ getAdresse();
    int persist();
    static String^ getTableName();
};
