#include "pch.h"
#include "Personnel.h"
#include "SQL_CMD.h"

    Personnel::Personnel()
    {
        this->id = -1;
        this->nom = "";
        this->prenom = "";
        this->de = "";
        this->id_adresse = 0;
        this->id_personnel = 0;
    }

    Personnel::Personnel(DataRow^ DR)
    {
        this->id = Convert::ToInt32(DR->ItemArray[0]);
        this->nom = Convert::ToString(DR->ItemArray[1]);
        this->prenom = Convert::ToString(DR->ItemArray[2]);
        this->de = Convert::ToString(DR->ItemArray[3]);
        this->id_adresse = Convert::ToInt32(DR->ItemArray[5]);
        //this->id_personnel = Convert::ToInt32(DR->ItemArray[6]);
    }
    void Personnel::setID(int id)
    {
        this->id = id;
    }
    int Personnel::getID()
    {
        return this->id;
    }
    void Personnel::setNom(String^ nom)
    {
        this->nom = nom;
    }
    String^ Personnel::getNom()
    {
        return this->nom;
    }
    void Personnel::setPrenom(String^ nom)
    {
        this->prenom = prenom;
    }
    String^ Personnel::getPrenom()
    {
        return this->prenom;
    }
    void Personnel::setDe(String^ nom)
    {
        this->de = de;
    }
    String^ Personnel::getDe()
    {
        return this->de;
    }
    void Personnel::setIdAdresse(int)
    {
        this->id_adresse = id_adresse;
    }
    int Personnel::getIdAdresse()
    {
        return this->id_adresse;
    }

    void Personnel::setIdPersonnel(int)
    {
        this->id_personnel = id_personnel;
    }
    int Personnel::getIdPersonnel()
    {
        return this->id_personnel;
    }

    array<Personnel^>^ Personnel::getPersonnels()
    {
        String^ tableName = Personnel::getTableName();
        //Requête pour récupérer à partir de Sql Server 
        //le DataSet contenant les personnes
        SQL_CMD^ connexion = gcnew SQL_CMD();
        DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

        int size = ds->Tables[tableName]->Rows->Count;
        array<Personnel^>^ personnes = gcnew array<Personnel^>(size);

        //remplir le tableau personnes à partir des personnes récupérée dans DS.
        for (int i = 0; i < size; i++)
            personnes[i] = gcnew Personnel(ds->Tables[tableName]->Rows[i]);
        return personnes;
    }
    String^ Personnel::getTableName()
    {
        return "personnel";
    }
    void Personnel::persist()
    {
        String^ tableName = Personnel::getTableName();
        SQL_CMD^ connexion = gcnew SQL_CMD();
        if (this->id == -1)
        {
            //Insert
            this->id = connexion->insert("INSERT INTO " + tableName + " (nom, prenom, date_embauche, supprimer, id_adresse, id_personnel) " +
                "VALUES('" + this->getNom() + "','" + this->getPrenom()  + "','" + this->getDe() + "','false','" + this->getIdAdresse() + "','" + this->getIdPersonnel() + "');SELECT @@IDENTITY;");
        }
        else
        {
            //Update
            connexion->update("UPDATE " + tableName +
                " SET nom = '" + this->getNom() + "' ,prenom = '" + this->getPrenom() + "' ,date_embauche = '" + this->getDe() + "' ,supprimer = false, id_adresse = " + this->getIdAdresse() + " ,id_personnel = " + this->getIdPersonnel() +
                "WHERE(id = " + this->getID() + ");");
        }
    }

    void Personnel::Delete()
    {
        String^ tableName = Personnel::getTableName();
        SQL_CMD^ connexion = gcnew SQL_CMD();
        connexion->update("UPDATE " + tableName +
            "SET supprimer = true" +
            "WHERE(id = " + this->getID() + ");");
    }

