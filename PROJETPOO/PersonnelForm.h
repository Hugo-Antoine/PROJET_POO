#pragma once
#include "Personnel.h"

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PersonnelForm
	/// </summary>
	public ref class PersonnelForm : public System::Windows::Forms::Form
	{
	public:
		PersonnelForm(void)
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
		~PersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ Client;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::TextBox^ nomP_tb;

	private: System::Windows::Forms::TextBox^ prenomP_tb;

	private: System::Windows::Forms::TextBox^ deP_tb;

	private: System::Windows::Forms::TextBox^ adresseP_tb;

	private: System::Windows::Forms::TextBox^ nsP_tb;










	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ prenom;

	private: System::Windows::Forms::Label^ de;
	private: System::Windows::Forms::Label^ adresse;
	private: System::Windows::Forms::Label^ ns;

	private: System::Windows::Forms::Label^ ps;
	private: System::Windows::Forms::TextBox^ psP_tb;
	private: System::Windows::Forms::Button^ validerP;









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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Client = (gcnew System::Windows::Forms::Label());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->nomP_tb = (gcnew System::Windows::Forms::TextBox());
			this->prenomP_tb = (gcnew System::Windows::Forms::TextBox());
			this->deP_tb = (gcnew System::Windows::Forms::TextBox());
			this->adresseP_tb = (gcnew System::Windows::Forms::TextBox());
			this->nsP_tb = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->prenom = (gcnew System::Windows::Forms::Label());
			this->de = (gcnew System::Windows::Forms::Label());
			this->adresse = (gcnew System::Windows::Forms::Label());
			this->ns = (gcnew System::Windows::Forms::Label());
			this->ps = (gcnew System::Windows::Forms::Label());
			this->psP_tb = (gcnew System::Windows::Forms::TextBox());
			this->validerP = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(48, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(772, 391);
			this->dataGridView1->TabIndex = 0;
			// 
			// Client
			// 
			this->Client->AutoSize = true;
			this->Client->Location = System::Drawing::Point(410, 23);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(54, 13);
			this->Client->TabIndex = 1;
			this->Client->Text = L"Personnel";
			// 
			// Ajouter
			// 
			this->Ajouter->Location = System::Drawing::Point(863, 52);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(75, 23);
			this->Ajouter->TabIndex = 2;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			// 
			// Modifier
			// 
			this->Modifier->Location = System::Drawing::Point(863, 105);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(75, 23);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			// 
			// Supprimer
			// 
			this->Supprimer->Location = System::Drawing::Point(863, 163);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(75, 23);
			this->Supprimer->TabIndex = 4;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			// 
			// nomP_tb
			// 
			this->nomP_tb->Location = System::Drawing::Point(48, 511);
			this->nomP_tb->Name = L"nomP_tb";
			this->nomP_tb->Size = System::Drawing::Size(100, 20);
			this->nomP_tb->TabIndex = 5;
			// 
			// prenomP_tb
			// 
			this->prenomP_tb->Location = System::Drawing::Point(187, 511);
			this->prenomP_tb->Name = L"prenomP_tb";
			this->prenomP_tb->Size = System::Drawing::Size(100, 20);
			this->prenomP_tb->TabIndex = 6;
			// 
			// deP_tb
			// 
			this->deP_tb->Location = System::Drawing::Point(325, 511);
			this->deP_tb->Name = L"deP_tb";
			this->deP_tb->Size = System::Drawing::Size(100, 20);
			this->deP_tb->TabIndex = 7;
			// 
			// adresseP_tb
			// 
			this->adresseP_tb->Location = System::Drawing::Point(472, 511);
			this->adresseP_tb->Name = L"adresseP_tb";
			this->adresseP_tb->Size = System::Drawing::Size(100, 20);
			this->adresseP_tb->TabIndex = 8;
			// 
			// nsP_tb
			// 
			this->nsP_tb->Location = System::Drawing::Point(609, 511);
			this->nsP_tb->Name = L"nsP_tb";
			this->nsP_tb->Size = System::Drawing::Size(100, 20);
			this->nsP_tb->TabIndex = 9;
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(76, 495);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(29, 13);
			this->nom->TabIndex = 11;
			this->nom->Text = L"Nom";
			// 
			// prenom
			// 
			this->prenom->AutoSize = true;
			this->prenom->Location = System::Drawing::Point(217, 495);
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(43, 13);
			this->prenom->TabIndex = 12;
			this->prenom->Text = L"Prenom";
			// 
			// de
			// 
			this->de->AutoSize = true;
			this->de->Location = System::Drawing::Point(336, 495);
			this->de->Name = L"de";
			this->de->Size = System::Drawing::Size(89, 13);
			this->de->TabIndex = 13;
			this->de->Text = L"date d\'embauche";
			// 
			// adresse
			// 
			this->adresse->AutoSize = true;
			this->adresse->Location = System::Drawing::Point(498, 495);
			this->adresse->Name = L"adresse";
			this->adresse->Size = System::Drawing::Size(45, 13);
			this->adresse->TabIndex = 14;
			this->adresse->Text = L"Adresse";
			// 
			// ns
			// 
			this->ns->AutoSize = true;
			this->ns->Location = System::Drawing::Point(620, 495);
			this->ns->Name = L"ns";
			this->ns->Size = System::Drawing::Size(73, 13);
			this->ns->TabIndex = 15;
			this->ns->Text = L"nom superieur";
			// 
			// ps
			// 
			this->ps->AutoSize = true;
			this->ps->Location = System::Drawing::Point(736, 494);
			this->ps->Name = L"ps";
			this->ps->Size = System::Drawing::Size(88, 13);
			this->ps->TabIndex = 16;
			this->ps->Text = L"prenom superieur";
			// 
			// psP_tb
			// 
			this->psP_tb->Location = System::Drawing::Point(739, 510);
			this->psP_tb->Name = L"psP_tb";
			this->psP_tb->Size = System::Drawing::Size(100, 20);
			this->psP_tb->TabIndex = 17;
			// 
			// validerP
			// 
			this->validerP->Location = System::Drawing::Point(863, 507);
			this->validerP->Name = L"validerP";
			this->validerP->Size = System::Drawing::Size(75, 23);
			this->validerP->TabIndex = 18;
			this->validerP->Text = L"Valider";
			this->validerP->UseVisualStyleBackColor = true;
			// 
			// PersonnelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 550);
			this->Controls->Add(this->validerP);
			this->Controls->Add(this->psP_tb);
			this->Controls->Add(this->ps);
			this->Controls->Add(this->ns);
			this->Controls->Add(this->adresse);
			this->Controls->Add(this->de);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->nsP_tb);
			this->Controls->Add(this->adresseP_tb);
			this->Controls->Add(this->deP_tb);
			this->Controls->Add(this->prenomP_tb);
			this->Controls->Add(this->nomP_tb);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"PersonnelForm";
			this->Text = L"PersonnelForm";
			this->Load += gcnew System::EventHandler(this, &PersonnelForm::PersonnelForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void PersonnelForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->nom->Hide();
		this->nomP_tb->Hide();
		this->prenom->Hide();
		this->prenomP_tb->Hide();
		this->ddn->Hide();
		this->ddn_tb->Hide();
		this->af->Hide();
		this->af_tb->Hide();
		this->al->Hide();
		this->al_tb->Hide();
		this->ValiderP->Hide();

	}
};
}
