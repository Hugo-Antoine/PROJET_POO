#pragma once
#include "Article.h"
#include "Commande_article.h"
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
	/// Description résumée de article_commande_form
	/// </summary>
	public ref class article_commande_form : public System::Windows::Forms::Form
	{
	public:
		article_commande_form(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::Label^ remise;
	public:
	private: System::Windows::Forms::TextBox^ remise_tb;
	private: int idCmd = 0;
	public: void setIdCmd(int id) {
		this->idCmd = id;
	}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~article_commande_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ajouter;
	protected:
	private: System::Windows::Forms::Button^ modifier;
	private: System::Windows::Forms::Button^ supprimer;

	private: System::Windows::Forms::Label^ article;
	private: System::Windows::Forms::Label^ quantite;
	private: System::Windows::Forms::Button^ valider;
	private: System::Windows::Forms::TextBox^ quantite_tb;

	private: System::Windows::Forms::ListBox^ articleData;
	private: System::Windows::Forms::DataGridView^ articleCommandeData;




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ajouter = (gcnew System::Windows::Forms::Button());
			this->modifier = (gcnew System::Windows::Forms::Button());
			this->supprimer = (gcnew System::Windows::Forms::Button());
			this->article = (gcnew System::Windows::Forms::Label());
			this->quantite = (gcnew System::Windows::Forms::Label());
			this->valider = (gcnew System::Windows::Forms::Button());
			this->quantite_tb = (gcnew System::Windows::Forms::TextBox());
			this->articleData = (gcnew System::Windows::Forms::ListBox());
			this->articleCommandeData = (gcnew System::Windows::Forms::DataGridView());
			this->remise = (gcnew System::Windows::Forms::Label());
			this->remise_tb = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->articleCommandeData))->BeginInit();
			this->SuspendLayout();
			// 
			// ajouter
			// 
			this->ajouter->Location = System::Drawing::Point(277, 52);
			this->ajouter->Name = L"ajouter";
			this->ajouter->Size = System::Drawing::Size(75, 23);
			this->ajouter->TabIndex = 0;
			this->ajouter->Text = L"Ajouter";
			this->ajouter->UseVisualStyleBackColor = true;
			this->ajouter->Click += gcnew System::EventHandler(this, &article_commande_form::ajouter_Click);
			// 
			// modifier
			// 
			this->modifier->Location = System::Drawing::Point(277, 104);
			this->modifier->Name = L"modifier";
			this->modifier->Size = System::Drawing::Size(75, 23);
			this->modifier->TabIndex = 1;
			this->modifier->Text = L"Modifier";
			this->modifier->UseVisualStyleBackColor = true;
			this->modifier->Click += gcnew System::EventHandler(this, &article_commande_form::modifier_Click);
			// 
			// supprimer
			// 
			this->supprimer->Location = System::Drawing::Point(277, 153);
			this->supprimer->Name = L"supprimer";
			this->supprimer->Size = System::Drawing::Size(75, 23);
			this->supprimer->TabIndex = 2;
			this->supprimer->Text = L"Supprimer";
			this->supprimer->UseVisualStyleBackColor = true;
			this->supprimer->Click += gcnew System::EventHandler(this, &article_commande_form::supprimer_Click);
			// 
			// article
			// 
			this->article->AutoSize = true;
			this->article->Location = System::Drawing::Point(73, 212);
			this->article->Name = L"article";
			this->article->Size = System::Drawing::Size(36, 13);
			this->article->TabIndex = 4;
			this->article->Text = L"Article";
			// 
			// quantite
			// 
			this->quantite->AutoSize = true;
			this->quantite->Location = System::Drawing::Point(195, 212);
			this->quantite->Name = L"quantite";
			this->quantite->Size = System::Drawing::Size(47, 13);
			this->quantite->TabIndex = 5;
			this->quantite->Text = L"Quantite";
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(294, 250);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(75, 23);
			this->valider->TabIndex = 6;
			this->valider->Text = L"Valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &article_commande_form::valider_Click);
			// 
			// quantite_tb
			// 
			this->quantite_tb->Location = System::Drawing::Point(168, 228);
			this->quantite_tb->Name = L"quantite_tb";
			this->quantite_tb->Size = System::Drawing::Size(100, 20);
			this->quantite_tb->TabIndex = 7;
			// 
			// articleData
			// 
			this->articleData->FormattingEnabled = true;
			this->articleData->Location = System::Drawing::Point(22, 228);
			this->articleData->Name = L"articleData";
			this->articleData->Size = System::Drawing::Size(131, 56);
			this->articleData->TabIndex = 8;
			// 
			// articleCommandeData
			// 
			this->articleCommandeData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->articleCommandeData->Location = System::Drawing::Point(22, 52);
			this->articleCommandeData->Name = L"articleCommandeData";
			this->articleCommandeData->Size = System::Drawing::Size(240, 150);
			this->articleCommandeData->TabIndex = 9;
			// 
			// remise
			// 
			this->remise->AutoSize = true;
			this->remise->Location = System::Drawing::Point(198, 250);
			this->remise->Name = L"remise";
			this->remise->Size = System::Drawing::Size(42, 13);
			this->remise->TabIndex = 10;
			this->remise->Text = L"Remise";
			// 
			// remise_tb
			// 
			this->remise_tb->Location = System::Drawing::Point(168, 266);
			this->remise_tb->Name = L"remise_tb";
			this->remise_tb->Size = System::Drawing::Size(100, 20);
			this->remise_tb->TabIndex = 11;
			// 
			// article_commande_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 296);
			this->Controls->Add(this->remise_tb);
			this->Controls->Add(this->remise);
			this->Controls->Add(this->articleCommandeData);
			this->Controls->Add(this->articleData);
			this->Controls->Add(this->quantite_tb);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->quantite);
			this->Controls->Add(this->article);
			this->Controls->Add(this->supprimer);
			this->Controls->Add(this->modifier);
			this->Controls->Add(this->ajouter);
			this->Name = L"article_commande_form";
			this->Text = L"article_commande_form";
			this->Load += gcnew System::EventHandler(this, &article_commande_form::article_commande_form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->articleCommandeData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void article_commande_form_Load(System::Object^ sender, System::EventArgs^ e) {

	this->article->Hide();
	this->articleData->Hide();
	this->quantite->Hide();
	this->quantite_tb->Hide();
	this->remise->Hide();
	this->remise_tb->Hide();
	this->valider->Hide();
	this->ajouter->Show();
	this->modifier->Show();
	this->supprimer->Show();

	this->articleCommandeData->ColumnCount = 4;
	this->articleCommandeData->Columns[0]->Name = "Nom";
	this->articleCommandeData->Columns[1]->Name = "Type";
	this->articleCommandeData->Columns[2]->Name = "TVA";
	this->articleCommandeData->Columns[3]->Name = "Quantité";

}

	private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {

		this->articleCommandeData->Rows->Clear();

		this->article->Hide();
		this->articleData->Hide();
		this->quantite->Hide();
		this->quantite_tb->Hide();
		this->remise->Hide();
		this->remise_tb->Hide();
		this->valider->Hide();
		this->ajouter->Show();
		this->modifier->Show();
		this->supprimer->Show();

		Commande_article^ cmd_article = gcnew Commande_article();

		array<Article^>^ article = Article::getArticleActif();

		Article^ a = nullptr;

		String^ articleSelected = Convert::ToString(this->articleData->SelectedItem);

		for (int i = 0; i < article->Length; i++)
		{
			if (article[i]->getName() == articleSelected) {
				a = article[i];
			}
		}

		cmd_article->setID_article(Convert::ToInt32(a->getID()));
		cmd_article->setID_commande(idCmd);
		cmd_article->setQuantite(Convert::ToInt32(this->quantite_tb->Text));
		cmd_article->setremise(Convert::ToInt32(this->remise_tb->Text));

		array<Palier_Remise^>^ pr = Palier_Remise::getPalier_RemiseActif(Convert::ToInt32(a->getID()));

		for (int i = 0; i < pr->Length-1; i++) {
			if (pr[i]->getQ_Mini() <= cmd_article->getQuantite() && cmd_article->getQuantite() < pr[i + 1]->getQ_Mini()) {
				cmd_article->setPrixunitaire(pr[i]->getP_U_HT());
			}
			else {
				cmd_article->setPrixunitaire(pr[i + 1]->getP_U_HT());
			}
		}

		cmd_article->persist();



		array<Commande_article^>^ cmd_article_tab = Commande_article::getCommande_articleActive(idCmd);

		Commande_article^ current_art = nullptr;

		Article^ art = nullptr;

		for (int i = 0; i < cmd_article_tab->Length; i++)
		{
			current_art = cmd_article_tab[i];

			for (int i = 0; i < article->Length; i++)
			{
				if (current_art->getID_article() == article[i]->getID()) {

					art = article[i];

					if (current_art->getSuppr() == false)
						this->articleCommandeData->Rows->Add(article[i]->getName(), article[i]->getTypeA(), article[i]->getTVA(), current_art->getQuantite());
				}
			}
		}
}

private: System::Void ajouter_Click(System::Object^ sender, System::EventArgs^ e) {

	this->article->Show();
	this->articleData->Show();
	this->quantite->Show();
	this->quantite_tb->Show();
	this->remise->Show();
	this->remise_tb->Show();
	this->valider->Show();
	this->ajouter->Hide();
	this->modifier->Hide();
	this->supprimer->Hide();

	this->quantite_tb->Text = "";
	this->remise_tb->Text = "";

	this->articleData->Items->Clear();

	array<Article^>^ article = Article::getArticleActif();

	for (int i = 0; i < article->Length; i++)
	{
		this->articleData->Items->Add(article[i]->getName());
	}


}
private: System::Void modifier_Click(System::Object^ sender, System::EventArgs^ e) {

	this->article->Show();
	this->articleData->Show();
	this->quantite->Show();
	this->quantite_tb->Show();
	this->remise->Show();
	this->remise_tb->Show();
	this->valider->Show();
	this->ajouter->Hide();
	this->modifier->Hide();
	this->supprimer->Hide();

}
private: System::Void supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
