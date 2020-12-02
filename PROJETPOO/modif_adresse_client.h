#pragma once
#include "adresse.h"
#include "Adresse_facturation.h"

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Description résumée de modif_adresse_client
	/// </summary>
	public ref class modif_adresse_client : public System::Windows::Forms::Form
	{
	public:
		modif_adresse_client(void)
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
		~modif_adresse_client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ adresseData;
	private: System::Windows::Forms::Button^ ajouter;
	protected:


	private: System::Windows::Forms::Button^ valider;
	private: System::Windows::Forms::Label^ ligne1;
	protected:



	private: System::Windows::Forms::Label^ ville;

	private: System::Windows::Forms::Label^ cp;

	private: System::Windows::Forms::Label^ pays;
	private: System::Windows::Forms::TextBox^ ligne1_tb;
	private: System::Windows::Forms::TextBox^ ville_tb;
	private: System::Windows::Forms::TextBox^ cp_tb;
	private: System::Windows::Forms::TextBox^ pays_tb;
	private: System::Windows::Forms::Button^ modifier;
	private: System::Windows::Forms::Button^ supprimer;

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
			this->adresseData = (gcnew System::Windows::Forms::DataGridView());
			this->ajouter = (gcnew System::Windows::Forms::Button());
			this->valider = (gcnew System::Windows::Forms::Button());
			this->ligne1 = (gcnew System::Windows::Forms::Label());
			this->ville = (gcnew System::Windows::Forms::Label());
			this->cp = (gcnew System::Windows::Forms::Label());
			this->pays = (gcnew System::Windows::Forms::Label());
			this->ligne1_tb = (gcnew System::Windows::Forms::TextBox());
			this->ville_tb = (gcnew System::Windows::Forms::TextBox());
			this->cp_tb = (gcnew System::Windows::Forms::TextBox());
			this->pays_tb = (gcnew System::Windows::Forms::TextBox());
			this->modifier = (gcnew System::Windows::Forms::Button());
			this->supprimer = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adresseData))->BeginInit();
			this->SuspendLayout();
			// 
			// adresseData
			// 
			this->adresseData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->adresseData->Location = System::Drawing::Point(26, 26);
			this->adresseData->Name = L"adresseData";
			this->adresseData->Size = System::Drawing::Size(547, 258);
			this->adresseData->TabIndex = 0;
			// 
			// ajouter
			// 
			this->ajouter->Location = System::Drawing::Point(590, 56);
			this->ajouter->Name = L"ajouter";
			this->ajouter->Size = System::Drawing::Size(75, 23);
			this->ajouter->TabIndex = 1;
			this->ajouter->Text = L"Ajouter";
			this->ajouter->UseVisualStyleBackColor = true;
			this->ajouter->Click += gcnew System::EventHandler(this, &modif_adresse_client::Ajouter_Click);
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(553, 318);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(75, 23);
			this->valider->TabIndex = 2;
			this->valider->Text = L"valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &modif_adresse_client::valider_Click);
			// 
			// ligne1
			// 
			this->ligne1->AutoSize = true;
			this->ligne1->Location = System::Drawing::Point(57, 305);
			this->ligne1->Name = L"ligne1";
			this->ligne1->Size = System::Drawing::Size(44, 13);
			this->ligne1->TabIndex = 3;
			this->ligne1->Text = L"adresse";
			// 
			// ville
			// 
			this->ville->AutoSize = true;
			this->ville->Location = System::Drawing::Point(180, 305);
			this->ville->Name = L"ville";
			this->ville->Size = System::Drawing::Size(25, 13);
			this->ville->TabIndex = 4;
			this->ville->Text = L"ville";
			// 
			// cp
			// 
			this->cp->AutoSize = true;
			this->cp->Location = System::Drawing::Point(278, 305);
			this->cp->Name = L"cp";
			this->cp->Size = System::Drawing::Size(62, 13);
			this->cp->TabIndex = 5;
			this->cp->Text = L"code postal";
			// 
			// pays
			// 
			this->pays->AutoSize = true;
			this->pays->Location = System::Drawing::Point(405, 305);
			this->pays->Name = L"pays";
			this->pays->Size = System::Drawing::Size(29, 13);
			this->pays->TabIndex = 6;
			this->pays->Text = L"pays";
			// 
			// ligne1_tb
			// 
			this->ligne1_tb->Location = System::Drawing::Point(26, 321);
			this->ligne1_tb->Name = L"ligne1_tb";
			this->ligne1_tb->Size = System::Drawing::Size(100, 20);
			this->ligne1_tb->TabIndex = 7;
			// 
			// ville_tb
			// 
			this->ville_tb->Location = System::Drawing::Point(142, 321);
			this->ville_tb->Name = L"ville_tb";
			this->ville_tb->Size = System::Drawing::Size(100, 20);
			this->ville_tb->TabIndex = 8;
			// 
			// cp_tb
			// 
			this->cp_tb->Location = System::Drawing::Point(259, 321);
			this->cp_tb->Name = L"cp_tb";
			this->cp_tb->Size = System::Drawing::Size(100, 20);
			this->cp_tb->TabIndex = 9;
			// 
			// pays_tb
			// 
			this->pays_tb->Location = System::Drawing::Point(374, 321);
			this->pays_tb->Name = L"pays_tb";
			this->pays_tb->Size = System::Drawing::Size(100, 20);
			this->pays_tb->TabIndex = 10;
			// 
			// modifier
			// 
			this->modifier->Location = System::Drawing::Point(590, 113);
			this->modifier->Name = L"modifier";
			this->modifier->Size = System::Drawing::Size(75, 23);
			this->modifier->TabIndex = 11;
			this->modifier->Text = L"Modifier";
			this->modifier->UseVisualStyleBackColor = true;
			this->modifier->Click += gcnew System::EventHandler(this, &modif_adresse_client::modifier_Click);
			// 
			// supprimer
			// 
			this->supprimer->Location = System::Drawing::Point(590, 169);
			this->supprimer->Name = L"supprimer";
			this->supprimer->Size = System::Drawing::Size(75, 23);
			this->supprimer->TabIndex = 12;
			this->supprimer->Text = L"supprimer";
			this->supprimer->UseVisualStyleBackColor = true;
			this->supprimer->Click += gcnew System::EventHandler(this, &modif_adresse_client::supprimer_Click);
			// 
			// modif_adresse_client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 361);
			this->Controls->Add(this->supprimer);
			this->Controls->Add(this->modifier);
			this->Controls->Add(this->pays_tb);
			this->Controls->Add(this->cp_tb);
			this->Controls->Add(this->ville_tb);
			this->Controls->Add(this->ligne1_tb);
			this->Controls->Add(this->pays);
			this->Controls->Add(this->cp);
			this->Controls->Add(this->ville);
			this->Controls->Add(this->ligne1);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->ajouter);
			this->Controls->Add(this->adresseData);
			this->Name = L"modif_adresse_client";
			this->Text = L"modif_adresse_client";
			this->Load += gcnew System::EventHandler(this, &modif_adresse_client::modif_adresse_client_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adresseData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void modif_adresse_client_Load(System::Object^ sender, System::EventArgs^ e) {
		
		this->pays->Hide();
		this->pays_tb->Hide();
		this->cp->Hide();
		this->cp_tb->Hide();
		this->ville->Hide();
		this->ville_tb->Hide();
		this->ligne1->Hide();
		this->ligne1_tb->Hide();
		this->valider->Hide();

		this->adresseData->ColumnCount = 4;
		this->adresseData->Columns[0]->Name = "ligne 1";
		this->adresseData->Columns[1]->Name = "ville";
		this->adresseData->Columns[2]->Name= "code postal";
		this->adresseData->Columns[3]->Name = "Pays";

		//
		//on affiche les adresses de la personnes
		//

		//int id_cli = PROJETPOO::ClientForm::getIdCurrent();
		int id_cli = 35;

		Adresse_facturation^ adr_fac = nullptr;
		Adresse^ a = nullptr;

		array<Adresse_facturation^>^ Adr_fac = Adresse_facturation::getAdresse_facturation();
		array<Adresse^>^ adress = Adresse::getAdresse();



		for (int i = 0; i < Adr_fac->Length; i++)
		{
			if (Adr_fac[i]->getIdClient() == id_cli) {
				adr_fac = Adr_fac[i];
				for (int i = 0; i < adress->Length; i++)
				{
					if (adress[i]->getID() == adr_fac->getIdAdresse()) {
						a = adress[i];
					}
				}
				if (adr_fac->getsuppr() == false)
					adresseData->Rows->Add(a->getLigne1(), a->getVille(), a->getCp(), a->getPays());
			}
		}
	}
private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {

	this->pays->Show();
	this->pays_tb->Show();
	this->cp->Show();
	this->cp_tb->Show();
	this->ville->Show();
	this->ville_tb->Show();
	this->ligne1->Show();
	this->ligne1_tb->Show();
	this->valider->Show();

	this->pays_tb->Text = "";
	this->cp_tb->Text = "";
	this->ville_tb->Text = "";
	this->ligne1_tb->Text = "";

}
private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {

	adresseData->Rows->Clear();

	this->pays->Hide();
	this->pays_tb->Hide();
	this->cp->Hide();
	this->cp_tb->Hide();
	this->ville->Hide();
	this->ville_tb->Hide();
	this->ligne1->Hide();
	this->ligne1_tb->Hide();
	this->valider->Hide();

	Adresse^ adr = gcnew Adresse();

	adr->setLigne1(Convert::ToString(this->ligne1_tb->Text));
	adr->setPays(Convert::ToString(this->pays_tb->Text));
	adr->setVille(Convert::ToString(this->ville_tb->Text));
	adr->setCp(Convert::ToString(this->cp_tb->Text));

	int id_adr = adr->persist();

	//int id_cli = PROJETPOO::ClientForm::getIdCurrent();
	int id_cli = 35;
	Debug::Write(id_cli);

	Adresse_facturation^ adr_fac = gcnew Adresse_facturation();

	adr_fac->setIdAdresse(Convert::ToInt32(id_adr));
	adr_fac->setIdClient(Convert::ToInt32(id_cli));
	
	adr_fac->persist();

	Adresse^ a = nullptr;

	array<Adresse_facturation^>^ Adr_fac = Adresse_facturation::getAdresse_facturation();
	array<Adresse^>^ adress = Adresse::getAdresse();

	for (int i = 0; i < Adr_fac->Length; i++)
	{
		if (Adr_fac[i]->getIdClient() == id_cli) {
			adr_fac = Adr_fac[i];
			for (int i = 0; i < adress->Length; i++)
			{
				if (adress[i]->getID() == adr_fac->getIdAdresse()) {
					a = adress[i];
				}
			}
			if (adr_fac->getsuppr() == false)
				adresseData->Rows->Add(a->getLigne1(), a->getVille(), a->getCp(), a->getPays());
		}
	}
}
private: System::Void modifier_Click(System::Object^ sender, System::EventArgs^ e) {

	this->pays->Show();
	this->pays_tb->Show();
	this->cp->Show();
	this->cp_tb->Show();
	this->ville->Show();
	this->ville_tb->Show();
	this->ligne1->Show();
	this->ligne1_tb->Show();
	this->valider->Show();

	array<Adresse^>^ adresse = Adresse::getAdresse();

	int id = adresse[adresseData->CurrentRow->Index]->getID();

	Adresse^ adr = nullptr;

	for (int i = 0; i < adresse->Length; i++) {

		if (adresse[i]->getID() == id) {
			adr = adresse[i];
		}
	}

	this->ligne1_tb->Text = adr->getLigne1();
	this->ville_tb->Text = adr->getVille();
	this->cp_tb->Text = adr->getCp();
	this->pays_tb->Text = adr->getPays();
	
	//int id_cli = PROJETPOO::ClientForm::getIdCurrent();
	int id_cli = 35;

	array<Adresse_facturation^>^ Adr_fac = Adresse_facturation::getAdresse_facturation();

	Adresse_facturation^ adr_fac = nullptr;

	for (int i = 0; i < Adr_fac->Length; i++)
	{
		if (Adr_fac[i]->getIdClient() == id_cli && Adr_fac[i]->getIdAdresse() == adr->getID()) {
			adr_fac = Adr_fac[i];
			adr_fac->setsuppr(true);
			adr_fac->persist();
		}
	}



	//shadow delete dans adresse facturation 


	//puis add un nouveau

	adr = gcnew Adresse();

	adr->setLigne1(Convert::ToString(this->ligne1_tb->Text));
	adr->setPays(Convert::ToString(this->pays_tb->Text));
	adr->setVille(Convert::ToString(this->ville_tb->Text));
	adr->setCp(Convert::ToString(this->cp_tb->Text));


	int id_adr = adr->persist();

	adr_fac = gcnew Adresse_facturation();

	adr_fac->setIdAdresse(Convert::ToInt32(id_adr));
	adr_fac->setIdClient(Convert::ToInt32(id_cli));

	adr_fac->persist();

}
private: System::Void supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
