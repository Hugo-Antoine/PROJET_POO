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
	private: System::Windows::Forms::Label^ Client;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::TextBox^ nom_tb;
	private: System::Windows::Forms::TextBox^ prenom_tb;

	private: System::Windows::Forms::TextBox^ de_tb;
	private: System::Windows::Forms::TextBox^ adresse_tb;
	private: System::Windows::Forms::TextBox^ ns_tb;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ prenom;
	private: System::Windows::Forms::Label^ de;
	private: System::Windows::Forms::Label^ adresse;
	private: System::Windows::Forms::Label^ ns;
	private: System::Windows::Forms::Label^ ps;
	private: System::Windows::Forms::TextBox^ ps_tb;
	private: System::Windows::Forms::Button^ valider;

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
			this->nom_tb = (gcnew System::Windows::Forms::TextBox());
			this->prenom_tb = (gcnew System::Windows::Forms::TextBox());
			this->de_tb = (gcnew System::Windows::Forms::TextBox());
			this->adresse_tb = (gcnew System::Windows::Forms::TextBox());
			this->ns_tb = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->prenom = (gcnew System::Windows::Forms::Label());
			this->de = (gcnew System::Windows::Forms::Label());
			this->adresse = (gcnew System::Windows::Forms::Label());
			this->ns = (gcnew System::Windows::Forms::Label());
			this->ps = (gcnew System::Windows::Forms::Label());
			this->ps_tb = (gcnew System::Windows::Forms::TextBox());
			this->valider = (gcnew System::Windows::Forms::Button());
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
			this->Ajouter->Click += gcnew System::EventHandler(this, &PersonnelForm::Ajouter_Click);
			// 
			// Modifier
			// 
			this->Modifier->Location = System::Drawing::Point(863, 105);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(75, 23);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &PersonnelForm::Modifier_Click);
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
			// nom_tb
			// 
			this->nom_tb->Location = System::Drawing::Point(48, 511);
			this->nom_tb->Name = L"nom_tb";
			this->nom_tb->Size = System::Drawing::Size(100, 20);
			this->nom_tb->TabIndex = 5;
			// 
			// prenom_tb
			// 
			this->prenom_tb->Location = System::Drawing::Point(187, 511);
			this->prenom_tb->Name = L"prenom_tb";
			this->prenom_tb->Size = System::Drawing::Size(100, 20);
			this->prenom_tb->TabIndex = 6;
			// 
			// de_tb
			// 
			this->de_tb->Location = System::Drawing::Point(325, 511);
			this->de_tb->Name = L"de_tb";
			this->de_tb->Size = System::Drawing::Size(100, 20);
			this->de_tb->TabIndex = 7;
			// 
			// adresse_tb
			// 
			this->adresse_tb->Location = System::Drawing::Point(472, 511);
			this->adresse_tb->Name = L"adresse_tb";
			this->adresse_tb->Size = System::Drawing::Size(100, 20);
			this->adresse_tb->TabIndex = 8;
			// 
			// ns_tb
			// 
			this->ns_tb->Location = System::Drawing::Point(609, 511);
			this->ns_tb->Name = L"ns_tb";
			this->ns_tb->Size = System::Drawing::Size(100, 20);
			this->ns_tb->TabIndex = 9;
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
			// ps_tb
			// 
			this->ps_tb->Location = System::Drawing::Point(739, 510);
			this->ps_tb->Name = L"ps_tb";
			this->ps_tb->Size = System::Drawing::Size(100, 20);
			this->ps_tb->TabIndex = 17;
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(863, 507);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(75, 23);
			this->valider->TabIndex = 18;
			this->valider->Text = L"Valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &PersonnelForm::valider_Click);
			// 
			// PersonnelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 550);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->ps_tb);
			this->Controls->Add(this->ps);
			this->Controls->Add(this->ns);
			this->Controls->Add(this->adresse);
			this->Controls->Add(this->de);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->ns_tb);
			this->Controls->Add(this->adresse_tb);
			this->Controls->Add(this->de_tb);
			this->Controls->Add(this->prenom_tb);
			this->Controls->Add(this->nom_tb);
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
		this->nom_tb->Hide();
		this->prenom->Hide();
		this->prenom_tb->Hide();
		this->de->Hide();
		this->de_tb->Hide();
		this->adresse->Hide();
		this->adresse_tb->Hide();
		this->ns->Hide();
		this->ns_tb->Hide();
		this->ps->Hide();
		this->ps_tb->Hide();
		this->valider->Hide();
	}
private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {

	this->nom_tb->Text = "";
	this->prenom_tb->Text = "";
	this->de_tb->Text = "";
	this->adresse_tb->Text = "";
	this->ns_tb->Text = "";
	this->ps_tb->Text = "";

	this->nom->Show();
	this->nom_tb->Show();
	this->prenom->Show();
	this->prenom_tb->Show();
	this->de->Show();
	this->de_tb->Show();
	this->adresse->Show();
	this->adresse_tb->Show();
	this->ns->Show();
	this->ns_tb->Show();
	this->ps->Show();
	this->ps_tb->Show();
	this->valider->Show();
}
private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {

	array<Personnel^>^ personnels = Personnel::getPersonnels();

	this->nom_tb->Text = personnels[0]->getNom();
	this->prenom_tb->Text = personnels[0]->getPrenom();
	this->de_tb->Text = personnels[0]->getDe();
	this->adresse_tb->Text = personnels[0]->getNom();
	this->ns_tb->Text = personnels[0]->getNom();
	this->ps_tb->Text = personnels[0]->getNom();

	this->nom->Show();
	this->nom_tb->Show();
	this->prenom->Show();
	this->prenom_tb->Show();
	this->de->Show();
	this->de_tb->Show();
	this->adresse->Show();
	this->adresse_tb->Show();
	this->ns->Show();
	this->ns_tb->Show();
	this->ps->Show();
	this->ps_tb->Show();
	this->valider->Show();
}

private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {

	this->nom->Hide();
	this->nom_tb->Hide();
	this->prenom->Hide();
	this->prenom_tb->Hide();
	this->de->Hide();
	this->de_tb->Hide();
	this->adresse->Hide();
	this->adresse_tb->Hide();
	this->ns->Hide();
	this->ns_tb->Hide();
	this->ps->Hide();
	this->ps_tb->Hide();
	this->valider->Hide();

	Personnel^ person = gcnew Personnel();

	person->setNom(Convert::ToString(this->nom_tb->Text));
	person->setPrenom(Convert::ToString(this->prenom_tb->Text));
	person->setDe(Convert::ToString(this->de_tb->Text));
	person->setIdAdresse(Convert::ToInt32(3));
	person->setIdPersonnel(Convert::ToInt32(1));

	person->persist();

}
};
}
