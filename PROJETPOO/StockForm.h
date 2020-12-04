#pragma once
#include "Article.h"
#include "Palier_remise.h"

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	/// <summary>
	/// Description résumée de StockForm
	/// </summary>
	public ref class StockForm : public System::Windows::Forms::Form
	{
	private: bool insert = false;
	public:
		StockForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~StockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ stockData;
	private: System::Windows::Forms::Label^ Stock;


	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ type_article;
	private: System::Windows::Forms::Label^ tva_rate;
	private: System::Windows::Forms::Label^ quantite_stock;
	private: System::Windows::Forms::Label^ seuil_reapro;
	private: System::Windows::Forms::Label^ qmr;

	private: System::Windows::Forms::Label^ HT;
	private: System::Windows::Forms::TextBox^ nom_tb;
	private: System::Windows::Forms::TextBox^ type_a_tb;
	private: System::Windows::Forms::TextBox^ tva_rate_tb;
	private: System::Windows::Forms::TextBox^ q_stock_tb;
	private: System::Windows::Forms::TextBox^ sr_tb;
	private: System::Windows::Forms::TextBox^ qmr_tb;
	private: System::Windows::Forms::TextBox^ prix_ht_tb;



	private: System::Windows::Forms::Button^ valider;









	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->stockData = (gcnew System::Windows::Forms::DataGridView());
			this->Stock = (gcnew System::Windows::Forms::Label());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->type_article = (gcnew System::Windows::Forms::Label());
			this->tva_rate = (gcnew System::Windows::Forms::Label());
			this->quantite_stock = (gcnew System::Windows::Forms::Label());
			this->seuil_reapro = (gcnew System::Windows::Forms::Label());
			this->qmr = (gcnew System::Windows::Forms::Label());
			this->HT = (gcnew System::Windows::Forms::Label());
			this->nom_tb = (gcnew System::Windows::Forms::TextBox());
			this->type_a_tb = (gcnew System::Windows::Forms::TextBox());
			this->tva_rate_tb = (gcnew System::Windows::Forms::TextBox());
			this->q_stock_tb = (gcnew System::Windows::Forms::TextBox());
			this->sr_tb = (gcnew System::Windows::Forms::TextBox());
			this->qmr_tb = (gcnew System::Windows::Forms::TextBox());
			this->prix_ht_tb = (gcnew System::Windows::Forms::TextBox());
			this->valider = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockData))->BeginInit();
			this->SuspendLayout();
			// 
			// stockData
			// 
			this->stockData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->stockData->Location = System::Drawing::Point(48, 52);
			this->stockData->Name = L"stockData";
			this->stockData->Size = System::Drawing::Size(772, 391);
			this->stockData->TabIndex = 0;
			// 
			// Stock
			// 
			this->Stock->AutoSize = true;
			this->Stock->Location = System::Drawing::Point(410, 23);
			this->Stock->Name = L"Stock";
			this->Stock->Size = System::Drawing::Size(35, 13);
			this->Stock->TabIndex = 1;
			this->Stock->Text = L"Stock";
			// 
			// Ajouter
			// 
			this->Ajouter->Location = System::Drawing::Point(863, 52);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(75, 23);
			this->Ajouter->TabIndex = 2;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &StockForm::Ajouter_Click);
			// 
			// Modifier
			// 
			this->Modifier->Location = System::Drawing::Point(863, 105);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(75, 23);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &StockForm::Modifier_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->Location = System::Drawing::Point(863, 163);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(75, 23);
			this->Supprimer->TabIndex = 4;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &StockForm::Supprimer_Click);
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(223, 463);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(27, 13);
			this->nom->TabIndex = 5;
			this->nom->Text = L"nom";
			// 
			// type_article
			// 
			this->type_article->AutoSize = true;
			this->type_article->Location = System::Drawing::Point(325, 463);
			this->type_article->Name = L"type_article";
			this->type_article->Size = System::Drawing::Size(66, 13);
			this->type_article->TabIndex = 6;
			this->type_article->Text = L"type d\'article";
			// 
			// tva_rate
			// 
			this->tva_rate->AutoSize = true;
			this->tva_rate->Location = System::Drawing::Point(447, 463);
			this->tva_rate->Name = L"tva_rate";
			this->tva_rate->Size = System::Drawing::Size(39, 13);
			this->tva_rate->TabIndex = 7;
			this->tva_rate->Text = L"% TVA";
			// 
			// quantite_stock
			// 
			this->quantite_stock->AutoSize = true;
			this->quantite_stock->Location = System::Drawing::Point(548, 463);
			this->quantite_stock->Name = L"quantite_stock";
			this->quantite_stock->Size = System::Drawing::Size(91, 13);
			this->quantite_stock->TabIndex = 8;
			this->quantite_stock->Text = L"Quantité en stock";
			// 
			// seuil_reapro
			// 
			this->seuil_reapro->AutoSize = true;
			this->seuil_reapro->Location = System::Drawing::Point(209, 514);
			this->seuil_reapro->Name = L"seuil_reapro";
			this->seuil_reapro->Size = System::Drawing::Size(144, 13);
			this->seuil_reapro->TabIndex = 9;
			this->seuil_reapro->Text = L"seuil de reapprovisionnement";
			// 
			// qmr
			// 
			this->qmr->AutoSize = true;
			this->qmr->Location = System::Drawing::Point(363, 514);
			this->qmr->Name = L"qmr";
			this->qmr->Size = System::Drawing::Size(123, 13);
			this->qmr->TabIndex = 10;
			this->qmr->Text = L"quantite mini pour remise";
			// 
			// HT
			// 
			this->HT->AutoSize = true;
			this->HT->Location = System::Drawing::Point(536, 514);
			this->HT->Name = L"HT";
			this->HT->Size = System::Drawing::Size(41, 13);
			this->HT->TabIndex = 11;
			this->HT->Text = L"prix HT";
			// 
			// nom_tb
			// 
			this->nom_tb->Location = System::Drawing::Point(190, 483);
			this->nom_tb->Name = L"nom_tb";
			this->nom_tb->Size = System::Drawing::Size(100, 20);
			this->nom_tb->TabIndex = 12;
			// 
			// type_a_tb
			// 
			this->type_a_tb->Location = System::Drawing::Point(305, 483);
			this->type_a_tb->Name = L"type_a_tb";
			this->type_a_tb->Size = System::Drawing::Size(100, 20);
			this->type_a_tb->TabIndex = 13;
			// 
			// tva_rate_tb
			// 
			this->tva_rate_tb->Location = System::Drawing::Point(422, 483);
			this->tva_rate_tb->Name = L"tva_rate_tb";
			this->tva_rate_tb->Size = System::Drawing::Size(100, 20);
			this->tva_rate_tb->TabIndex = 14;
			// 
			// q_stock_tb
			// 
			this->q_stock_tb->Location = System::Drawing::Point(539, 483);
			this->q_stock_tb->Name = L"q_stock_tb";
			this->q_stock_tb->Size = System::Drawing::Size(100, 20);
			this->q_stock_tb->TabIndex = 15;
			// 
			// sr_tb
			// 
			this->sr_tb->Location = System::Drawing::Point(226, 530);
			this->sr_tb->Name = L"sr_tb";
			this->sr_tb->Size = System::Drawing::Size(100, 20);
			this->sr_tb->TabIndex = 16;
			// 
			// qmr_tb
			// 
			this->qmr_tb->Location = System::Drawing::Point(375, 530);
			this->qmr_tb->Name = L"qmr_tb";
			this->qmr_tb->Size = System::Drawing::Size(100, 20);
			this->qmr_tb->TabIndex = 17;
			// 
			// prix_ht_tb
			// 
			this->prix_ht_tb->Location = System::Drawing::Point(503, 530);
			this->prix_ht_tb->Name = L"prix_ht_tb";
			this->prix_ht_tb->Size = System::Drawing::Size(100, 20);
			this->prix_ht_tb->TabIndex = 18;
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(801, 504);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(75, 23);
			this->valider->TabIndex = 19;
			this->valider->Text = L"valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &StockForm::valider_Click);
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 591);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->prix_ht_tb);
			this->Controls->Add(this->qmr_tb);
			this->Controls->Add(this->sr_tb);
			this->Controls->Add(this->q_stock_tb);
			this->Controls->Add(this->tva_rate_tb);
			this->Controls->Add(this->type_a_tb);
			this->Controls->Add(this->nom_tb);
			this->Controls->Add(this->HT);
			this->Controls->Add(this->qmr);
			this->Controls->Add(this->seuil_reapro);
			this->Controls->Add(this->quantite_stock);
			this->Controls->Add(this->tva_rate);
			this->Controls->Add(this->type_article);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Stock);
			this->Controls->Add(this->stockData);
			this->Name = L"StockForm";
			this->Text = L"StockForm";
			this->Load += gcnew System::EventHandler(this, &StockForm::StockForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void StockForm_Load(System::Object^ sender, System::EventArgs^ e) {

		this->nom->Hide();
		this->nom_tb->Hide();
		this->type_article->Hide();
		this->type_a_tb->Hide();
		this->tva_rate->Hide();
		this->tva_rate_tb->Hide();
		this->HT->Hide();
		this->prix_ht_tb->Hide();
		this->seuil_reapro->Hide();
		this->sr_tb->Hide();
		this->quantite_stock->Hide();
		this->q_stock_tb->Hide();
		this->qmr->Hide();
		this->qmr_tb->Hide();
		this->valider->Hide();

		//
		//On créait les colonnes de la table
		//

		this->stockData->ColumnCount = 7;
		this->stockData->Columns[0]->Name = "Nom";
		this->stockData->Columns[1]->Name = "Type_article";
		this->stockData->Columns[2]->Name = "Tva_rate";
		this->stockData->Columns[3]->Name = "Quantite_stock";
		this->stockData->Columns[4]->Name = "Seuil_réappro";
		this->stockData->Columns[5]->Name = "Quantite_remise";
		this->stockData->Columns[6]->Name = "Prix_HT";

		//
		//On remplit les colonnes avec les données de la bdd
		//

		stockData->Rows->Clear();

		array<Article^>^ ArticleActif = Article::getArticleActif();
		array<Palier_Remise^>^ PalierActif = Palier_Remise::getPalier_Remise();


		Article^ ar = gcnew Article();
		Palier_Remise^ pr = gcnew Palier_Remise();

		
		for (int i = 0; i < ArticleActif->Length; i++)
		{
			ar = ArticleActif[i];
			for (int i = 0; i < PalierActif->Length; i++) {
				if (PalierActif[i]->getId_Article() == ar->getID()) {
					pr = PalierActif[i];
				}	
			}
			stockData->Rows->Add(ar->getName(), ar->getTypeA(), ar->getTVA(), ar->getQuantite(), ar->getSeuil(), pr->getQ_Mini(), pr->getP_U_HT());
		}
	}

	private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {

		//set tout à rien

		this->insert = true;
		this->nom_tb->Text = "";
		this->type_a_tb->Text = "";
		this->tva_rate_tb->Text = "";
		this->prix_ht_tb->Text = "";
		this->sr_tb->Text = "";
		this->q_stock_tb->Text = "";
		this->qmr_tb->Text = "";

		this->nom->Show();
		this->nom_tb->Show();
		this->type_article->Show();
		this->type_a_tb->Show();
		this->tva_rate->Show();
		this->tva_rate_tb->Show();
		this->HT->Show();
		this->prix_ht_tb->Show();
		this->seuil_reapro->Show();
		this->sr_tb->Show();
		this->quantite_stock->Show();
		this->q_stock_tb->Show();
		this->qmr->Show();
		this->qmr_tb->Show();
		this->valider->Show();
		this->Ajouter->Hide();
		this->Modifier->Hide();
		this->Supprimer->Hide();

	}

	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {

		this->insert = false;
		this->nom->Show();
		this->nom_tb->Show();
		this->type_article->Show();
		this->type_a_tb->Show();
		this->tva_rate->Show();
		this->tva_rate_tb->Show();
		this->HT->Show();
		this->prix_ht_tb->Show();
		this->seuil_reapro->Show();
		this->sr_tb->Show();
		this->quantite_stock->Show();
		this->q_stock_tb->Show();
		this->qmr->Show();
		this->qmr_tb->Show();
		this->valider->Show();
		this->Ajouter->Hide();
		this->Modifier->Hide();
		this->Supprimer->Hide();

		//
		//On créait un tableau de clients que l'on pourra récupérer'
		//

		array<Article^>^ ArticleActif = Article::getArticleActif();
		array<Palier_Remise^>^ PalierActif = Palier_Remise::getPalier_Remise();
		//
		//On récup l'id à la ligne selectionnée
		//

		int id = ArticleActif[stockData->CurrentRow->Index]->getID();

		//
		//On initialise  l'objet a null
		//

		Article^ ar = nullptr;
		Palier_Remise^ pr = nullptr;


		//
		//On set ar à l'article séléctionné
		//

		for (int i = 0; i < ArticleActif->Length; i++) {

			if (ArticleActif[i]->getID() == id) {
				ar = ArticleActif[i];
			}
		}

		//
		//si article existe pas erreur
		//

		if (ar == nullptr) {
			Debug::WriteLine("client non trouvée id :" + id);
			return;
		}

		//
		//on set a à la bonne remise
		//

		for (int i = 0; i < PalierActif->Length; i++)
		{
			if (PalierActif[i]->getId_Article() == ar->getID())
			{
				pr = PalierActif[i];
			}
		}

		//
		//si adresse existe pas erreur
		//

		if (pr == nullptr) {
			Debug::WriteLine("remise non trouvée id :" + pr->getId_Article());
			return;
		}

		//set tout avec les valeurs de la BDD

		this->insert = false;
		this->nom_tb->Text = ar->getName();
		this->type_a_tb->Text = ar->getTypeA();
		this->tva_rate_tb->Text = Convert::ToString(ar->getTVA());
		this->sr_tb->Text = Convert::ToString(ar->getSeuil());
		this->q_stock_tb->Text = Convert::ToString(ar->getQuantite());
		//appartient à palier remise
		this->prix_ht_tb->Text = Convert::ToString(pr->getP_U_HT());
		this->qmr_tb->Text = Convert::ToString(pr->getQ_Mini());
	}

	private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {

		//
		//On cache tout
		//

		this->nom->Hide();
		this->nom_tb->Hide();
		this->type_article->Hide();
		this->type_a_tb->Hide();
		this->tva_rate->Hide();
		this->tva_rate_tb->Hide();
		this->HT->Hide();
		this->prix_ht_tb->Hide();
		this->seuil_reapro->Hide();
		this->sr_tb->Hide();
		this->quantite_stock->Hide();
		this->q_stock_tb->Hide();
		this->qmr->Hide();
		this->qmr_tb->Hide();
		this->valider->Hide();
		this->Ajouter->Show();
		this->Modifier->Show();
		this->Supprimer->Show();


		//
		//on creer des objets Article et Palier_remise
		//

		Article^ ar = gcnew Article();
		Palier_Remise^ pr = gcnew Palier_Remise();

		array<Article^>^ ArticleActifs = Article::getArticleActif();

		if (!insert)
		{
			int id = ArticleActifs[stockData->CurrentRow->Index]->getID();
			ar->setID(id);
		}



		//
		//on set dans Palier_Remise les valeurs des txt box
		//
		ar->setName(Convert::ToString(this->nom_tb->Text));
		ar->setTypeA(Convert::ToString(this->type_a_tb->Text));
		ar->setTVA(Convert::ToDouble(this->tva_rate_tb->Text));
		ar->setQuantite(Convert::ToInt32(this->q_stock_tb->Text));
		ar->setSeuil(Convert::ToInt32(this->sr_tb->Text));

		//
		//on set dans Article les valeurs des txt box
		//
		pr->setQ_Mini(Convert::ToInt32(this->qmr_tb->Text));
		pr->setP_U_HT(Convert::ToDouble(this->prix_ht_tb->Text));
		pr->setId_Article(ar->persist());


		//
		//on envoie sur la BDD
		//
		ar->persist();
		pr->persist();

		//
		//Actualisation des Vlaeurs dans le datagrid
		//

		stockData->Rows->Clear();

		array<Article^>^ ArticleActif = Article::getArticleActif();
		array<Palier_Remise^>^ PalierActif = Palier_Remise::getPalier_Remise();


		ar = gcnew Article();
		pr = gcnew Palier_Remise();

		stockData->Rows->Clear();

		for (int i = 0; i < ArticleActif->Length; i++)
		{
			ar = ArticleActif[i];
			for (int i = 0; i < PalierActif->Length; i++) {
				if (PalierActif[i]->getId_Article() == ar->getID()) {
					pr = PalierActif[i];
				}
			}
			stockData->Rows->Add(ar->getName(), ar->getTypeA(), ar->getTVA(), ar->getQuantite(), ar->getSeuil(), pr->getQ_Mini(), pr->getP_U_HT());
		}
	}

	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {



		Article^ ar = gcnew Article();
		Palier_Remise^ pr = gcnew Palier_Remise();
		array<Article^>^ ArticleActifs = Article::getArticleActif();

		int id = ArticleActifs[stockData->CurrentRow->Index]->getID();

		//
		//On set ar a l'article selectionné
		//

		for (int i = 0; i < ArticleActifs->Length; i++)
		{
			if (ArticleActifs[i]->getID() == id) {
				ar = ArticleActifs[i];
			}
		}

		ar->setsupr(true);
		ar->persist();

		//
		//Actualisation des valeurs dans datagrid
		//


		stockData->Rows->Clear();

		array<Article^>^ ArticleActif = Article::getArticleActif();
		array<Palier_Remise^>^ PalierActif = Palier_Remise::getPalier_Remise();


		ar = gcnew Article();
		pr = gcnew Palier_Remise();

		stockData->Rows->Clear();

		for (int i = 0; i < ArticleActif->Length; i++)
		{
			ar = ArticleActif[i];
			for (int i = 0; i < PalierActif->Length; i++) {
				if (PalierActif[i]->getId_Article() == ar->getID()) {
					pr = PalierActif[i];
				}
			}
			stockData->Rows->Add(ar->getName(), ar->getTypeA(), ar->getTVA(), ar->getQuantite(), ar->getSeuil(), pr->getQ_Mini(), pr->getP_U_HT());
		}
	}
};
}
