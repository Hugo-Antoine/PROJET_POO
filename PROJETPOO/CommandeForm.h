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
			// Commande
			// 
			this->Client->AutoSize = true;
			this->Client->Location = System::Drawing::Point(410, 23);
			this->Client->Name = L"Commande";
			this->Client->Size = System::Drawing::Size(33, 13);
			this->Client->TabIndex = 1;
			this->Client->Text = L"Commande";
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
			// CommandeForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 505);
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
			this->SuspendLayout();
		}
#pragma endregion

	};
}
