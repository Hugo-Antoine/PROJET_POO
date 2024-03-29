#include "pch.h"
#include "Personnel.h"
#include "SQL_CMD.h"

    Personnel::Personnel()
    {
        this->id = -1;
        this->nom = "";
        this->prenom = "";
        this->de = "";
        this->supprimer = false;
        this->id_adresse = 0;
        this->id_personnel = 0;
    }

    Personnel::Personnel(DataRow^ DR)
    {
        this->id = Convert::ToInt32(DR->ItemArray[0]);
        this->nom = Convert::ToString(DR->ItemArray[1]);
        this->prenom = Convert::ToString(DR->ItemArray[2]);
        this->de = Convert::ToString(DR->ItemArray[3]);
        this->supprimer = Convert::ToBoolean(DR->ItemArray[4]);
        this->id_adresse = Convert::ToInt32(DR->ItemArray[5]);
        if (DR->IsNull("id_personnel"))
            this->id_personnel = 0;
        else 
            this->id_personnel = Convert::ToInt32(DR->ItemArray[6]);     
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
    void Personnel::setPrenom(String^ prenom)
    {
        this->prenom = prenom;
    }
    String^ Personnel::getPrenom()
    {
        return this->prenom;
    }
    void Personnel::setDe(String^ de)
    {
        this->de = de;
    }
    String^ Personnel::getDe()
    {
        return this->de;
    }
    void Personnel::setSupprimer(bool supprimer)
    {
        this->supprimer = supprimer;
    }
    bool Personnel::getSupprimer()
    {
        return this->supprimer;
    }
    void Personnel::setIdAdresse(int id_adresse)
    {
        this->id_adresse = id_adresse;
    }
    int Personnel::getIdAdresse()
    {
        return this->id_adresse;
    }

    void Personnel::setIdPersonnel(int id_personnel)
    {
        this->id_personnel = id_personnel;
    }
    int Personnel::getIdPersonnel()
    {
        return this->id_personnel;
    }

    array<Personnel^>^ Personnel::getPersonnelActif()
    {
        String^ tableName = Personnel::getTableName();
        //Requ�te pour r�cup�rer � partir de Sql Server 
        //le DataSet contenant les personnes
        SQL_CMD^ connexion = gcnew SQL_CMD();
        DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE supprimer = 'false';", tableName);

        int size = ds->Tables[tableName]->Rows->Count;
        array<Personnel^>^ personnes = gcnew array<Personnel^>(size);

        //remplir le tableau personnes � partir des personnes r�cup�r�e dans DS.
        for (int i = 0; i < size; i++)
            personnes[i] = gcnew Personnel(ds->Tables[tableName]->Rows[i]);
        return personnes;
    }

    array<Personnel^>^ Personnel::getPersonnel()
    {
        String^ tableName = Personnel::getTableName();
        //Requ�te pour r�cup�rer � partir de Sql Server 
        //le DataSet contenant les personnes
        SQL_CMD^ connexion = gcnew SQL_CMD();
        DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

        int size = ds->Tables[tableName]->Rows->Count;
        array<Personnel^>^ personnes = gcnew array<Personnel^>(size);

        //remplir le tableau personnes � partir des personnes r�cup�r�e dans DS.
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
            this->id = connexion->insert("INSERT INTO " + tableName +
                " VALUES('" + this->getNom() + "','" + this->getPrenom() + "','" + this->getDe() + "','" + this->getSupprimer() + "','" + this->getIdAdresse() + "'," + (this->getIdPersonnel() == 0 ? "NULL" : Convert::ToString(this->getIdPersonnel())) + ");SELECT @@IDENTITY;");
        }
        else
        {
            //Update
            connexion->update("UPDATE " + tableName +
                " SET nom = '" + this->getNom() + "' ,prenom = '" + this->getPrenom() + "' ,date_embauche = '" + this->getDe() + "' ,supprimer = '" + this->getSupprimer() +"', id_adresse = " + this->getIdAdresse() + " ,id_personnel = " + (this->getIdPersonnel() == 0?"NULL": Convert::ToString(this->getIdPersonnel())) +
                " WHERE(id = " + this->getID() + ");");
        }
    }

