#pragma once
#include "Client.h"
#include "modif_adresse_client.h"

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Description résumée de ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	private: bool insert = false;
	private: static int idCurrent = 0;
	public: static int getIdCurrent() {
		return idCurrent;
	};
	public:
		ClientForm(void)
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
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ clientData;
	protected:

	private: System::Windows::Forms::Label^ Client;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::TextBox^ nom_tb;
	private: System::Windows::Forms::TextBox^ prenom_tb;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ prenom;
	private: System::Windows::Forms::Label^ ddn;
	private: System::Windows::Forms::Label^ dpa;
	private: System::Windows::Forms::Label^ af;
	private: System::Windows::Forms::Label^ al;


	private: System::Windows::Forms::Button^ valider;
	private: System::Windows::Forms::DateTimePicker^ ddn_pi;
	private: System::Windows::Forms::DateTimePicker^ dpa_pi;
	private: System::Windows::Forms::Button^ af_modif;
	private: System::Windows::Forms::Button^ al_modif;




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
			this->clientData = (gcnew System::Windows::Forms::DataGridView());
			this->Client = (gcnew System::Windows::Forms::Label());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->nom_tb = (gcnew System::Windows::Forms::TextBox());
			this->prenom_tb = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->prenom = (gcnew System::Windows::Forms::Label());
			this->ddn = (gcnew System::Windows::Forms::Label());
			this->af = (gcnew System::Windows::Forms::Label());
			this->al = (gcnew System::Windows::Forms::Label());
			this->valider = (gcnew System::Windows::Forms::Button());
			this->dpa = (gcnew System::Windows::Forms::Label());
			this->ddn_pi = (gcnew System::Windows::Forms::DateTimePicker());
			this->dpa_pi = (gcnew System::Windows::Forms::DateTimePicker());
			this->af_modif = (gcnew System::Windows::Forms::Button());
			this->al_modif = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientData))->BeginInit();
			this->SuspendLayout();
			// 
			// clientData
			// 
			this->clientData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->clientData->Location = System::Drawing::Point(21, 35);
			this->clientData->Name = L"clientData";
			this->clientData->Size = System::Drawing::Size(772, 391);
			this->clientData->TabIndex = 0;
			// 
			// Client
			// 
			this->Client->AutoSize = true;
			this->Client->Location = System::Drawing::Point(383, 6);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(33, 13);
			this->Client->TabIndex = 1;
			this->Client->Text = L"Client";
			// 
			// Ajouter
			// 
			this->Ajouter->Location = System::Drawing::Point(836, 35);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(75, 23);
			this->Ajouter->TabIndex = 2;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &ClientForm::Ajouter_Click);
			// 
			// Modifier
			// 
			this->Modifier->Location = System::Drawing::Point(836, 88);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(75, 23);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &ClientForm::Modifier_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->Location = System::Drawing::Point(836, 146);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(75, 23);
			this->Supprimer->TabIndex = 4;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &ClientForm::Supprimer_Click);
			// 
			// nom_tb
			// 
			this->nom_tb->Location = System::Drawing::Point(49, 459);
			this->nom_tb->Name = L"nom_tb";
			this->nom_tb->Size = System::Drawing::Size(100, 20);
			this->nom_tb->TabIndex = 5;
			// 
			// prenom_tb
			// 
			this->prenom_tb->Location = System::Drawing::Point(155, 458);
			this->prenom_tb->Name = L"prenom_tb";
			this->prenom_tb->Size = System::Drawing::Size(100, 20);
			this->prenom_tb->TabIndex = 6;
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(79, 442);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(29, 13);
			this->nom->TabIndex = 9;
			this->nom->Text = L"Nom";
			// 
			// prenom
			// 
			this->prenom->AutoSize = true;
			this->prenom->Location = System::Drawing::Point(180, 442);
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(43, 13);
			this->prenom->TabIndex = 10;
			this->prenom->Text = L"Prénom";
			// 
			// ddn
			// 
			this->ddn->AutoSize = true;
			this->ddn->Location = System::Drawing::Point(297, 443);
			this->ddn->Name = L"ddn";
			this->ddn->Size = System::Drawing::Size(96, 13);
			this->ddn->TabIndex = 11;
			this->ddn->Text = L"Date de naissance";
			// 
			// af
			// 
			this->af->AutoSize = true;
			this->af->Location = System::Drawing::Point(193, 491);
			this->af->Name = L"af";
			this->af->Size = System::Drawing::Size(118, 13);
			this->af->TabIndex = 13;
			this->af->Text = L"Adresses de facturation";
			// 
			// al
			// 
			this->al->AutoSize = true;
			this->al->Location = System::Drawing::Point(352, 491);
			this->al->Name = L"al";
			this->al->Size = System::Drawing::Size(106, 13);
			this->al->TabIndex = 14;
			this->al->Text = L"Adresses de livraison";
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(718, 486);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(75, 23);
			this->valider->TabIndex = 20;
			this->valider->Text = L"Valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &ClientForm::valider_Click);
			// 
			// dpa
			// 
			this->dpa->AutoSize = true;
			this->dpa->Location = System::Drawing::Point(516, 442);
			this->dpa->Name = L"dpa";
			this->dpa->Size = System::Drawing::Size(110, 13);
			this->dpa->TabIndex = 22;
			this->dpa->Text = L"date de permier achat";
			// 
			// ddn_pi
			// 
			this->ddn_pi->Location = System::Drawing::Point(261, 459);
			this->ddn_pi->Name = L"ddn_pi";
			this->ddn_pi->Size = System::Drawing::Size(200, 20);
			this->ddn_pi->TabIndex = 23;
			// 
			// dpa_pi
			// 
			this->dpa_pi->Location = System::Drawing::Point(476, 459);
			this->dpa_pi->Name = L"dpa_pi";
			this->dpa_pi->Size = System::Drawing::Size(200, 20);
			this->dpa_pi->TabIndex = 24;
			// 
			// af_modif
			// 
			this->af_modif->Location = System::Drawing::Point(212, 507);
			this->af_modif->Name = L"af_modif";
			this->af_modif->Size = System::Drawing::Size(75, 23);
			this->af_modif->TabIndex = 25;
			this->af_modif->Text = L"modifier";
			this->af_modif->UseVisualStyleBackColor = true;
			this->af_modif->Click += gcnew System::EventHandler(this, &ClientForm::af_modif_Click);
			// 
			// al_modif
			// 
			this->al_modif->Location = System::Drawing::Point(364, 507);
			this->al_modif->Name = L"al_modif";
			this->al_modif->Size = System::Drawing::Size(75, 23);
			this->al_modif->TabIndex = 26;
			this->al_modif->Text = L"modifier";
			this->al_modif->UseVisualStyleBackColor = true;
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(926, 554);
			this->Controls->Add(this->al_modif);
			this->Controls->Add(this->af_modif);
			this->Controls->Add(this->dpa_pi);
			this->Controls->Add(this->ddn_pi);
			this->Controls->Add(this->dpa);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->al);
			this->Controls->Add(this->af);
			this->Controls->Add(this->ddn);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->prenom_tb);
			this->Controls->Add(this->nom_tb);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->clientData);
			this->Name = L"ClientForm";
			this->Text = L"ClientForm";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->nom->Hide();
		this->nom_tb->Hide();
		this->prenom->Hide();
		this->prenom_tb->Hide();
		this->ddn->Hide();
		this->ddn_pi->Hide();
		this->dpa->Hide();
		this->dpa_pi->Hide();
		this->af->Hide();
		this->af_modif->Hide();
		this->al->Hide();
		this->al_modif->Hide();
		this->valider->Hide();

		//
		//On créait les colones de la table
		//

		this->clientData->ColumnCount = 4;
		this->clientData->Columns[0]->Name = "Nom";
		this->clientData->Columns[1]->Name = "Prenom";
		this->clientData->Columns[2]->Name = "date de naissance";
		this->clientData->Columns[3]->Name = "date de premier achat";

		array<Clients^>^ ClientsActif = Clients::getClientActif();
		Clients^ c = nullptr;
		clientData->Rows->Clear();

		for (int i = 0; i<ClientsActif->Length; i++){

			c = ClientsActif[i];
			clientData->Rows->Add(c->getNom(), c->getPrenom(), c->getddn(), c->getdpa());



		}
}
private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//set tout à rien

	this->insert = true;
	this->nom_tb->Text = "";
	this->prenom_tb->Text = "";
	this->ddn_pi->Text = "";
	this->dpa_pi->Text = "";
	this->af_modif->Text = "";
	this->al_modif->Text = "";
	
	//afficher tout

	this->nom->Show();
	this->nom_tb->Show();
	this->prenom->Show();
	this->prenom_tb->Show();
	this->ddn->Show();
	this->ddn_pi->Show();
	this->dpa->Show();
	this->dpa_pi->Show();
	this->af->Show();
	this->af_modif->Show();
	this->al->Show();
	this->al_modif->Show();
	this->valider->Show();
}

private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	

	//
	//On créait un tableau de clients que l'on pourra récupérer'
	//

	array<Clients^>^ ClientsActif = Clients::getClientActif();

	//
	//On récup l'id à la ligne selectionnée
	//

	int id = ClientsActif[clientData->CurrentRow->Index]->getID();

	//
	//On initialise  l'objet a null
	//

	Clients^ cl = nullptr;

	//
	//On set cl au client séléctionné
	//

	for (int i = 0; i<ClientsActif->Length; i++){

		if (ClientsActif[i]->getID() == id){
		cl = ClientsActif[i];
		}
	}

	//
	//si client existe pas erreur
	//

	if (cl == nullptr) {
		Debug::WriteLine("client non trouvée id :" + id);
		return;
	}

	//set tout avec les valeurs de la BDD
	
	this->insert = false;
	this->nom_tb->Text = cl->getNom();
	this->prenom_tb->Text = cl->getPrenom();
	this->ddn_pi->Text = cl->getddn();
	this->dpa_pi->Text = cl->getdpa();
	this->af_modif->Text = "";
	this->al_modif->Text = "";
	
	//afficher tout
	this->nom->Show();
	this->nom_tb->Show();
	this->prenom->Show();
	this->prenom_tb->Show();
	this->ddn->Show();
	this->ddn_pi->Show();
	this->dpa->Show();
	this->dpa_pi->Show();
	this->af->Show();
	this->af_modif->Show();
	this->al->Show();
	this->al_modif->Show();
	this->valider->Show();
}

private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//
	//cacher tout
	//

	this->nom->Hide();
	this->nom_tb->Hide();
	this->prenom->Hide();
	this->prenom_tb->Hide();
	this->ddn->Hide();
	this->ddn_pi->Hide();
	this->dpa->Hide();
	this->dpa_pi->Hide();
	this->af->Hide();
	this->af_modif->Hide();
	this->al->Hide();
	this->al_modif->Hide();
	this->valider->Hide();

	//
	//Actualisation des valeurs dans datagrid
	//

	array<Clients^>^ client = Clients::getClientActif();
	
	Clients^ c = nullptr;
	clientData->Rows->Clear();

	for (int i = 0; i < client->Length; i++) {
		c = client[i];
		clientData->Rows->Add(c->getNom(), c->getPrenom(), c->getddn(), c->getdpa());
	}
}
private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {

	Clients^ c = gcnew Clients();
	array<Clients^>^ ClientsActif = Clients::getClientActif();

		int id = ClientsActif[clientData->CurrentRow->Index]->getID();


	//
	//On set c au client selectionné
	//

	for (int i = 0; i < ClientsActif->Length; i++)
	{
		if (ClientsActif[i]->getID() == id) {
			c = ClientsActif[i];
		}
	}
	c->setsupr(true);
	c->persist();

	//
	//Actualisation des valeurs dans datagrid
	//

	array<Clients^>^ client = Clients::getClientActif();

	clientData->Rows->Clear();

	for (int i = 0; i < client->Length; i++) {
		c = client[i];
		if (c->getsupr() == false)
			clientData->Rows->Add(c->getNom(), c->getPrenom(), c->getddn(), c->getdpa());
	}
}
private: System::Void af_modif_Click(System::Object^ sender, System::EventArgs^ e) {


	Clients^ cli = gcnew Clients();

	array<Clients^>^ ClientsActif = Clients::getClientActif();

	//si on est en update 
	if (!insert)
	{
		int id = ClientsActif[clientData->CurrentRow->Index]->getID();
		cli->setID(id);
	}

	cli->setNom(Convert::ToString(this->nom_tb->Text));
	cli->setPrenom(Convert::ToString(this->prenom_tb->Text));
	cli->setddn(Convert::ToString(this->ddn_pi->Value));
	cli->setdpa(Convert::ToString(this->dpa_pi->Value));

	cli->persist();

	/*idCurrent = cli->persist();

	Debug::Write(idCurrent);*/

	PROJETPOO::modif_adresse_client^ clientForm = gcnew PROJETPOO::modif_adresse_client();
	clientForm->ShowDialog();

}
};
}
