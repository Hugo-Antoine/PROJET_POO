#include "pch.h"
#include "Palier_remise.h"
#include "SQL_CMD.h"

Palier_Remise::Palier_Remise()
{
    this->id = -1;
    this->q_mini = 0;
    this->p_u_ht = 0;
    this->id_article = 0;
}

Palier_Remise::Palier_Remise(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->q_mini = Convert::ToInt32(DR->ItemArray[1]);
    this->p_u_ht = Convert::ToDouble(DR->ItemArray[2]);
    this->id_article = Convert::ToInt32(DR->ItemArray[3]);
}
void Palier_Remise::setID(int id)
{
    this->id = id;
}
int Palier_Remise::getID()
{
    return this->id;
}
void Palier_Remise::setQ_Mini(int q_mini)
{
    this->q_mini = q_mini;
}
int Palier_Remise::getQ_Mini()
{
    return this->q_mini;
}
void Palier_Remise::setP_U_HT(double p_u_ht)
{
    this->p_u_ht = p_u_ht;
}
double Palier_Remise::getP_U_HT()
{
    return this->p_u_ht;
}
void Palier_Remise::setId_Article(int id_article)
{
    this->id_article = id_article;
}
int Palier_Remise::getId_Article()
{
    return this->id_article;
}


array<Palier_Remise^>^ Palier_Remise::getPalier_Remise()
{
    String^ tableName = Palier_Remise::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les personnes
    SQL_CMD^ connexion = gcnew SQL_CMD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Palier_Remise^>^ personnes = gcnew array<Palier_Remise^>(size);

    //remplir le tableau personnes à partir des personnes récupérée dans DS.
    for (int i = 0; i < size; i++)
        personnes[i] = gcnew Palier_Remise(ds->Tables[tableName]->Rows[i]);
    return personnes;
}
String^ Palier_Remise::getTableName()
{
    return "palier_remise";
}
int Palier_Remise::persist()
{
    String^ tableName = Palier_Remise::getTableName();
    SQL_CMD^ connexion = gcnew SQL_CMD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName +
            " VALUES('" + this->getQ_Mini() + "','" + this->getP_U_HT() + "','" + this->getId_Article() + "');SELECT @@IDENTITY;");
        return this->id;
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            " SET quantite_mini = '" + this->getQ_Mini() + "' ,prix_unitaire_ht = '" + this->getP_U_HT() + "' ,id_article = '" + this->getId_Article() +
            "' WHERE(id = " + this->getID() + ");");
    }
}