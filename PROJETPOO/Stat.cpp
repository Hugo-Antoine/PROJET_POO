#include "pch.h"
#include "Stat.h"

Stat::Stat()
{
    connexion = gcnew SQL_CMD;
}

array<String^>^ Stat::GetR1()
{
    String^ tableName = "R1";
    DataSet^ ds = connexion->getRows("SELECT nom FROM article WHERE seuil_reapro > quantite_stock AND article.supprimer = 'false'", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ R1 = gcnew array<String^>(size);
    for (int i = 0; i < size; i++) {
        R1[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    }
    return R1;
}

array<String^>^ Stat::GetR2()
{
    String^ tableName = "R2";      
    DataSet^ ds = connexion->getRows("SELECT TOP 10 article.nom FROM article INNER JOIN commande_article ON article.id = commande_article.id WHERE article.supprimer = 'false' order by quantite desc", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ R2 = gcnew array<String^>(size);
    for (int i = 0; i < size; i++) {
        R2[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    }
    return R2;
}

array<String^>^ Stat::GetR3()
{
    String^ tableName = "R3";
    DataSet^ ds = connexion->getRows("SELECT TOP 10 article.nom FROM article INNER JOIN commande_article ON article.id = commande_article.id WHERE article.supprimer = 'false' order by quantite asc", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ R3 = gcnew array<String^>(size);
    for (int i = 0; i < size; i++) {
        R3[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    }
    return R3;
}

array<String^>^ Stat::GetR4()
{
    String^ tableName = "R4";
    DataSet^ ds = connexion->getRows("SELECT SUM((1+article.TVA_rate/100)*palier_remise.prix_unitaire_ht*article.quantite_stock) AS valeur_achat_stock FROM article INNER JOIN palier_remise ON article.id = palier_remise.id_article WHERE article.supprimer = 'false'", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ R4 = gcnew array<String^>(size);
    for (int i = 0; i < size; i++) {
        R4[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    }
    return R4;
}

array<String^>^ Stat::GetR5()
{
    String^ tableName = "R5";
    DataSet^ ds = connexion->getRows("SELECT SUM(article.quantite_stock*palier_remise.prix_unitaire_ht) AS valeur_com_stock  FROM article INNER JOIN palier_remise ON article.id = palier_remise.id_article WHERE article.supprimer = 'false'", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ R5 = gcnew array<String^>(size);
    for (int i = 0; i < size; i++) {
        R5[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    }
    return R5;
}

array<String^>^ Stat::GetR6()
{
    String^ tableName = "R6";
    DataSet^ ds = connexion->getRows("SELECT AVG(commande.total_ttc - commande_article.remise) AS panier_moyen FROM commande INNER JOIN commande_article on commande.id = commande_article.id WHERE commande.supprimer = 'false'", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ R6 = gcnew array<String^>(size);
    for (int i = 0; i < size; i++) {
        R6[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    }
    return R6;
}

array<String^>^ Stat::GetR7(String^ nom, String^ prenom)
{
    String^ tableName = "R7";
    DataSet^ ds = connexion->getRows("SELECT SUM(commande.total_ttc) AS total_client FROM client INNER JOIN commande ON client.id = commande.id_client WHERE client.nom = '" + nom + "' AND client.prenom = '" + prenom + "'" + " AND client.supprimer = 'false'", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ R7 = gcnew array<String^>(size);
    for (int i = 0; i < size; i++) {
        R7[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    }
    return R7;
}

array<String^>^ Stat::GetR8(String^ mois)
{
    String^ tableName = "R8";
    DataSet^ ds = connexion->getRows("SELECT SUM(total_ttc) AS chiffre_affaire FROM commande WHERE MONTH(date_de_solde) = '" + mois + "'" + " AND commande.supprimer = 'false'", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ R8 = gcnew array<String^>(size);
    for (int i = 0; i < size; i++) {
        R8[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    }
    return R8;
}

array<String^>^ Stat::GetR9(double TVA, double margeCom, double remiseCom, double demInco) {
    String^ tableName = "R9";
    DataSet^ ds = connexion->getRows("SELECT SUM(valeur_achat_stock) FROM( SELECT SUM(((1+" + TVA + "/100.0)*palier_remise.prix_unitaire_ht)*article.quantite_stock) AS valeur_achat_stock FROM article INNER JOIN palier_remise ON article.id = palier_remise.id_article WHERE article.supprimer = 'false' UNION ALL SELECT (SUM(((1+" + TVA + "/100.0)*palier_remise.prix_unitaire_ht)*article.quantite_stock)*(" + margeCom + "/100.0)) AS valeur_achat_stock FROM article INNER JOIN palier_remise ON article.id = palier_remise.id_article WHERE article.supprimer = 'false' UNION ALL SELECT -1*(SUM(((1+" + TVA + "/100.0)*palier_remise.prix_unitaire_ht)*article.quantite_stock)*(" + remiseCom + "/100.0)) AS valeur_achat_stock FROM article INNER JOIN palier_remise ON article.id = palier_remise.id_article WHERE article.supprimer = 'false' UNION ALL SELECT -1*(SUM(((1+" + TVA + "/100.0)*palier_remise.prix_unitaire_ht)*article.quantite_stock)*(" + demInco + "/100.0)) AS valeur_achat_stock FROM article INNER JOIN palier_remise ON article.id = palier_remise.id_article WHERE article.supprimer = 'false') T", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ R9 = gcnew array<String^>(size);
    for (int i = 0; i < size; i++) {
        R9[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    }
    return R9;
}