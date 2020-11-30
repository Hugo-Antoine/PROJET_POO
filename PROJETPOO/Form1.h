#pragma once
#include "ClientForm.h"
#include "CommandeForm.h"
#include "PersonnelForm.h"
#include "StockForm.h"
#include "Personnel.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Client;
	private: System::Windows::Forms::Button^ Commande;
	private: System::Windows::Forms::Button^ Stock;
	private: System::Windows::Forms::Button^ personnel;
	private: System::Windows::Forms::Label^ GERER;
	protected:




	protected:

	private:

		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Client = (gcnew System::Windows::Forms::Button());
			this->Commande = (gcnew System::Windows::Forms::Button());
			this->Stock = (gcnew System::Windows::Forms::Button());
			this->personnel = (gcnew System::Windows::Forms::Button());
			this->GERER = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Client
			// 
			this->Client->Location = System::Drawing::Point(40, 96);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(90, 25);
			this->Client->TabIndex = 0;
			this->Client->Text = L"Client";
			this->Client->UseVisualStyleBackColor = true;
			this->Client->Click += gcnew System::EventHandler(this, &Form1::Client_Click);
			// 
			// Commande
			// 
			this->Commande->Location = System::Drawing::Point(171, 96);
			this->Commande->Name = L"Commande";
			this->Commande->Size = System::Drawing::Size(90, 25);
			this->Commande->TabIndex = 1;
			this->Commande->Text = L"Commande";
			this->Commande->UseVisualStyleBackColor = true;
			this->Commande->Click += gcnew System::EventHandler(this, &Form1::Commande_Click);
			// 
			// Stock
			// 
			this->Stock->Location = System::Drawing::Point(40, 183);
			this->Stock->Name = L"Stock";
			this->Stock->Size = System::Drawing::Size(90, 25);
			this->Stock->TabIndex = 2;
			this->Stock->Text = L"Stock";
			this->Stock->UseVisualStyleBackColor = true;
			this->Stock->Click += gcnew System::EventHandler(this, &Form1::Stock_Click);
			// 
			// personnel
			// 
			this->personnel->Location = System::Drawing::Point(171, 183);
			this->personnel->Name = L"personnel";
			this->personnel->Size = System::Drawing::Size(90, 25);
			this->personnel->TabIndex = 3;
			this->personnel->Text = L"Personnel";
			this->personnel->UseVisualStyleBackColor = true;
			this->personnel->Click += gcnew System::EventHandler(this, &Form1::Personnel_Click);
			// 
			// GERER
			// 
			this->GERER->AutoSize = true;
			this->GERER->Location = System::Drawing::Point(126, 38);
			this->GERER->Name = L"GERER";
			this->GERER->Size = System::Drawing::Size(45, 13);
			this->GERER->TabIndex = 4;
			this->GERER->Text = L"GERER";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->GERER);
			this->Controls->Add(this->personnel);
			this->Controls->Add(this->Stock);
			this->Controls->Add(this->Commande);
			this->Controls->Add(this->Client);
			this->Name = L"Form1";
			this->Text = L"MainMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void Client_Click(System::Object^ sender, System::EventArgs^ e) {
		PROJETPOO::ClientForm^ clientForm = gcnew PROJETPOO::ClientForm();
		clientForm->ShowDialog();
	}

	private: System::Void Commande_Click(System::Object^ sender, System::EventArgs^ e) {
		PROJETPOO::CommandeForm^ commandeForm = gcnew PROJETPOO::CommandeForm();
		commandeForm->ShowDialog();
	}
	private: System::Void Stock_Click(System::Object^ sender, System::EventArgs^ e) {
		PROJETPOO::StockForm^ stockForm = gcnew PROJETPOO::StockForm();
		stockForm->ShowDialog();
	}
	private: System::Void Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		PROJETPOO::PersonnelForm^ personnelForm = gcnew PROJETPOO::PersonnelForm();
		personnelForm->ShowDialog();
	}
};
}
