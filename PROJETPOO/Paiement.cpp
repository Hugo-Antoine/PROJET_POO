#include "pch.h"
#include "Paiement.h"
#include "SQL_CMD.h"

Paiement::Paiement()
{
    this->id = -1;
    this->date = "";
    this->moyen = "";
    this->montant = 0;
    this->id_commande = 0;
}

Paiement::Paiement(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->date = Convert::ToString(DR->ItemArray[1]);
    this->moyen = Convert::ToString(DR->ItemArray[2]);
    this->montant = Convert::ToDouble(DR->ItemArray[3]);
    this->id_commande = Convert::ToInt32(DR->ItemArray[4]);
}
void Paiement::setID(int id)
{
    this->id = id;
}
int Paiement::getID()
{
    return this->id;
}
void Paiement::setDate(String^ date)
{
    this->date = date;
}
String^ Paiement::getDate()
{
    return this->date;
}
void Paiement::setMoyen(String^ moyen)
{
    this->moyen = moyen;
}
String^ Paiement::getMoyen()
{
    return this->moyen;
}
void Paiement::setMontant(double montant)
{
    this->montant = montant;
}
double Paiement::getMontant()
{
    return this->montant;
}
void Paiement::setId_Commande(int id_commande)
{
    this->id_commande = id_commande;
}
int Paiement::getId_Commande()
{
    return this->id_commande;
}

array<Paiement^>^ Paiement::getPaiement()
{
    String^ tableName = Paiement::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Paiement^>^ personnes = gcnew array<Paiement^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        personnes[i] = gcnew Paiement(ds->Tables[tableName]->Rows[i]);
    return personnes;
}
String^ Paiement::getTableName()
{
    return "paiement";
}
int Paiement::persist()
{
    String^ tableName = Paiement::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName +
            " VALUES('" + this->getDate() + "','" + this->getMoyen() + "','" + this->getMontant() + "','" + this->getId_Commande() + "');SELECT @@IDENTITY;");
        return this->id;
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            " SET date = '" + this->getDate() + "' ,moyen = '" + this->getMoyen() + "' ,montant = '" + this->getMontant() + "' ,id_commande = " + this->getId_Commande() +
            "WHERE(id = " + this->getID() + ");");
    }
}

