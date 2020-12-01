#include "pch.h"
#include "adresse.h"
#include "SQL_CMD.h"

Adresse::Adresse()
{
    this->id = -1;
    this->ligne1 = "";
    this->pays = "";
    this->ville = "";
    this->cp = "";
}

Adresse::Adresse(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->ligne1 = Convert::ToString(DR->ItemArray[1]);
    this->pays = Convert::ToString(DR->ItemArray[2]);
    this->ville = Convert::ToString(DR->ItemArray[3]);
    this->cp = Convert::ToString(DR->ItemArray[4]);
}
void Adresse::setID(int id)
{
    this->id = id;
}
int Adresse::getID()
{
    return this->id;
}
void Adresse::setLigne1(String^ ligne1)
{
    this->ligne1 = ligne1;
}
String^ Adresse::getLigne1()
{
    return this->ligne1;
}
void Adresse::setPays(String^ pays)
{
    this->pays = pays;
}
String^ Adresse::getPays()
{
    return this->pays;
}
void Adresse::setVille(String^ ville)
{
    this->ville = ville;
}
String^ Adresse::getVille()
{
    return this->ville;
}
void Adresse::setCp(String^ cp)
{
    this->cp = cp;
}
String^ Adresse::getCp()
{
    return this->cp;
}

array<Adresse^>^ Adresse::getAdresse()
{
    String^ tableName = Adresse::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse^>^ personnes = gcnew array<Adresse^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        personnes[i] = gcnew Adresse(ds->Tables[tableName]->Rows[i]);
    return personnes;
}
String^ Adresse::getTableName()
{
    return "Adresse";
}
int Adresse::persist()
{
    String^ tableName = Adresse::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName +
            " VALUES('" + this->getLigne1() + "','" + this->getPays() + "','" + this->getVille() + "','" + this->getCp() + "');SELECT @@IDENTITY;");
        return this->id;
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            " SET ligne1 = '" + this->getLigne1() + "' ,pays = '" + this->getPays() + "' ,ville = '" + this->getVille() + "' ,code_postal = " + this->getCp() +
            "WHERE(id = " + this->getID() + ");");
    }
}

