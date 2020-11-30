#pragma once

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ Client;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::TextBox^ nom_tb;
	private: System::Windows::Forms::TextBox^ prenom_tb;
	private: System::Windows::Forms::TextBox^ ddn_tb;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ prenom;
	private: System::Windows::Forms::Label^ ddn;
	private: System::Windows::Forms::Label^ af;
	private: System::Windows::Forms::Label^ al;
	private: System::Windows::Forms::TextBox^ af_tb;
	private: System::Windows::Forms::TextBox^ al_tb;
	private: System::Windows::Forms::Button^ next;
	private: System::Windows::Forms::Button^ former;
	private: System::Windows::Forms::Label^ page_counter;
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
			this->ddn_tb = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->prenom = (gcnew System::Windows::Forms::Label());
			this->ddn = (gcnew System::Windows::Forms::Label());
			this->af = (gcnew System::Windows::Forms::Label());
			this->al = (gcnew System::Windows::Forms::Label());
			this->af_tb = (gcnew System::Windows::Forms::TextBox());
			this->al_tb = (gcnew System::Windows::Forms::TextBox());
			this->next = (gcnew System::Windows::Forms::Button());
			this->former = (gcnew System::Windows::Forms::Button());
			this->page_counter = (gcnew System::Windows::Forms::Label());
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
			this->Client->Size = System::Drawing::Size(33, 13);
			this->Client->TabIndex = 1;
			this->Client->Text = L"Client";
			// 
			// Ajouter
			// 
			this->Ajouter->Location = System::Drawing::Point(863, 52);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(75, 23);
			this->Ajouter->TabIndex = 2;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &ClientForm::Ajouter_Click);
			// 
			// Modifier
			// 
			this->Modifier->Location = System::Drawing::Point(863, 105);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(75, 23);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &ClientForm::Modifier_Click);
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
			this->nom_tb->Location = System::Drawing::Point(67, 501);
			this->nom_tb->Name = L"nom_tb";
			this->nom_tb->Size = System::Drawing::Size(100, 20);
			this->nom_tb->TabIndex = 5;
			// 
			// prenom_tb
			// 
			this->prenom_tb->Location = System::Drawing::Point(194, 501);
			this->prenom_tb->Name = L"prenom_tb";
			this->prenom_tb->Size = System::Drawing::Size(100, 20);
			this->prenom_tb->TabIndex = 6;
			// 
			// ddn_tb
			// 
			this->ddn_tb->Location = System::Drawing::Point(325, 501);
			this->ddn_tb->Name = L"ddn_tb";
			this->ddn_tb->Size = System::Drawing::Size(100, 20);
			this->ddn_tb->TabIndex = 7;
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(97, 485);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(29, 13);
			this->nom->TabIndex = 9;
			this->nom->Text = L"Nom";
			// 
			// prenom
			// 
			this->prenom->AutoSize = true;
			this->prenom->Location = System::Drawing::Point(227, 485);
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(43, 13);
			this->prenom->TabIndex = 10;
			this->prenom->Text = L"Prénom";
			// 
			// ddn
			// 
			this->ddn->AutoSize = true;
			this->ddn->Location = System::Drawing::Point(329, 485);
			this->ddn->Name = L"ddn";
			this->ddn->Size = System::Drawing::Size(96, 13);
			this->ddn->TabIndex = 11;
			this->ddn->Text = L"Date de naissance";
			// 
			// af
			// 
			this->af->AutoSize = true;
			this->af->Location = System::Drawing::Point(459, 485);
			this->af->Name = L"af";
			this->af->Size = System::Drawing::Size(113, 13);
			this->af->TabIndex = 13;
			this->af->Text = L"Adresse de facturation";
			// 
			// al
			// 
			this->al->AutoSize = true;
			this->al->Location = System::Drawing::Point(593, 485);
			this->al->Name = L"al";
			this->al->Size = System::Drawing::Size(100, 13);
			this->al->TabIndex = 14;
			this->al->Text = L"adresse de livraison";
			// 
			// af_tb
			// 
			this->af_tb->Location = System::Drawing::Point(462, 501);
			this->af_tb->Name = L"af_tb";
			this->af_tb->Size = System::Drawing::Size(100, 20);
			this->af_tb->TabIndex = 15;
			// 
			// al_tb
			// 
			this->al_tb->Location = System::Drawing::Point(593, 501);
			this->al_tb->Name = L"al_tb";
			this->al_tb->Size = System::Drawing::Size(100, 20);
			this->al_tb->TabIndex = 16;
			// 
			// next
			// 
			this->next->Location = System::Drawing::Point(910, 404);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(25, 25);
			this->next->TabIndex = 17;
			this->next->Text = L"->";
			this->next->UseVisualStyleBackColor = true;
			// 
			// former
			// 
			this->former->Location = System::Drawing::Point(863, 404);
			this->former->Name = L"former";
			this->former->Size = System::Drawing::Size(25, 25);
			this->former->TabIndex = 18;
			this->former->Text = L"<-";
			this->former->UseVisualStyleBackColor = true;
			// 
			// page_counter
			// 
			this->page_counter->AutoSize = true;
			this->page_counter->Location = System::Drawing::Point(884, 432);
			this->page_counter->Name = L"page_counter";
			this->page_counter->Size = System::Drawing::Size(30, 13);
			this->page_counter->TabIndex = 19;
			this->page_counter->Text = L"0/10";
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(733, 499);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(75, 23);
			this->valider->TabIndex = 20;
			this->valider->Text = L"Valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &ClientForm::valider_Click);
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 549);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->page_counter);
			this->Controls->Add(this->former);
			this->Controls->Add(this->next);
			this->Controls->Add(this->al_tb);
			this->Controls->Add(this->af_tb);
			this->Controls->Add(this->al);
			this->Controls->Add(this->af);
			this->Controls->Add(this->ddn);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->ddn_tb);
			this->Controls->Add(this->prenom_tb);
			this->Controls->Add(this->nom_tb);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ClientForm";
			this->Text = L"ClientForm";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
	this->ddn_tb->Hide();
	this->af->Hide();
	this->af_tb->Hide();
	this->al->Hide();
	this->al_tb->Hide();
	this->valider->Hide();
}
private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	//set tout à rien
	this->nom_tb->Text = "";
	this->prenom_tb->Text = "";
	this->ddn_tb->Text = "";
	this->af_tb->Text = "";
	this->al_tb->Text = "";
	//afficher tout
	this->nom->Show();
	this->nom_tb->Show();
	this->prenom->Show();
	this->prenom_tb->Show();
	this->ddn->Show();
	this->ddn_tb->Show();
	this->af->Show();
	this->af_tb->Show();
	this->al->Show();
	this->al_tb->Show();
	this->valider->Show();
}
private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {
	//cacher tout
	this->nom->Hide();
	this->nom_tb->Hide();
	this->prenom->Hide();
	this->prenom_tb->Hide();
	this->ddn->Hide();
	this->ddn_tb->Hide();
	this->af->Hide();
	this->af_tb->Hide();
	this->al->Hide();
	this->al_tb->Hide();
	this->valider->Hide();
	//tout set dans la BDD
}
private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	//set tout avec les valeurs de la BDD
	this->nom_tb->Text = "Antoine";
	this->prenom_tb->Text = "Hugo";
	this->ddn_tb->Text = "17/03/2001";
	this->af_tb->Text = "";
	this->al_tb->Text = "";
	//afficher tout
	this->nom->Show();
	this->nom_tb->Show();
	this->prenom->Show();
	this->prenom_tb->Show();
	this->ddn->Show();
	this->ddn_tb->Show();
	this->af->Show();
	this->af_tb->Show();
	this->al->Show();
	this->al_tb->Show();
	this->valider->Show();
}
};
}
