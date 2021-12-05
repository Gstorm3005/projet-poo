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
	/// Description résumée de MyForm_statistiques
	/// </summary>
	public ref class MyForm_statistiques : public System::Windows::Forms::Form
	{
	public:
		MyForm_statistiques(void)
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
		~MyForm_statistiques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ actualiser;
	protected:
	private: System::Windows::Forms::DateTimePicker^ debut;
	private: System::Windows::Forms::DateTimePicker^ fin;






	private: System::Windows::Forms::DataGridView^ dataGridView_moins_vendus;
	private: System::Windows::Forms::DataGridView^ dataGridView_seuil;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label_vs;
	private: System::Windows::Forms::Label^ label_ch_aff;
	private: System::Windows::Forms::Label^ label_pm;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_tva;
	private: System::Windows::Forms::Button^ button_tva;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView_tva;


	protected:

	protected:















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_statistiques::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->actualiser = (gcnew System::Windows::Forms::Button());
			this->debut = (gcnew System::Windows::Forms::DateTimePicker());
			this->fin = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView_moins_vendus = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView_seuil = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label_vs = (gcnew System::Windows::Forms::Label());
			this->label_ch_aff = (gcnew System::Windows::Forms::Label());
			this->label_pm = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_tva = (gcnew System::Windows::Forms::TextBox());
			this->button_tva = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView_tva = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_moins_vendus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_seuil))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_tva))->BeginInit();
			this->SuspendLayout();
			// 
			// actualiser
			// 
			this->actualiser->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->actualiser->ForeColor = System::Drawing::Color::Transparent;
			this->actualiser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"actualiser.Image")));
			this->actualiser->Location = System::Drawing::Point(46, 382);
			this->actualiser->Margin = System::Windows::Forms::Padding(2);
			this->actualiser->Name = L"actualiser";
			this->actualiser->Size = System::Drawing::Size(105, 31);
			this->actualiser->TabIndex = 16;
			this->actualiser->Text = L"Actualiser";
			this->actualiser->UseVisualStyleBackColor = true;
			// 
			// debut
			// 
			this->debut->Location = System::Drawing::Point(40, 210);
			this->debut->Margin = System::Windows::Forms::Padding(2);
			this->debut->Name = L"debut";
			this->debut->Size = System::Drawing::Size(135, 20);
			this->debut->TabIndex = 17;
			// 
			// fin
			// 
			this->fin->Location = System::Drawing::Point(40, 161);
			this->fin->Margin = System::Windows::Forms::Padding(2);
			this->fin->Name = L"fin";
			this->fin->Size = System::Drawing::Size(135, 20);
			this->fin->TabIndex = 18;
			// 
			// dataGridView_moins_vendus
			// 
			this->dataGridView_moins_vendus->AllowUserToAddRows = false;
			this->dataGridView_moins_vendus->AllowUserToDeleteRows = false;
			this->dataGridView_moins_vendus->AllowUserToResizeColumns = false;
			this->dataGridView_moins_vendus->AllowUserToResizeRows = false;
			this->dataGridView_moins_vendus->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_moins_vendus->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView_moins_vendus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_moins_vendus->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_moins_vendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_moins_vendus->Location = System::Drawing::Point(403, 133);
			this->dataGridView_moins_vendus->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView_moins_vendus->Name = L"dataGridView_moins_vendus";
			this->dataGridView_moins_vendus->RowHeadersVisible = false;
			this->dataGridView_moins_vendus->RowHeadersWidth = 62;
			this->dataGridView_moins_vendus->RowTemplate->Height = 28;
			this->dataGridView_moins_vendus->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_moins_vendus->Size = System::Drawing::Size(175, 317);
			this->dataGridView_moins_vendus->TabIndex = 26;
			// 
			// dataGridView_seuil
			// 
			this->dataGridView_seuil->AllowUserToAddRows = false;
			this->dataGridView_seuil->AllowUserToDeleteRows = false;
			this->dataGridView_seuil->AllowUserToResizeColumns = false;
			this->dataGridView_seuil->AllowUserToResizeRows = false;
			this->dataGridView_seuil->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_seuil->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView_seuil->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_seuil->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView_seuil->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_seuil->Location = System::Drawing::Point(588, 133);
			this->dataGridView_seuil->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView_seuil->Name = L"dataGridView_seuil";
			this->dataGridView_seuil->RowHeadersVisible = false;
			this->dataGridView_seuil->RowHeadersWidth = 62;
			this->dataGridView_seuil->RowTemplate->Height = 28;
			this->dataGridView_seuil->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_seuil->Size = System::Drawing::Size(175, 317);
			this->dataGridView_seuil->TabIndex = 27;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(423, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 16);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Articles moins vendus";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(618, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 16);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Articles sous seuil";
			// 
			// label_vs
			// 
			this->label_vs->AutoSize = true;
			this->label_vs->BackColor = System::Drawing::SystemColors::Window;
			this->label_vs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_vs->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_vs->Location = System::Drawing::Point(49, 290);
			this->label_vs->Name = L"label_vs";
			this->label_vs->Size = System::Drawing::Size(102, 16);
			this->label_vs->TabIndex = 42;
			this->label_vs->Text = L"Valeur du Stock";
			// 
			// label_ch_aff
			// 
			this->label_ch_aff->AutoSize = true;
			this->label_ch_aff->BackColor = System::Drawing::SystemColors::Window;
			this->label_ch_aff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ch_aff->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_ch_aff->Location = System::Drawing::Point(37, 35);
			this->label_ch_aff->Name = L"label_ch_aff";
			this->label_ch_aff->Size = System::Drawing::Size(26, 16);
			this->label_ch_aff->TabIndex = 43;
			this->label_ch_aff->Text = L"tva";
			// 
			// label_pm
			// 
			this->label_pm->AutoSize = true;
			this->label_pm->BackColor = System::Drawing::SystemColors::Window;
			this->label_pm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pm->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_pm->Location = System::Drawing::Point(49, 328);
			this->label_pm->Name = L"label_pm";
			this->label_pm->Size = System::Drawing::Size(91, 16);
			this->label_pm->TabIndex = 44;
			this->label_pm->Text = L"Panier Moyen";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(278, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 16);
			this->label4->TabIndex = 39;
			this->label4->Text = L"prix ttc";
			// 
			// textBox_tva
			// 
			this->textBox_tva->Location = System::Drawing::Point(82, 35);
			this->textBox_tva->Name = L"textBox_tva";
			this->textBox_tva->Size = System::Drawing::Size(100, 20);
			this->textBox_tva->TabIndex = 45;
			// 
			// button_tva
			// 
			this->button_tva->Location = System::Drawing::Point(188, 33);
			this->button_tva->Name = L"button_tva";
			this->button_tva->Size = System::Drawing::Size(75, 23);
			this->button_tva->TabIndex = 46;
			this->button_tva->Text = L"calculer";
			this->button_tva->UseVisualStyleBackColor = true;
			this->button_tva->Click += gcnew System::EventHandler(this, &MyForm_statistiques::button_tva_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(100, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 47;
			this->button1->Text = L"afficher_tva";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm_statistiques::button1_Click);
			// 
			// dataGridView_tva
			// 
			this->dataGridView_tva->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_tva->Location = System::Drawing::Point(210, 132);
			this->dataGridView_tva->Name = L"dataGridView_tva";
			this->dataGridView_tva->Size = System::Drawing::Size(175, 317);
			this->dataGridView_tva->TabIndex = 48;
			
			// 
			// MyForm_statistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->dataGridView_tva);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_tva);
			this->Controls->Add(this->textBox_tva);
			this->Controls->Add(this->label_pm);
			this->Controls->Add(this->label_ch_aff);
			this->Controls->Add(this->label_vs);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView_seuil);
			this->Controls->Add(this->dataGridView_moins_vendus);
			this->Controls->Add(this->fin);
			this->Controls->Add(this->debut);
			this->Controls->Add(this->actualiser);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm_statistiques";
			this->Text = L"MyForm_statistiques";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_moins_vendus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_seuil))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_tva))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void button_tva_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ ajouter;
	ajouter = gcnew DbCo;
	ajouter->actionRows("select ID_article, Prix_HT  from article having Prix_HT = Prix_HT * '" + this->textBox_tva->Text + "'; ");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ afficher;
	afficher = gcnew DbCo;
	this->dataGridView_tva->DataSource = afficher->getRows("select ID_article, Prix_HT as 'prix avec tva' from article", "table");
	this->dataGridView_tva->DataMember = "table";
}
	   
};
}
