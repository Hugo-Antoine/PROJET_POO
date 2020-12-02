#pragma once
#include "Personnel.h"
#include "adresse.h"

namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Description résumée de PersonnelForm
	/// </summary>
	public ref class PersonnelForm : public System::Windows::Forms::Form
	{
	private: bool insert = false;
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
	private: System::Windows::Forms::DataGridView^ personnelData;
	protected:


	private: System::Windows::Forms::Label^ Client;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::TextBox^ nom_tb;
	private: System::Windows::Forms::TextBox^ prenom_tb;

	private: System::Windows::Forms::TextBox^ ligne1_tb;

	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ prenom;

	private: System::Windows::Forms::Label^ ligne1;
	private: System::Windows::Forms::Button^ valider;




	private: System::Windows::Forms::Label^ pays;
	private: System::Windows::Forms::Label^ ville;
	private: System::Windows::Forms::Label^ cp;
	private: System::Windows::Forms::TextBox^ pays_tb;
	private: System::Windows::Forms::TextBox^ ville_tb;
	private: System::Windows::Forms::TextBox^ cp_tb;

	private: System::Windows::Forms::ListBox^ SuperiorListe;
	private: System::Windows::Forms::Label^ superieur;
	private: System::Windows::Forms::DateTimePicker^ de_pi;


	private: System::Windows::Forms::Label^ de;





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
			this->personnelData = (gcnew System::Windows::Forms::DataGridView());
			this->Client = (gcnew System::Windows::Forms::Label());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->nom_tb = (gcnew System::Windows::Forms::TextBox());
			this->prenom_tb = (gcnew System::Windows::Forms::TextBox());
			this->ligne1_tb = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->prenom = (gcnew System::Windows::Forms::Label());
			this->ligne1 = (gcnew System::Windows::Forms::Label());
			this->valider = (gcnew System::Windows::Forms::Button());
			this->pays = (gcnew System::Windows::Forms::Label());
			this->ville = (gcnew System::Windows::Forms::Label());
			this->cp = (gcnew System::Windows::Forms::Label());
			this->pays_tb = (gcnew System::Windows::Forms::TextBox());
			this->ville_tb = (gcnew System::Windows::Forms::TextBox());
			this->cp_tb = (gcnew System::Windows::Forms::TextBox());
			this->SuperiorListe = (gcnew System::Windows::Forms::ListBox());
			this->superieur = (gcnew System::Windows::Forms::Label());
			this->de_pi = (gcnew System::Windows::Forms::DateTimePicker());
			this->de = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->personnelData))->BeginInit();
			this->SuspendLayout();
			// 
			// personnelData
			// 
			this->personnelData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->personnelData->Location = System::Drawing::Point(48, 52);
			this->personnelData->Name = L"personnelData";
			this->personnelData->Size = System::Drawing::Size(772, 391);
			this->personnelData->TabIndex = 0;
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
			this->Supprimer->Click += gcnew System::EventHandler(this, &PersonnelForm::Supprimer_Click);
			// 
			// nom_tb
			// 
			this->nom_tb->Location = System::Drawing::Point(12, 498);
			this->nom_tb->Name = L"nom_tb";
			this->nom_tb->Size = System::Drawing::Size(100, 20);
			this->nom_tb->TabIndex = 5;
			// 
			// prenom_tb
			// 
			this->prenom_tb->Location = System::Drawing::Point(134, 499);
			this->prenom_tb->Name = L"prenom_tb";
			this->prenom_tb->Size = System::Drawing::Size(100, 20);
			this->prenom_tb->TabIndex = 6;
			// 
			// ligne1_tb
			// 
			this->ligne1_tb->Location = System::Drawing::Point(455, 478);
			this->ligne1_tb->Name = L"ligne1_tb";
			this->ligne1_tb->Size = System::Drawing::Size(100, 20);
			this->ligne1_tb->TabIndex = 8;
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(45, 478);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(29, 13);
			this->nom->TabIndex = 30;
			this->nom->Text = L"Nom";
			// 
			// prenom
			// 
			this->prenom->AutoSize = true;
			this->prenom->Location = System::Drawing::Point(161, 478);
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(43, 13);
			this->prenom->TabIndex = 29;
			this->prenom->Text = L"Prenom";
			// 
			// ligne1
			// 
			this->ligne1->AutoSize = true;
			this->ligne1->Location = System::Drawing::Point(484, 456);
			this->ligne1->Name = L"ligne1";
			this->ligne1->Size = System::Drawing::Size(45, 13);
			this->ligne1->TabIndex = 28;
			this->ligne1->Text = L"Adresse";
			// 
			// valider
			// 
			this->valider->Location = System::Drawing::Point(863, 507);
			this->valider->Name = L"valider";
			this->valider->Size = System::Drawing::Size(75, 23);
			this->valider->TabIndex = 13;
			this->valider->Text = L"Valider";
			this->valider->UseVisualStyleBackColor = true;
			this->valider->Click += gcnew System::EventHandler(this, &PersonnelForm::valider_Click);
			// 
			// pays
			// 
			this->pays->AutoSize = true;
			this->pays->Location = System::Drawing::Point(595, 505);
			this->pays->Name = L"pays";
			this->pays->Size = System::Drawing::Size(30, 13);
			this->pays->TabIndex = 17;
			this->pays->Text = L"Pays";
			// 
			// ville
			// 
			this->ville->AutoSize = true;
			this->ville->Location = System::Drawing::Point(595, 456);
			this->ville->Name = L"ville";
			this->ville->Size = System::Drawing::Size(26, 13);
			this->ville->TabIndex = 15;
			this->ville->Text = L"Ville";
			// 
			// cp
			// 
			this->cp->AutoSize = true;
			this->cp->Location = System::Drawing::Point(474, 505);
			this->cp->Name = L"cp";
			this->cp->Size = System::Drawing::Size(64, 13);
			this->cp->TabIndex = 16;
			this->cp->Text = L"Code Postal";
			// 
			// pays_tb
			// 
			this->pays_tb->Location = System::Drawing::Point(561, 518);
			this->pays_tb->Name = L"pays_tb";
			this->pays_tb->Size = System::Drawing::Size(100, 20);
			this->pays_tb->TabIndex = 11;
			// 
			// ville_tb
			// 
			this->ville_tb->Location = System::Drawing::Point(561, 478);
			this->ville_tb->Name = L"ville_tb";
			this->ville_tb->Size = System::Drawing::Size(100, 20);
			this->ville_tb->TabIndex = 9;
			// 
			// cp_tb
			// 
			this->cp_tb->Location = System::Drawing::Point(455, 518);
			this->cp_tb->Name = L"cp_tb";
			this->cp_tb->Size = System::Drawing::Size(100, 20);
			this->cp_tb->TabIndex = 10;
			// 
			// SuperiorListe
			// 
			this->SuperiorListe->FormattingEnabled = true;
			this->SuperiorListe->Location = System::Drawing::Point(680, 485);
			this->SuperiorListe->Name = L"SuperiorListe";
			this->SuperiorListe->Size = System::Drawing::Size(163, 56);
			this->SuperiorListe->TabIndex = 12;
			// 
			// superieur
			// 
			this->superieur->AutoSize = true;
			this->superieur->Location = System::Drawing::Point(680, 466);
			this->superieur->Name = L"superieur";
			this->superieur->Size = System::Drawing::Size(52, 13);
			this->superieur->TabIndex = 27;
			this->superieur->Text = L"Superieur";
			// 
			// de_pi
			// 
			this->de_pi->Location = System::Drawing::Point(240, 499);
			this->de_pi->Name = L"de_pi";
			this->de_pi->Size = System::Drawing::Size(200, 20);
			this->de_pi->TabIndex = 7;
			// 
			// de
			// 
			this->de->AutoSize = true;
			this->de->Location = System::Drawing::Point(290, 476);
			this->de->Name = L"de";
			this->de->Size = System::Drawing::Size(89, 13);
			this->de->TabIndex = 13;
			this->de->Text = L"date d\'embauche";
			// 
			// PersonnelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 550);
			this->Controls->Add(this->de_pi);
			this->Controls->Add(this->superieur);
			this->Controls->Add(this->SuperiorListe);
			this->Controls->Add(this->cp_tb);
			this->Controls->Add(this->ville_tb);
			this->Controls->Add(this->pays_tb);
			this->Controls->Add(this->cp);
			this->Controls->Add(this->ville);
			this->Controls->Add(this->pays);
			this->Controls->Add(this->valider);
			this->Controls->Add(this->ligne1);
			this->Controls->Add(this->de);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->ligne1_tb);
			this->Controls->Add(this->prenom_tb);
			this->Controls->Add(this->nom_tb);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->personnelData);
			this->Name = L"PersonnelForm";
			this->Text = L"PersonnelForm";
			this->Load += gcnew System::EventHandler(this, &PersonnelForm::PersonnelForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->personnelData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void PersonnelForm_Load(System::Object^ sender, System::EventArgs^ e) {

		//
		//On cache tout les textBoxs, le calendrier et la liste
		//

		this->nom->Hide();
		this->nom_tb->Hide();
		this->prenom->Hide();
		this->prenom_tb->Hide();
		this->de->Hide();
		this->de_pi->Hide();
		this->ligne1->Hide();
		this->ligne1_tb->Hide();
		this->pays->Hide();
		this->pays_tb->Hide();
		this->ville->Hide();
		this->ville_tb->Hide();
		this->cp->Hide();
		this->cp_tb->Hide();
		this->superieur->Hide();
		this->SuperiorListe->Hide();
		this->valider->Hide();

		//
		//on creer la valeur aucun pour pouvoir ne pas avoir de superieur
		//

		this->SuperiorListe->Items->Add("aucun");

		//
		//On creer les colonnes de la table
		//

		personnelData->ColumnCount = 8;
		personnelData->Columns[0]->Name = "Nom";
		personnelData->Columns[1]->Name = "Prenom";
		personnelData->Columns[2]->Name = "Date d'embauche";
		personnelData->Columns[3]->Name = "Adresse";
		personnelData->Columns[4]->Name = "Ville";
		personnelData->Columns[5]->Name = "Code postal";
		personnelData->Columns[6]->Name = "Pays";
		personnelData->Columns[7]->Name = "Superieur";

		//
		//On remplit les colonnes avec les données de la bdd
		//

		array<Personnel^>^ personnelsActif = Personnel::getPersonnelActif();
		array<Adresse^>^ adress = Adresse::getAdresse();

		Personnel^ p = nullptr;
		Personnel^ pSup = nullptr;
		Adresse^ a = nullptr;

		personnelData->Rows->Clear();

		for (int i = 0; i < personnelsActif->Length; i++)
		{
			p = personnelsActif[i];

			for (int i = 0; i < adress->Length; i++)
			{
				if (adress[i]->getID() == p->getIdAdresse()) {
					a = adress[i];
				}
			}
			for (int i = 0; i < personnelsActif->Length; i++)
			{
				if (personnelsActif[i]->getID() == p->getIdPersonnel()) {
					pSup = personnelsActif[i];
				}
			}
			if (p->getSupprimer() == false)
			personnelData->Rows->Add(p->getNom(), p->getPrenom(), p->getDe(), a->getLigne1(), a->getVille(), a->getCp(), a->getPays(), (p->getIdPersonnel() == 0 ? "NULL" : (pSup->getNom() + " " + pSup->getPrenom())));
		}
	}

private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {

	//
	//On Set toute les textBox vide, le calendrier à la date d'ajourd'hui et le superieur à aucun et on dit qu'on est en train d'ajouter
	//

	this->insert = true;
	this->nom_tb->Text = "";
	this->prenom_tb->Text = "";
	this->ligne1_tb->Text = "";
	this->pays_tb->Text = "";
	this->ville_tb->Text = "";
	this->cp_tb->Text = "";
	//this->de_pi->Value = DateTime->Today;               SET le calendrier a la date d'aujourd'hui
	this->SuperiorListe->SelectedIndex = 0;

	//
	//On afficher dans le SuperiorListe la liste de tout les superieurs 
	//(ici tout les personnels puisqu'on crée un nouveaux personnel et que tout le monde peut etre son superieur)
	//

	array<Personnel^>^ personnels = Personnel::getPersonnelActif();
	Personnel^ p = nullptr;

	for (int i = 0; i < personnels->Length; i++)
	{
		p = personnels[i];
		this->SuperiorListe->Items->Add(p->getNom() + " " + p->getPrenom());
	}

	//
	//On affiche tout les textbox, calendrier et liste
	//

	this->nom->Show();
	this->nom_tb->Show();
	this->prenom->Show();
	this->prenom_tb->Show();
	this->de->Show();
	this->de_pi->Show();
	this->ligne1->Show();
	this->ligne1_tb->Show();
	this->pays->Show();
	this->pays_tb->Show();
	this->ville->Show();
	this->ville_tb->Show();
	this->cp->Show();
	this->cp_tb->Show();
	this->superieur->Show();
	this->SuperiorListe->Show();
	this->valider->Show();
}


private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {

	//
	//on creer un tableau  objet en local de personnels et d'adresses pour recuperer leur valeurs
	//

	array<Personnel^>^ personnels = Personnel::getPersonnelActif();
	array<Adresse^>^ adr = Adresse::getAdresse();

	//
	//on recupere l'id de la ligne selectionner
	//

	int idRow = personnelData->CurrentRow->Index;
	int id = personnels[idRow]->getID();

	//
	//On initialise les objets a null
	//

	Personnel^ p = nullptr;
	Adresse^ a = nullptr;

	//
	//on SET p au personnel selectionner
	//

	for (int i = 0; i < personnels->Length; i++)
	{
		if (personnels[i]->getID() == id) {
			p = personnels[i];
		}
	}
	//
	//si personnel existe pas erreur
	//

	if (p == nullptr) {
		Debug::WriteLine("peronne non trouvée id :" + id);
		return;
	}


	//
	//on set a à la bonne adresse
	//

	for (int i = 0; i < adr->Length; i++)
	{
		if (adr[i]->getID() == p->getIdAdresse()) {
			a = adr[i];
		}
	}

	//
	//si adresse existe pas erreur
	//

	if (a == nullptr) {
		Debug::WriteLine("adresse non trouvée id :" + p->getIdAdresse());
		return;
	}

	//
	//On afficher dans le SuperiorListe la liste de tout les superieurs 
	//(ici tout les personnels puisqu'on crée un nouveaux personnel et que tout le monde peut etre son superieur)
	//

	Personnel^ pSup = nullptr;

	for (int i = 0; i < personnels->Length; i++)
	{
		pSup = personnels[i];
		this->SuperiorListe->Items->Add(pSup->getNom() + " " + pSup->getPrenom());
	}

	//
	//on met dans pSub l'objet personnel du superieur en question
	//

	int index = 0;

	for (int i = 0; i < personnels->Length; i++)
	{
		if (personnels[i]->getID() == p->getIdPersonnel()) {
			pSup = personnels[i];
		}
	}

	//
	//On recupere le l'index du superieur de la personne
	//

	for (int i = 0; i < personnels->Length; i++)
	{
		if (pSup->getNom() + " " + pSup->getPrenom() == this->SuperiorListe->GetItemText(this->SuperiorListe->Items[i])) {
			index = i;
		}
	}

	//
	//On Set toute les valeurs a leur correspondance dans la BDD et on dit qu'on est en mode update
	//

	this->insert = false;
	this->nom_tb->Text = p->getNom();
	this->prenom_tb->Text = p->getPrenom();
	this->de_pi->Text = p->getDe();
	this->ligne1_tb->Text = a->getLigne1();
	this->pays_tb->Text = a->getPays();
	this->ville_tb->Text = a->getVille();
	this->cp_tb->Text = a->getCp();
	this->SuperiorListe->SelectedIndex = index;

	//
	//On affiche tout
	//
	this->nom->Show();
	this->nom_tb->Show();
	this->prenom->Show();
	this->prenom_tb->Show();
	this->de->Show();
	this->de_pi->Show();
	this->ligne1->Show();
	this->ligne1_tb->Show();
	this->pays->Show();
	this->pays_tb->Show();
	this->ville->Show();
	this->ville_tb->Show();
	this->cp->Show();
	this->cp_tb->Show();
	this->superieur->Show();
	this->SuperiorListe->Show();
	this->valider->Show();

}

private: System::Void valider_Click(System::Object^ sender, System::EventArgs^ e) {

	//
	//on cache tout 
	//

	this->nom->Hide();
	this->nom_tb->Hide();
	this->prenom->Hide();
	this->prenom_tb->Hide();
	this->de->Hide();
	this->de_pi->Hide();
	this->ligne1->Hide();
	this->ligne1_tb->Hide();
	this->pays->Hide();
	this->pays_tb->Hide();
	this->ville->Hide();
	this->ville_tb->Hide();
	this->cp->Hide();
	this->cp_tb->Hide();
	this->superieur->Hide();
	this->SuperiorListe->Hide();
	this->valider->Hide();

	//
	//on creer des objet adresse et personnel
	//

	Adresse^ adr = gcnew Adresse();
	Personnel^ person = gcnew Personnel();

	//
	//on set dans l'adresse toute les valeurs qui sont dans les texts box
	//

	adr->setLigne1(Convert::ToString(this->ligne1_tb->Text));
	adr->setPays(Convert::ToString(this->pays_tb->Text));
	adr->setVille(Convert::ToString(this->ville_tb->Text));
	adr->setCp(Convert::ToString(this->cp_tb->Text));

	int idSup = 0;

	//
	//On creer une liste de personnel et on cherche l'id du superieur parmis tout les personnels
	//

	array<Personnel^>^ personnels = Personnel::getPersonnelActif();

	for (int i = 0; i < personnels->Length; i++)
	{
		if (this->SuperiorListe->GetItemText(this->SuperiorListe->SelectedItem) == personnels[i]->getNom() + " " + personnels[i]->getPrenom()) {
			idSup = personnels[i]->getID();
		};
	}

	//
	//on Set dans le personnels toute les infos 
	//

	//si on est en update 	
	if (!insert) 
	{ 
		int idRow = personnelData->CurrentRow->Index;
		int id = personnels[idRow]->getID();
		person->setID(id); 
	}

	person->setNom(Convert::ToString(this->nom_tb->Text));
	person->setPrenom(Convert::ToString(this->prenom_tb->Text));
	person->setDe(Convert::ToString(this->de_pi->Value));
	person->setIdAdresse(Convert::ToInt32(adr->persist()));
	person->setIdPersonnel(Convert::ToInt32(idSup));


	//
	//on envoie sur la BDD
	//

	person->persist();

	//
	//Actualisation des Vlaeurs dans le datagrid
	//

	array<Personnel^>^ personnelsActif = Personnel::getPersonnelActif();
	array<Adresse^>^ adress = Adresse::getAdresse();

	Personnel^ p = nullptr;
	Personnel^ pSup = nullptr;
	Adresse^ a = nullptr;

	personnelData->Rows->Clear();

	for (int i = 0; i < personnelsActif->Length; i++)
	{
		p = personnelsActif[i];

		for (int i = 0; i < adress->Length; i++)
		{
			if (adress[i]->getID() == p->getIdAdresse()) {
				a = adress[i];
			}
		}
		for (int i = 0; i < personnelsActif->Length; i++)
		{
			if (personnelsActif[i]->getID() == p->getIdPersonnel()) {
				pSup = personnelsActif[i];
			}
		}
		if (p->getSupprimer() == false)
			personnelData->Rows->Add(p->getNom(), p->getPrenom(), p->getDe(), a->getLigne1(), a->getVille(), a->getCp(), a->getPays(), (p->getIdPersonnel() == 0 ? "NULL" : (pSup->getNom() + " " + pSup->getPrenom())));
	}

}
private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {

	//
	//on creer un nouveau personnel et la liste de tout les personnels
	//

	Personnel^ pr = gcnew Personnel();
	array<Personnel^>^ personnelsActif = Personnel::getPersonnelActif();

	//
	//on met dans p l'objet personnel du personnel en question
	//

	int idRow = personnelData->CurrentRow->Index;
	int id = personnelsActif[idRow]->getID();

	//
	//on check si le personnel est le superieur d'un autre personnel si oui on a pas le droit de le delete
	//

	for (int i = 0; i < personnelsActif->Length; i++)
	{
		if (personnelsActif[i]->getIdPersonnel() == id) {
			Debug::Write("pas le droit de suppr");
			return;
		}
	}

	//
	//On set pr a le personne selectionné
	//

	for (int i = 0; i < personnelsActif->Length; i++)
	{
		if (personnelsActif[i]->getID() == id) {
			pr = personnelsActif[i];
		}
	}

	pr->setSupprimer(true);
	pr->persist();

	//
	//Update de la dataviewGrid
	//

	array<Adresse^>^ adress = Adresse::getAdresse();

	Personnel^ p = nullptr;
	Personnel^ pSup = nullptr;
	Adresse^ a = nullptr;

	personnelData->Rows->Clear();

	for (int i = 0; i < personnelsActif->Length; i++)
	{
		p = personnelsActif[i];

		for (int i = 0; i < adress->Length; i++)
		{
			if (adress[i]->getID() == p->getIdAdresse()) {
				a = adress[i];
			}
		}
		for (int i = 0; i < personnelsActif->Length; i++)
		{
			if (personnelsActif[i]->getID() == p->getIdPersonnel()) {
				pSup = personnelsActif[i];
			}
		}
		if (p->getSupprimer() == false)
			personnelData->Rows->Add(p->getNom(), p->getPrenom(), p->getDe(), a->getLigne1(), a->getVille(), a->getCp(), a->getPays(), (p->getIdPersonnel() == 0 ? "NULL" : (pSup->getNom() + " " + pSup->getPrenom())));
	}
}

};
}
