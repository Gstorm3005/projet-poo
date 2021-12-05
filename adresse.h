#pragma once
#include "DbCo.h"
namespace Projectpoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de adresse
	/// </summary>
	public ref class adresse : public System::Windows::Forms::Form
	{
	public:
		adresse(void)
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
		~adresse()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button_afficher;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adresse::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button_afficher = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 80);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(760, 369);
			this->dataGridView1->TabIndex = 62;
			// 
			// button_afficher
			// 
			this->button_afficher->Location = System::Drawing::Point(244, 23);
			this->button_afficher->Name = L"button_afficher";
			this->button_afficher->Size = System::Drawing::Size(278, 33);
			this->button_afficher->TabIndex = 63;
			this->button_afficher->Text = L"afficher";
			this->button_afficher->UseVisualStyleBackColor = true;
			this->button_afficher->Click += gcnew System::EventHandler(this, &adresse::button_afficher_Click);
			// 
			// adresse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->button_afficher);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"adresse";
			this->Text = L"adresse";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button_afficher_Click(System::Object^ sender, System::EventArgs^ e) {
		DbCo^ afficher;
		afficher = gcnew DbCo;
		this->dataGridView1->DataSource = afficher->getRows("select* from adresse", "table");
		this->dataGridView1->DataMember = "table";
	}
	};
}
