#pragma once
#include "SQL_CMD.h"
#include "Article.h"



namespace PROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


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
	private: System::Windows::Forms::ListBox^ requete_list;
	private: System::Windows::Forms::Button^ exec;

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
			this->requete_list = (gcnew System::Windows::Forms::ListBox());
			this->exec = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statData))->BeginInit();
			this->SuspendLayout();
			// 
			// statData
			// 
			this->statData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->statData->Location = System::Drawing::Point(25, 204);
			this->statData->Name = L"statData";
			this->statData->Size = System::Drawing::Size(422, 251);
			this->statData->TabIndex = 0;
			// 
			// requete_list
			// 
			this->requete_list->FormattingEnabled = true;
			this->requete_list->Location = System::Drawing::Point(25, 12);
			this->requete_list->Name = L"requete_list";
			this->requete_list->Size = System::Drawing::Size(299, 173);
			this->requete_list->TabIndex = 1;
			// 
			// exec
			// 
			this->exec->Location = System::Drawing::Point(349, 90);
			this->exec->Name = L"exec";
			this->exec->Size = System::Drawing::Size(75, 23);
			this->exec->TabIndex = 2;
			this->exec->Text = L"executer";
			this->exec->UseVisualStyleBackColor = true;
			this->exec->Click += gcnew System::EventHandler(this, &statForm::exec_Click);
			// 
			// statForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 487);
			this->Controls->Add(this->exec);
			this->Controls->Add(this->requete_list);
			this->Controls->Add(this->statData);
			this->Name = L"statForm";
			this->Text = L"statForm";
			this->Load += gcnew System::EventHandler(this, &statForm::statForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statData))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

private: System::Void statForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
		this->statData->ColumnCount = 1;
		this->statData->Columns[0]->Name = "requete";
		



	this->requete_list->Items->Clear();
	


	for (int i = 1; i <= 8; i++)
	{

		this->requete_list->Items->Add("requete" + i.ToString());
		
	}

	requete_list->EndUpdate();

	requete_list->SetSelected(0, true);

	
	
}
	
private: System::Void exec_Click(System::Object^ sender, System::EventArgs^ e) {
	

	Article^ ar = gcnew Article;
	


	if (requete_list->GetSelected(0) == true){
	statData->Rows->Clear();
	statData->Rows->Add(ar->requete1());

	}
	
	else if (requete_list->GetSelected(1)  == true ){
	statData->Rows->Clear();
	statData->Rows->Add("requete 2", "requete");
	
	
	
	}

	else if (requete_list->GetSelected(2) == true){
	statData->Rows->Clear();
	statData->Rows->Add("requete 3", "requete");
	
	
	
	
	}

	else if (requete_list->GetSelected(3) == true){
	statData->Rows->Clear();
	statData->Rows->Add("requete 4", "requete");
	
	
	
	}

	else if (requete_list->GetSelected(4) == true){
	statData->Rows->Clear();
	statData->Rows->Add("requete 5", "requete");
	
	
	
	}

	else if (requete_list->GetSelected(5) == true){
	statData->Rows->Clear();
	statData->Rows->Add("requete 6", "requete");
	
	
	
	}

	else if (requete_list->GetSelected(6) == true){
	statData->Rows->Clear();
	statData->Rows->Add("requete 7", "requete");
	
	
	
	}

	else if (requete_list->GetSelected(7) == true){
	statData->Rows->Clear();
	statData->Rows->Add("requete 8", "requete");
	
	
	
	
	}


		}
	};
}
