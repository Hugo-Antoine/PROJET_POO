#pragma once
#include "Client.h"
#include "Commande.h"
#include "adresse.h"
#include "article_commande_form.h"
#include "Adresse_facturation.h"
#include "Adresse_livraison.h"

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Description résumée de CommandeForm
	/// </summary>
	public ref class CommandeForm : public System::Windows::Forms::Form
	{
	private: bool insert = false;
	private: int idCmd = 0;
	private: bool alreadyPush = false;
	public:
		CommandeForm(void)
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
		~CommandeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ commandeData;
	private: System::Windows::Forms::Label^ Client;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Label^ date_livraison;
	private: System::Windows::Forms::Label^ date_emission;
	private: System::Windows::Forms::Label^ date_solde;


	private: System::Windows::Forms::ListBox^ clientListe;
	private: System::Windows::Forms::Label^ clientname;
	private: System::Windows::Forms::DateTimePicker^ dl_pi;
	private: System::Windows::Forms::DateTimePicker^ de_pi;


	private: System::Windows::Forms::DateTimePicker^ ds_pi;
	private: System::Windows::Forms::Button^ valider;
	private: System::Windows::Forms::ListBox^ alListe;
	private: System::Windows::Forms::ListBox^ afListe;
	private: System::Windows::Forms::Label^ al;
	private: System::Windows::Forms::Label^ af;
	private: System::Windows::Forms::Button^ modif_article;
	private: System::Windows::Forms::Label^ choix_art;
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
			this->commandeData = (gcnew System::Windows::Forms::DataGridView());
			this->Client = (gcnew System::Windows::Forms::Label());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->date_livraison = (gcnew System::Windows::Forms::Label());
			this->date_emission = (gcnew System::Windows::Forms::Label());
			this->date_solde = (gcnew System::Windows::Forms::Label());
			this->clientListe = (gcnew System::Windows::Forms::ListBox());
			this->clientname = (gcnew System::Windows::Forms::Label());
			this->dl_pi = (gcnew System::Windows::Forms::DateTimePicker());
			this->de_pi = (gcnew System::Windows::Forms::DateTimePicker());
			this->ds_pi = (gcnew System::Windows::Forms::DateTimePicker());
			this->valider = (gcnew System::Windows::Forms::Button());
			this->alListe = (gcnew System::Windows::Forms::ListBox());
			this->afListe = (gcnew System::Windows::Forms::ListBox());
			this->al = (gcnew System::Windows::Forms::Label());
			this->af = (gcnew System::Windows::Forms::Label());
			this->modif_article = (gcnew System::Windows::Forms::Button());
			this->choix_art = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->commandeData))->BeginInit();
			this->SuspendLayout();
			// 
			// commandeData
			// 
			this->commandeData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->commandeData->Location = System::Drawing::Point(26, 42);
			this->commandeData->Name = L"commandeData";
			this->commandeData->Size = System::Drawing::Size(772, 391);
			this->commandeData->TabIndex = 0;
			// 
			// Client
			// 
			this->Client->AutoSize = true;
			this->Client->Location = System::Drawing::Point(388, 13);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(60, 13);
			this->Client->TabIndex = 1;
			this->Client->Text = L"Commande";
			// 
			// Ajouter
			// 
			this->Ajouter->Location = System::Drawing::Point(841, 42);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(75, 23);
			this->Ajouter->TabIndex = 2;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &CommandeForm::Ajouter_Click);
			// 
			// Modifier
			// 
			this->Modifier->Location = System::Drawing::Point(841, 95);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(75, 23);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &CommandeForm::Modifier_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->Location = System::Drawing::Point(841, 153);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(75, 23);
			this->Supprimer->TabIndex = 4;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &CommandeForm::Supprimer_Click);
			// 
			// date_livraison
			// 
			this->date_livraison->AutoSize = true;
			this->date_livraison->Location = System::Drawing::Point(93, 457);
			this->date_livraison->Name = L"date_livraison";
			this->date_livraison->Size = System::Drawing::Size(84, 13);
			this->date_livraison->TabIndex = 6;
			this->date_livraison->Text = L"date de livraison";
			// 
			// date_emission
			// 
			this->date_emission->AutoSize = true;
			this->date_emission->Location = System::Drawing::Point(316, 457);
			this->date_emission->Name = L"date_emission";
			this->date_emission->Size = System::Drawing::Size(79, 13);
			this->date_emission->TabIndex = 7;
			this->date_emission->Text = L"date d\'émission";
			// 
			// date_solde
			// 
			this->date_solde->AutoSize = true;
			this->date_solde->Location = System::Drawing::Point(545, 457);
			this->date_solde->Name = L"date_solde";
			this->date_solde->Size = System::Drawing::Size(71, 13);
			this->date_solde->TabIndex = 8;
			this->date_solde->Text = L"date de solde";
			// 
			// clientListe
			// 
			this->clientListe->FormattingEnabled = true;
			this->clientListe->Location = System::Drawing::Point(40, 530);
			this->clientListe->Name = L"clientListe";
			this->clientListe->Size = System::Drawing::Size(120, 43);
			this->clientListe->TabIndex = 15;
			this->clientListe->SelectedIndexChanged += gcnew System::EventHandler(this, &CommandeForm::clientListe_SelectedIndexChanged);
			// 
			// clientname
			// 
			this->clientname->AutoSize = true;
			this->clientname->Location = System::Drawing::Point(79, 514);
			this->clientname->Name = L"clientname";
			this->clientname->Size = System::Drawing::Size(32, 13);
			this->clientname->TabIndex = 16;
			this->clientname->Text = L"client";
			// 
			// dl_pi
			// 
			this->dl_pi->Location = System::Drawing::Point(40, 473);
			this->dl_pi->Name = L"dl_pi";
			this->dl_pi->Size = System::Drawing::Size(200, 20);
			this->dl_pi->TabIndex = 18;
			// 
			// de_pi
			// 
			this->de_pi->Location = System::Drawing::Point(261, 473);
			this->de_pi->Name = L"de_pi";
			this->de_pi->Size = System::Drawing::Size(200, 20);
			this->de_pi->TabIndex = 19;
			// 
			// ds_pi
			// 
			this->ds_pi->Location = System::Drawing::Point(486, 473);
			this->ds_pi->Name = L"ds_pi";
			this->ds_pi->Size = System::Drawing::Size(200, 20);
			this->ds_pi->TabIndex = 26;
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(800, 532);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(75, 23);
			this->valider->TabIndex = 27;
			this->valider->Text = L"valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &CommandeForm::valider_Click);
			// 
			// alListe
			// 
			this->alListe->FormattingEnabled = true;
			this->alListe->Location = System::Drawing::Point(181, 530);
			this->alListe->Name = L"alListe";
			this->alListe->Size = System::Drawing::Size(200, 43);
			this->alListe->TabIndex = 28;
			// 
			// afListe
			// 
			this->afListe->FormattingEnabled = true;
			this->afListe->Location = System::Drawing::Point(408, 530);
			this->afListe->Name = L"afListe";
			this->afListe->Size = System::Drawing::Size(208, 43);
			this->afListe->TabIndex = 29;
			// 
			// al
			// 
			this->al->AutoSize = true;
			this->al->Location = System::Drawing::Point(233, 514);
			this->al->Name = L"al";
			this->al->Size = System::Drawing::Size(85, 13);
			this->al->TabIndex = 30;
			this->al->Text = L"adresse livraison";
			// 
			// af
			// 
			this->af->AutoSize = true;
			this->af->Location = System::Drawing::Point(462, 514);
			this->af->Name = L"af";
			this->af->Size = System::Drawing::Size(97, 13);
			this->af->TabIndex = 31;
			this->af->Text = L"adresse facturation";
			// 
			// modif_article
			// 
			this->modif_article->Location = System::Drawing::Point(658, 541);
			this->modif_article->Name = L"modif_article";
			this->modif_article->Size = System::Drawing::Size(75, 23);
			this->modif_article->TabIndex = 32;
			this->modif_article->Text = L"Modifier";
			this->modif_article->UseVisualStyleBackColor = true;
			this->modif_article->Click += gcnew System::EventHandler(this, &CommandeForm::modif_article_Click);
			// 
			// choix_art
			// 
			this->choix_art->AutoSize = true;
			this->choix_art->Location = System::Drawing::Point(663, 525);
			this->choix_art->Name = L"choix_art";
			this->choix_art->Size = System::Drawing::Size(70, 13);
			this->choix_art->TabIndex = 33;
			this->choix_art->Text = L"Choisir Article";
			// 
			// CommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 589);
			this->Controls->Add(this->choix_art);
			this->Controls->Add(this->modif_article);
			this->Controls->Add(this->af);
			this->Controls->Add(this->al);
			this->Controls->Add(this->afListe);
			this->Controls->Add(this->alListe);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->ds_pi);
			this->Controls->Add(this->de_pi);
			this->Controls->Add(this->dl_pi);
			this->Controls->Add(this->clientname);
			this->Controls->Add(this->clientListe);
			this->Controls->Add(this->date_solde);
			this->Controls->Add(this->date_emission);
			this->Controls->Add(this->date_livraison);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->commandeData);
			this->Name = L"CommandeForm";
			this->Text = L"CommandeForm";
			this->Load += gcnew System::EventHandler(this, &CommandeForm::CommandeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->commandeData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void CommandeForm_Load(System::Object^ sender, System::EventArgs^ e) {

	this->af->Hide();
	this->al->Hide();
	this->afListe->Hide();
	this->alListe->Hide();
	this->valider->Hide();
	this->ds_pi->Hide();
	this->modif_article->Hide();
	this->choix_art->Hide();
	this->de_pi->Hide();
	this->dl_pi->Hide();
	this->clientname->Hide();
	this->clientListe->Hide();
	this->date_solde->Hide();
	this->date_emission->Hide();
	this->date_livraison->Hide();

	this->Ajouter->Show();
	this->Modifier->Show();
	this->Supprimer->Show();

}


private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {

	this->af->Show();
	this->al->Show();
	this->afListe->Show();
	this->alListe->Show();
	this->valider->Show();
	this->ds_pi->Show();
	this->modif_article->Show();
	this->choix_art->Show();
	this->de_pi->Show();
	this->dl_pi->Show();
	this->clientname->Show();
	this->clientListe->Show();
	this->date_solde->Show();
	this->date_emission->Show();
	this->date_livraison->Show();

	this->Ajouter->Hide();
	this->Modifier->Hide();
	this->Supprimer->Hide();

	this->clientListe->Items->Clear();

	array<Clients^>^ clients = Clients::getClientActif();
	Clients^ c = nullptr;

	for (int i = 0; i < clients->Length; i++)
	{
		c = clients[i];
		this->clientListe->Items->Add(c->getNom() + " " + c->getPrenom());
	}
}

private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {

	this->af->Show();
	this->al->Show();
	this->afListe->Show();
	this->alListe->Show();
	this->valider->Show();
	this->ds_pi->Show();
	this->modif_article->Show();
	this->choix_art->Show();
	this->de_pi->Show();
	this->dl_pi->Show();
	this->clientname->Show();
	this->clientListe->Show();
	this->date_solde->Show();
	this->date_emission->Show();
	this->date_livraison->Show();

	this->Ajouter->Hide();
	this->Modifier->Hide();
	this->Supprimer->Hide();

	this->clientListe->Items->Clear();

	array<Clients^>^ clients = Clients::getClientActif();
	Clients^ c = nullptr;

	for (int i = 0; i < clients->Length; i++)
	{
		c = clients[i];
		this->clientListe->Items->Add(c->getNom() + " " + c->getPrenom());
	}

}

private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {

	this->af->Hide();
	this->al->Hide();
	this->afListe->Hide();
	this->alListe->Hide();
	this->valider->Hide();
	this->ds_pi->Hide();
	this->modif_article->Hide();
	this->choix_art->Hide();
	this->de_pi->Hide();
	this->dl_pi->Hide();
	this->clientname->Hide();
	this->clientListe->Hide();
	this->date_solde->Hide();
	this->date_emission->Hide();
	this->date_livraison->Hide();

	this->Ajouter->Show();
	this->Modifier->Show();
	this->Supprimer->Show();

}
private: System::Void clientListe_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	this->afListe->Items->Clear();
	this->alListe->Items->Clear();

	array<Clients^>^ clients = Clients::getClientActif();
	Clients^ c = nullptr;

	String^ ClientSelected = Convert::ToString(this->clientListe->SelectedItem);

	for (int i = 0; i < clients->Length; i++)
	{
		if (clients[i]->getNom() + " " + clients[i]->getPrenom() == ClientSelected) {
			c = clients[i];
		}
	}

	array<Adresse_facturation^>^ Adr_fac = Adresse_facturation::getAdresse_facturationActive(c->getID());

	Adresse_facturation^ adr_fac = gcnew Adresse_facturation();

	array<Adresse^>^ adress = Adresse::getAdresse();

	for (int i = 0; i < Adr_fac->Length; i++)
	{
		adr_fac = Adr_fac[i];
		for (int i = 0; i < adress->Length; i++)
		{
			if (adr_fac->getIdAdresse() == adress[i]->getID()) {
				this->afListe->Items->Add(adress[i]->getLigne1() + " " + adress[i]->getVille() + " " + adress[i]->getCp() + " " + adress[i]->getPays());
			}
		}
	}

	array<Adresse_livraison^>^ Adr_liv = Adresse_livraison::getAdresse_livraisonActive(c->getID());

	Adresse_livraison^ adr_liv = gcnew Adresse_livraison();

	for (int i = 0; i < Adr_liv->Length; i++)
	{
		adr_liv = Adr_liv[i];
		for (int i = 0; i < adress->Length; i++)
		{
			if (adr_liv->getIdAdresse() == adress[i]->getID()) {
				this->alListe->Items->Add(adress[i]->getLigne1() + " " + adress[i]->getVille() + " " + adress[i]->getCp() + " " + adress[i]->getPays());
			}
		}
	}
}
	private: System::Void modif_article_Click(System::Object^ sender, System::EventArgs^ e) {

		Commande^ cmd = gcnew Commande();

		array<Adresse^>^ adress = Adresse::getAdresse();

		int id_liv = 0;
		int id_fac = 0;

		for (int i = 0; i < adress->Length; i++)
		{
			if (this->alListe->GetItemText(this->alListe->SelectedItem) == adress[i]->getLigne1() + " " + adress[i]->getVille() + " " + adress[i]->getCp() + " " + adress[i]->getPays()) {
				id_liv = adress[i]->getID();
			}
			if (this->afListe->GetItemText(this->afListe->SelectedItem) == adress[i]->getLigne1() + " " + adress[i]->getVille() + " " + adress[i]->getCp() + " " + adress[i]->getPays()) {
				id_fac = adress[i]->getID();
			}
		}

		array<Clients^>^ clients = Clients::getClientActif();
		Clients^ c = nullptr;

		String^ ClientSelected = Convert::ToString(this->clientListe->SelectedItem);

		for (int i = 0; i < clients->Length; i++)
		{
			if (clients[i]->getNom() + " " + clients[i]->getPrenom() == ClientSelected) {
				c = clients[i];
			}
		}

		cmd->setRef("#321548");
		cmd->setddl(Convert::ToString(this->dl_pi->Value));
		cmd->setde(Convert::ToString(this->de_pi->Value));
		cmd->setdds(Convert::ToString(this->ds_pi->Value));
		cmd->settotalht(0);
		cmd->settotalttc(0);
		cmd->setid_adresse_cmd_adresse_livraison(id_liv);
		cmd->setid_adresse_cmd_adresse_facturation(id_fac);
		cmd->setidclient(Convert::ToInt32(c->getID()));

		if (!alreadyPush) {
			idCmd = cmd->persist();
		}

		PROJETPOO::article_commande_form^ article_add = gcnew PROJETPOO::article_commande_form();
		article_add->setIdCmd(idCmd);
		article_add->ShowDialog();
	}
};
}
