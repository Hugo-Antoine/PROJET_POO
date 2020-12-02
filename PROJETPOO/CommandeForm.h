#pragma once

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CommandeForm
	/// </summary>
	public ref class CommandeForm : public System::Windows::Forms::Form
	{
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

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ Client;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Label^ reference;
	private: System::Windows::Forms::Label^ date_livraison;
	private: System::Windows::Forms::Label^ date_emission;
	private: System::Windows::Forms::Label^ date_solde;
	private: System::Windows::Forms::Label^ total_ht;
	private: System::Windows::Forms::Label^ total_ttc;




	private: System::Windows::Forms::ListBox^ clientListe;

	private: System::Windows::Forms::Label^ clientname;
	private: System::Windows::Forms::TextBox^ reference_tb;
	private: System::Windows::Forms::DateTimePicker^ dl_pi;
	private: System::Windows::Forms::DateTimePicker^ de_pi;









	private: System::Windows::Forms::TextBox^ ht_tb;
	private: System::Windows::Forms::TextBox^ ttc_tb;




	private: System::Windows::Forms::DateTimePicker^ ds_pi;

	private: System::Windows::Forms::Button^ valider;
	private: System::Windows::Forms::ListBox^ alListe;
	private: System::Windows::Forms::ListBox^ afListe;
	private: System::Windows::Forms::Label^ al;




	private: System::Windows::Forms::Label^ af;


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
			this->reference = (gcnew System::Windows::Forms::Label());
			this->date_livraison = (gcnew System::Windows::Forms::Label());
			this->date_emission = (gcnew System::Windows::Forms::Label());
			this->date_solde = (gcnew System::Windows::Forms::Label());
			this->total_ht = (gcnew System::Windows::Forms::Label());
			this->total_ttc = (gcnew System::Windows::Forms::Label());
			this->clientListe = (gcnew System::Windows::Forms::ListBox());
			this->clientname = (gcnew System::Windows::Forms::Label());
			this->reference_tb = (gcnew System::Windows::Forms::TextBox());
			this->dl_pi = (gcnew System::Windows::Forms::DateTimePicker());
			this->de_pi = (gcnew System::Windows::Forms::DateTimePicker());
			this->ht_tb = (gcnew System::Windows::Forms::TextBox());
			this->ttc_tb = (gcnew System::Windows::Forms::TextBox());
			this->ds_pi = (gcnew System::Windows::Forms::DateTimePicker());
			this->valider = (gcnew System::Windows::Forms::Button());
			this->alListe = (gcnew System::Windows::Forms::ListBox());
			this->afListe = (gcnew System::Windows::Forms::ListBox());
			this->al = (gcnew System::Windows::Forms::Label());
			this->af = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(772, 391);
			this->dataGridView1->TabIndex = 0;
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
			// 
			// Modifier
			// 
			this->Modifier->Location = System::Drawing::Point(841, 95);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(75, 23);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			// 
			// Supprimer
			// 
			this->Supprimer->Location = System::Drawing::Point(841, 153);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(75, 23);
			this->Supprimer->TabIndex = 4;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			// 
			// reference
			// 
			this->reference->AutoSize = true;
			this->reference->Location = System::Drawing::Point(47, 457);
			this->reference->Name = L"reference";
			this->reference->Size = System::Drawing::Size(52, 13);
			this->reference->TabIndex = 5;
			this->reference->Text = L"reference";
			// 
			// date_livraison
			// 
			this->date_livraison->AutoSize = true;
			this->date_livraison->Location = System::Drawing::Point(201, 457);
			this->date_livraison->Name = L"date_livraison";
			this->date_livraison->Size = System::Drawing::Size(84, 13);
			this->date_livraison->TabIndex = 6;
			this->date_livraison->Text = L"date de livraison";
			// 
			// date_emission
			// 
			this->date_emission->AutoSize = true;
			this->date_emission->Location = System::Drawing::Point(405, 457);
			this->date_emission->Name = L"date_emission";
			this->date_emission->Size = System::Drawing::Size(79, 13);
			this->date_emission->TabIndex = 7;
			this->date_emission->Text = L"date d\'émission";
			// 
			// date_solde
			// 
			this->date_solde->AutoSize = true;
			this->date_solde->Location = System::Drawing::Point(635, 457);
			this->date_solde->Name = L"date_solde";
			this->date_solde->Size = System::Drawing::Size(71, 13);
			this->date_solde->TabIndex = 8;
			this->date_solde->Text = L"date de solde";
			// 
			// total_ht
			// 
			this->total_ht->AutoSize = true;
			this->total_ht->Location = System::Drawing::Point(545, 522);
			this->total_ht->Name = L"total_ht";
			this->total_ht->Size = System::Drawing::Size(45, 13);
			this->total_ht->TabIndex = 9;
			this->total_ht->Text = L"total HT";
			// 
			// total_ttc
			// 
			this->total_ttc->AutoSize = true;
			this->total_ttc->Location = System::Drawing::Point(655, 522);
			this->total_ttc->Name = L"total_ttc";
			this->total_ttc->Size = System::Drawing::Size(51, 13);
			this->total_ttc->TabIndex = 10;
			this->total_ttc->Text = L"total TTC";
			// 
			// clientListe
			// 
			this->clientListe->FormattingEnabled = true;
			this->clientListe->Location = System::Drawing::Point(73, 532);
			this->clientListe->Name = L"clientListe";
			this->clientListe->Size = System::Drawing::Size(120, 43);
			this->clientListe->TabIndex = 15;
			// 
			// clientname
			// 
			this->clientname->AutoSize = true;
			this->clientname->Location = System::Drawing::Point(108, 514);
			this->clientname->Name = L"clientname";
			this->clientname->Size = System::Drawing::Size(32, 13);
			this->clientname->TabIndex = 16;
			this->clientname->Text = L"client";
			// 
			// reference_tb
			// 
			this->reference_tb->Location = System::Drawing::Point(26, 473);
			this->reference_tb->Name = L"reference_tb";
			this->reference_tb->Size = System::Drawing::Size(100, 20);
			this->reference_tb->TabIndex = 17;
			// 
			// dl_pi
			// 
			this->dl_pi->Location = System::Drawing::Point(150, 473);
			this->dl_pi->Name = L"dl_pi";
			this->dl_pi->Size = System::Drawing::Size(200, 20);
			this->dl_pi->TabIndex = 18;
			// 
			// de_pi
			// 
			this->de_pi->Location = System::Drawing::Point(369, 473);
			this->de_pi->Name = L"de_pi";
			this->de_pi->Size = System::Drawing::Size(200, 20);
			this->de_pi->TabIndex = 19;
			// 
			// ht_tb
			// 
			this->ht_tb->Location = System::Drawing::Point(519, 540);
			this->ht_tb->Name = L"ht_tb";
			this->ht_tb->Size = System::Drawing::Size(100, 20);
			this->ht_tb->TabIndex = 24;
			// 
			// ttc_tb
			// 
			this->ttc_tb->Location = System::Drawing::Point(634, 539);
			this->ttc_tb->Name = L"ttc_tb";
			this->ttc_tb->Size = System::Drawing::Size(100, 20);
			this->ttc_tb->TabIndex = 25;
			// 
			// ds_pi
			// 
			this->ds_pi->Location = System::Drawing::Point(586, 473);
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
			// 
			// alListe
			// 
			this->alListe->FormattingEnabled = true;
			this->alListe->Location = System::Drawing::Point(224, 530);
			this->alListe->Name = L"alListe";
			this->alListe->Size = System::Drawing::Size(120, 43);
			this->alListe->TabIndex = 28;
			// 
			// afListe
			// 
			this->afListe->FormattingEnabled = true;
			this->afListe->Location = System::Drawing::Point(378, 530);
			this->afListe->Name = L"afListe";
			this->afListe->Size = System::Drawing::Size(120, 43);
			this->afListe->TabIndex = 29;
			// 
			// al
			// 
			this->al->AutoSize = true;
			this->al->Location = System::Drawing::Point(242, 514);
			this->al->Name = L"al";
			this->al->Size = System::Drawing::Size(85, 13);
			this->al->TabIndex = 30;
			this->al->Text = L"adresse livraison";
			// 
			// af
			// 
			this->af->AutoSize = true;
			this->af->Location = System::Drawing::Point(389, 514);
			this->af->Name = L"af";
			this->af->Size = System::Drawing::Size(97, 13);
			this->af->TabIndex = 31;
			this->af->Text = L"adresse facturation";
			// 
			// CommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 589);
			this->Controls->Add(this->af);
			this->Controls->Add(this->al);
			this->Controls->Add(this->afListe);
			this->Controls->Add(this->alListe);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->ds_pi);
			this->Controls->Add(this->ttc_tb);
			this->Controls->Add(this->ht_tb);
			this->Controls->Add(this->de_pi);
			this->Controls->Add(this->dl_pi);
			this->Controls->Add(this->reference_tb);
			this->Controls->Add(this->clientname);
			this->Controls->Add(this->clientListe);
			this->Controls->Add(this->total_ttc);
			this->Controls->Add(this->total_ht);
			this->Controls->Add(this->date_solde);
			this->Controls->Add(this->date_emission);
			this->Controls->Add(this->date_livraison);
			this->Controls->Add(this->reference);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"CommandeForm";
			this->Text = L"CommandeForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
