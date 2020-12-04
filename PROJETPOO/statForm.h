#pragma once
#include "SQL_CMD.h"
#include "Stat.h"
#include "Client.h"



namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;


	/// <summary>
	/// Description résumée de statForm
	/// </summary>
	public ref class statForm : public System::Windows::Forms::Form
	{
	
		
	public:

		
		statForm(void)
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
		~statForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ statData;
	protected:

	private: System::Windows::Forms::Button^ exec;
	private: System::Windows::Forms::ComboBox^ mois_cb;

	private: System::Windows::Forms::Label^ mois;

	private: System::Windows::Forms::Label^ client;

	private: System::Windows::Forms::ComboBox^ client_cb;




	private: System::Windows::Forms::ListBox^ requete_list;
	private: System::Windows::Forms::Label^ TVA;
	private: System::Windows::Forms::Label^ mc;

	private: System::Windows::Forms::Label^ rc;




	private: System::Windows::Forms::Label^ di;

	private: System::Windows::Forms::TextBox^ TVA_tb;
	private: System::Windows::Forms::TextBox^ mc_tb;
	private: System::Windows::Forms::TextBox^ rc_tb;
	private: System::Windows::Forms::TextBox^ di_tb;





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
			this->statData = (gcnew System::Windows::Forms::DataGridView());
			this->exec = (gcnew System::Windows::Forms::Button());
			this->mois_cb = (gcnew System::Windows::Forms::ComboBox());
			this->mois = (gcnew System::Windows::Forms::Label());
			this->client = (gcnew System::Windows::Forms::Label());
			this->client_cb = (gcnew System::Windows::Forms::ComboBox());
			this->requete_list = (gcnew System::Windows::Forms::ListBox());
			this->TVA = (gcnew System::Windows::Forms::Label());
			this->mc = (gcnew System::Windows::Forms::Label());
			this->rc = (gcnew System::Windows::Forms::Label());
			this->di = (gcnew System::Windows::Forms::Label());
			this->TVA_tb = (gcnew System::Windows::Forms::TextBox());
			this->mc_tb = (gcnew System::Windows::Forms::TextBox());
			this->rc_tb = (gcnew System::Windows::Forms::TextBox());
			this->di_tb = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statData))->BeginInit();
			this->SuspendLayout();
			// 
			// statData
			// 
			this->statData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->statData->Location = System::Drawing::Point(25, 210);
			this->statData->Name = L"statData";
			this->statData->Size = System::Drawing::Size(149, 274);
			this->statData->TabIndex = 0;
			// 
			// exec
			// 
			this->exec->Location = System::Drawing::Point(127, 500);
			this->exec->Name = L"exec";
			this->exec->Size = System::Drawing::Size(75, 23);
			this->exec->TabIndex = 2;
			this->exec->Text = L"executer";
			this->exec->UseVisualStyleBackColor = true;
			this->exec->Click += gcnew System::EventHandler(this, &statForm::exec_Click);
			// 
			// mois_cb
			// 
			this->mois_cb->FormattingEnabled = true;
			this->mois_cb->Location = System::Drawing::Point(180, 263);
			this->mois_cb->Name = L"mois_cb";
			this->mois_cb->Size = System::Drawing::Size(121, 21);
			this->mois_cb->TabIndex = 3;
			// 
			// mois
			// 
			this->mois->AutoSize = true;
			this->mois->Location = System::Drawing::Point(223, 247);
			this->mois->Name = L"mois";
			this->mois->Size = System::Drawing::Size(29, 13);
			this->mois->TabIndex = 4;
			this->mois->Text = L"Mois";
			// 
			// client
			// 
			this->client->AutoSize = true;
			this->client->Location = System::Drawing::Point(223, 198);
			this->client->Name = L"client";
			this->client->Size = System::Drawing::Size(33, 13);
			this->client->TabIndex = 6;
			this->client->Text = L"Client";
			// 
			// client_cb
			// 
			this->client_cb->FormattingEnabled = true;
			this->client_cb->Location = System::Drawing::Point(179, 214);
			this->client_cb->Name = L"client_cb";
			this->client_cb->Size = System::Drawing::Size(121, 21);
			this->client_cb->TabIndex = 8;
			// 
			// requete_list
			// 
			this->requete_list->FormattingEnabled = true;
			this->requete_list->Location = System::Drawing::Point(12, 12);
			this->requete_list->Name = L"requete_list";
			this->requete_list->Size = System::Drawing::Size(286, 173);
			this->requete_list->TabIndex = 1;
			this->requete_list->SelectedIndexChanged += gcnew System::EventHandler(this, &statForm::requete_list_SelectedIndexChanged);
			// 
			// TVA
			// 
			this->TVA->AutoSize = true;
			this->TVA->Location = System::Drawing::Point(212, 296);
			this->TVA->Name = L"TVA";
			this->TVA->Size = System::Drawing::Size(54, 13);
			this->TVA->TabIndex = 9;
			this->TVA->Text = L"TVA en %";
			// 
			// mc
			// 
			this->mc->AutoSize = true;
			this->mc->Location = System::Drawing::Point(180, 347);
			this->mc->Name = L"mc";
			this->mc->Size = System::Drawing::Size(120, 13);
			this->mc->TabIndex = 10;
			this->mc->Text = L"Marge Commercial en %";
			// 
			// rc
			// 
			this->rc->AutoSize = true;
			this->rc->Location = System::Drawing::Point(176, 396);
			this->rc->Name = L"rc";
			this->rc->Size = System::Drawing::Size(125, 13);
			this->rc->TabIndex = 11;
			this->rc->Text = L"Remise Commercial en %";
			// 
			// di
			// 
			this->di->AutoSize = true;
			this->di->Location = System::Drawing::Point(177, 448);
			this->di->Name = L"di";
			this->di->Size = System::Drawing::Size(130, 13);
			this->di->TabIndex = 12;
			this->di->Text = L"Démarque Inconnue en %";
			// 
			// TVA_tb
			// 
			this->TVA_tb->Location = System::Drawing::Point(189, 312);
			this->TVA_tb->Name = L"TVA_tb";
			this->TVA_tb->Size = System::Drawing::Size(100, 20);
			this->TVA_tb->TabIndex = 13;
			// 
			// mc_tb
			// 
			this->mc_tb->Location = System::Drawing::Point(189, 363);
			this->mc_tb->Name = L"mc_tb";
			this->mc_tb->Size = System::Drawing::Size(100, 20);
			this->mc_tb->TabIndex = 14;
			// 
			// rc_tb
			// 
			this->rc_tb->Location = System::Drawing::Point(189, 412);
			this->rc_tb->Name = L"rc_tb";
			this->rc_tb->Size = System::Drawing::Size(100, 20);
			this->rc_tb->TabIndex = 15;
			// 
			// di_tb
			// 
			this->di_tb->Location = System::Drawing::Point(189, 464);
			this->di_tb->Name = L"di_tb";
			this->di_tb->Size = System::Drawing::Size(100, 20);
			this->di_tb->TabIndex = 16;
			// 
			// statForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 535);
			this->Controls->Add(this->di_tb);
			this->Controls->Add(this->rc_tb);
			this->Controls->Add(this->mc_tb);
			this->Controls->Add(this->TVA_tb);
			this->Controls->Add(this->di);
			this->Controls->Add(this->rc);
			this->Controls->Add(this->mc);
			this->Controls->Add(this->TVA);
			this->Controls->Add(this->client_cb);
			this->Controls->Add(this->client);
			this->Controls->Add(this->mois);
			this->Controls->Add(this->mois_cb);
			this->Controls->Add(this->exec);
			this->Controls->Add(this->requete_list);
			this->Controls->Add(this->statData);
			this->Name = L"statForm";
			this->Text = L"statForm";
			this->Load += gcnew System::EventHandler(this, &statForm::statForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void statForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	this->statData->ColumnCount = 1;
	this->statData->Columns[0]->Name = "Valeur";
		
	this->requete_list->Items->Clear();
	
	this->requete_list->Items->Add("Produits sous le seuil de réapprovisionnement");
	this->requete_list->Items->Add("10 articles les plus vendus "); 
	this->requete_list->Items->Add("10 articles les moins vendus");
	this->requete_list->Items->Add("Valeur commerciale du stock");
	this->requete_list->Items->Add("Valeur d’achat du stock");
	this->requete_list->Items->Add("Panier moyen (après remise)");
	this->requete_list->Items->Add("Montant total des achats pour un client ");
	this->requete_list->Items->Add("Chiffre d’affaire sur un mois en particulier");
	this->requete_list->Items->Add("Simuler des variations de valeurs commerciales pour en déduire la valeur du stock");

	this->client_cb->Hide();
	this->client->Hide();

	this->mois_cb->Hide();
	this->mois->Hide();

	this->TVA->Hide();
	this->mc->Hide();
	this->rc->Hide();
	this->di->Hide();
	this->TVA_tb->Hide();
	this->mc_tb->Hide();
	this->rc_tb->Hide();
	this->di_tb->Hide();

}
	
private: System::Void exec_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int index = this->requete_list->SelectedIndex + 1;
	int mois = 0;
	Stat^ r = gcnew Stat();
	array<String^>^ tab;
	array<Clients^>^ ClientsActif = Clients::getClientActif();

	switch (index) {
	case 1:
		this->statData->Rows->Clear();
		tab = r->GetR1();
		for(int i = 0; i < tab->Length; i++)
			this->statData->Rows->Add(tab[i]);
		break;

	case 2:
		this->statData->Rows->Clear();
		tab = r->GetR2();
		for (int i = 0; i < tab->Length; i++)
			this->statData->Rows->Add(tab[i]);
		break;

	case 3:
		this->statData->Rows->Clear();
		tab = r->GetR3();
		for (int i = 0; i < tab->Length; i++)
			this->statData->Rows->Add(tab[i]);
		break;

	case 4:
		this->statData->Rows->Clear();
		tab = r->GetR4();
		for (int i = 0; i < tab->Length; i++)
			this->statData->Rows->Add(tab[i]);
		break;

	case 5:
		this->statData->Rows->Clear();
		tab = r->GetR5();
		for (int i = 0; i < tab->Length; i++)
			this->statData->Rows->Add(tab[i]);
		break;

	case 6:
		this->statData->Rows->Clear();
		tab = r->GetR6();
		for (int i = 0; i < tab->Length; i++)
			this->statData->Rows->Add(tab[i]);
		break;

	case 7:
		for (int i = 0; i < ClientsActif->Length; i++)
		{
			if (ClientsActif[i]->getNom() + " " + ClientsActif[i]->getPrenom() == this->client_cb->SelectedItem) {
				this->statData->Rows->Clear();
				tab = r->GetR7(Convert::ToString(ClientsActif[i]->getNom()), Convert::ToString(ClientsActif[i]->getPrenom()));
				for (int i = 0; i < tab->Length; i++)
					this->statData->Rows->Add(tab[i]);
			}
		}
		break;

	case 8:
		mois = this->client_cb->SelectedIndex + 1;
		this->statData->Rows->Clear();
		tab = r->GetR8(Convert::ToString(mois));
		for (int i = 0; i < tab->Length; i++)
			this->statData->Rows->Add(tab[i]);
		break;

	case 9:
		this->statData->Rows->Clear();
		tab = r->GetR9((this->TVA_tb->Text == "" ? Convert::ToDouble(0.0) : Convert::ToDouble(this->TVA_tb->Text)), (this->mc_tb->Text == "" ? Convert::ToDouble(0.0) : Convert::ToDouble(this->mc_tb->Text)), (this->rc_tb->Text == "" ? Convert::ToDouble(0.0) : Convert::ToDouble(this->rc_tb->Text)), (this->di_tb->Text == "" ? Convert::ToDouble(0.0) : Convert::ToDouble(this->di_tb->Text)));
		for (int i = 0; i < tab->Length; i++)
			this->statData->Rows->Add(tab[i]);
		break;
	}

	this->client_cb->Hide();
	this->client->Hide();

	this->mois_cb->Hide();
	this->mois->Hide();

	this->TVA->Hide();
	this->mc->Hide();
	this->rc->Hide();
	this->di->Hide();
	this->TVA_tb->Hide();
	this->mc_tb->Hide();
	this->rc_tb->Hide();
	this->di_tb->Hide();
	this->TVA_tb->Text = "";
	this->mc_tb->Text = "";
	this->rc_tb->Text = "";
	this->di_tb->Text = "";


}
private: System::Void requete_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	int index = this->requete_list->SelectedIndex + 1;
	array<Clients^>^ ClientsActif = Clients::getClientActif();

	switch (index) {
	case 1 :
		this->client_cb->Hide();
		this->client->Hide();

		this->mois_cb->Hide();
		this->mois->Hide();

		this->TVA->Hide();
		this->mc->Hide();
		this->rc->Hide();
		this->di->Hide();
		this->TVA_tb->Hide();
		this->mc_tb->Hide();
		this->rc_tb->Hide();
		this->di_tb->Hide();
		break;

	case 2 :
		this->client_cb->Hide();
		this->client->Hide();

		this->mois_cb->Hide();
		this->mois->Hide();

		this->TVA->Hide();
		this->mc->Hide();
		this->rc->Hide();
		this->di->Hide();
		this->TVA_tb->Hide();
		this->mc_tb->Hide();
		this->rc_tb->Hide();
		this->di_tb->Hide();
		break;

	case 3 :
		this->client_cb->Hide();
		this->client->Hide();

		this->mois_cb->Hide();
		this->mois->Hide();

		this->TVA->Hide();
		this->mc->Hide();
		this->rc->Hide();
		this->di->Hide();
		this->TVA_tb->Hide();
		this->mc_tb->Hide();
		this->rc_tb->Hide();
		this->di_tb->Hide();
		break;

	case 4 :
		this->client_cb->Hide();
		this->client->Hide();

		this->mois_cb->Hide();
		this->mois->Hide();

		this->TVA->Hide();
		this->mc->Hide();
		this->rc->Hide();
		this->di->Hide();
		this->TVA_tb->Hide();
		this->mc_tb->Hide();
		this->rc_tb->Hide();
		this->di_tb->Hide();

		break;

	case 5 :
		this->client_cb->Hide();
		this->client->Hide();

		this->mois_cb->Hide();
		this->mois->Hide();

		this->TVA->Hide();
		this->mc->Hide();
		this->rc->Hide();
		this->di->Hide();
		this->TVA_tb->Hide();
		this->mc_tb->Hide();
		this->rc_tb->Hide();
		this->di_tb->Hide();

		break;

	case 6 :
		this->client_cb->Hide();
		this->client->Hide();

		this->mois_cb->Hide();
		this->mois->Hide();

		this->TVA->Hide();
		this->mc->Hide();
		this->rc->Hide();
		this->di->Hide();
		this->TVA_tb->Hide();
		this->mc_tb->Hide();
		this->rc_tb->Hide();
		this->di_tb->Hide();

		break;

	case 7 :
		this->client_cb->Show();
		this->client->Show();
		this->client_cb->Items->Clear();

		this->mois_cb->Hide();
		this->mois->Hide();

		this->TVA->Hide();
		this->mc->Hide();
		this->rc->Hide();
		this->di->Hide();
		this->TVA_tb->Hide();
		this->mc_tb->Hide();
		this->rc_tb->Hide();
		this->di_tb->Hide();

		for (int i = 0; i < ClientsActif->Length; i++)
		{
			this->client_cb->Items->Add(ClientsActif[i]->getNom() + " " + ClientsActif[i]->getPrenom());
		}
		break;

	case 8 :
		this->client_cb->Hide();
		this->client->Hide();

		this->mois_cb->Show();
		this->mois->Show();
		this->mois_cb->Items->Clear();

		this->TVA->Hide();
		this->mc->Hide();
		this->rc->Hide();
		this->di->Hide();
		this->TVA_tb->Hide();
		this->mc_tb->Hide();
		this->rc_tb->Hide();
		this->di_tb->Hide();

		this->mois_cb->Items->Add("Janvier");
		this->mois_cb->Items->Add("Fevrier");
		this->mois_cb->Items->Add("Mars");
		this->mois_cb->Items->Add("Avril");
		this->mois_cb->Items->Add("Mai");
		this->mois_cb->Items->Add("Juin");
		this->mois_cb->Items->Add("Juillet");
		this->mois_cb->Items->Add("Aout");
		this->mois_cb->Items->Add("Septembre");
		this->mois_cb->Items->Add("Octobre");
		this->mois_cb->Items->Add("Novembre");
		this->mois_cb->Items->Add("Decembre");

		break;
	case 9 :
		this->client_cb->Hide();
		this->client->Hide();

		this->mois_cb->Hide();
		this->mois->Hide();

		this->TVA->Show();
		this->mc->Show();
		this->rc->Show();
		this->di->Show();
		this->TVA_tb->Show();
		this->mc_tb->Show();
		this->rc_tb->Show();
		this->di_tb->Show();
	}
}
};
}
