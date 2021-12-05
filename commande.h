#pragma once

namespace Projectpoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de commande
	/// </summary>
	public ref class commande : public System::Windows::Forms::Form
	{
	public:
		commande(void)
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
		~commande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_date_lv;
	private: System::Windows::Forms::Label^ label_date_fc;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_lv;

	protected:

	protected:


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_fc;

	private: System::Windows::Forms::Label^ label_adr_fc;

	private: System::Windows::Forms::Label^ label_adr_liv;
	private: System::Windows::Forms::TextBox^ textBox_adr_fc;
	private: System::Windows::Forms::TextBox^ textBox_adr_lv;
	private: System::Windows::Forms::Label^ label_ref;
	private: System::Windows::Forms::TextBox^ textBox_ref;





	private: System::Windows::Forms::Label^ label_qua;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_qua;
	private: System::Windows::Forms::TextBox^ textBox_rem;



	private: System::Windows::Forms::Label^ label_rem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(commande::typeid));
			this->label_date_lv = (gcnew System::Windows::Forms::Label());
			this->label_date_fc = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_lv = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_fc = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_adr_fc = (gcnew System::Windows::Forms::Label());
			this->label_adr_liv = (gcnew System::Windows::Forms::Label());
			this->textBox_adr_fc = (gcnew System::Windows::Forms::TextBox());
			this->textBox_adr_lv = (gcnew System::Windows::Forms::TextBox());
			this->label_ref = (gcnew System::Windows::Forms::Label());
			this->textBox_ref = (gcnew System::Windows::Forms::TextBox());
			this->label_qua = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_qua = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox_rem = (gcnew System::Windows::Forms::TextBox());
			this->label_rem = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_qua))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_date_lv
			// 
			this->label_date_lv->AutoSize = true;
			this->label_date_lv->BackColor = System::Drawing::Color::Transparent;
			this->label_date_lv->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_date_lv->Location = System::Drawing::Point(164, 27);
			this->label_date_lv->Name = L"label_date_lv";
			this->label_date_lv->Size = System::Drawing::Size(86, 13);
			this->label_date_lv->TabIndex = 13;
			this->label_date_lv->Text = L"Date de livraison";
			// 
			// label_date_fc
			// 
			this->label_date_fc->AutoSize = true;
			this->label_date_fc->BackColor = System::Drawing::Color::Transparent;
			this->label_date_fc->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_date_fc->Location = System::Drawing::Point(164, 67);
			this->label_date_fc->Name = L"label_date_fc";
			this->label_date_fc->Size = System::Drawing::Size(98, 13);
			this->label_date_fc->TabIndex = 14;
			this->label_date_fc->Text = L"Date de facturation";
			// 
			// dateTimePicker_lv
			// 
			this->dateTimePicker_lv->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker_lv->Location = System::Drawing::Point(167, 43);
			this->dateTimePicker_lv->Name = L"dateTimePicker_lv";
			this->dateTimePicker_lv->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker_lv->TabIndex = 15;
			// 
			// dateTimePicker_fc
			// 
			this->dateTimePicker_fc->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker_fc->Location = System::Drawing::Point(167, 83);
			this->dateTimePicker_fc->Name = L"dateTimePicker_fc";
			this->dateTimePicker_fc->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker_fc->TabIndex = 16;
			// 
			// label_adr_fc
			// 
			this->label_adr_fc->AutoSize = true;
			this->label_adr_fc->BackColor = System::Drawing::Color::Transparent;
			this->label_adr_fc->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_adr_fc->Location = System::Drawing::Point(386, 67);
			this->label_adr_fc->Name = L"label_adr_fc";
			this->label_adr_fc->Size = System::Drawing::Size(97, 13);
			this->label_adr_fc->TabIndex = 17;
			this->label_adr_fc->Text = L"adresse facturation";
			// 
			// label_adr_liv
			// 
			this->label_adr_liv->AutoSize = true;
			this->label_adr_liv->BackColor = System::Drawing::Color::Transparent;
			this->label_adr_liv->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_adr_liv->Location = System::Drawing::Point(386, 27);
			this->label_adr_liv->Name = L"label_adr_liv";
			this->label_adr_liv->Size = System::Drawing::Size(85, 13);
			this->label_adr_liv->TabIndex = 18;
			this->label_adr_liv->Text = L"adresse livraison";
			// 
			// textBox_adr_fc
			// 
			this->textBox_adr_fc->Location = System::Drawing::Point(389, 83);
			this->textBox_adr_fc->Name = L"textBox_adr_fc";
			this->textBox_adr_fc->Size = System::Drawing::Size(100, 20);
			this->textBox_adr_fc->TabIndex = 19;
			// 
			// textBox_adr_lv
			// 
			this->textBox_adr_lv->Location = System::Drawing::Point(389, 43);
			this->textBox_adr_lv->Name = L"textBox_adr_lv";
			this->textBox_adr_lv->Size = System::Drawing::Size(100, 20);
			this->textBox_adr_lv->TabIndex = 20;
			// 
			// label_ref
			// 
			this->label_ref->AutoSize = true;
			this->label_ref->BackColor = System::Drawing::Color::Transparent;
			this->label_ref->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_ref->Location = System::Drawing::Point(518, 27);
			this->label_ref->Name = L"label_ref";
			this->label_ref->Size = System::Drawing::Size(83, 13);
			this->label_ref->TabIndex = 21;
			this->label_ref->Text = L"reference article";
			// 
			// textBox_ref
			// 
			this->textBox_ref->Location = System::Drawing::Point(514, 43);
			this->textBox_ref->Name = L"textBox_ref";
			this->textBox_ref->Size = System::Drawing::Size(100, 20);
			this->textBox_ref->TabIndex = 22;
			// 
			// label_qua
			// 
			this->label_qua->AutoSize = true;
			this->label_qua->BackColor = System::Drawing::Color::Transparent;
			this->label_qua->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_qua->Location = System::Drawing::Point(511, 66);
			this->label_qua->Name = L"label_qua";
			this->label_qua->Size = System::Drawing::Size(45, 13);
			this->label_qua->TabIndex = 23;
			this->label_qua->Text = L"quantité";
			// 
			// numericUpDown_qua
			// 
			this->numericUpDown_qua->Location = System::Drawing::Point(514, 83);
			this->numericUpDown_qua->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_qua->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown_qua->Name = L"numericUpDown_qua";
			this->numericUpDown_qua->Size = System::Drawing::Size(108, 20);
			this->numericUpDown_qua->TabIndex = 47;
			// 
			// textBox_rem
			// 
			this->textBox_rem->Location = System::Drawing::Point(656, 43);
			this->textBox_rem->Name = L"textBox_rem";
			this->textBox_rem->Size = System::Drawing::Size(100, 20);
			this->textBox_rem->TabIndex = 48;
			// 
			// label_rem
			// 
			this->label_rem->AutoSize = true;
			this->label_rem->BackColor = System::Drawing::Color::Transparent;
			this->label_rem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_rem->Location = System::Drawing::Point(653, 27);
			this->label_rem->Name = L"label_rem";
			this->label_rem->Size = System::Drawing::Size(37, 13);
			this->label_rem->TabIndex = 49;
			this->label_rem->Text = L"remise";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 122);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(760, 327);
			this->dataGridView1->TabIndex = 50;
			// 
			// commande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label_rem);
			this->Controls->Add(this->textBox_rem);
			this->Controls->Add(this->numericUpDown_qua);
			this->Controls->Add(this->label_qua);
			this->Controls->Add(this->textBox_ref);
			this->Controls->Add(this->label_ref);
			this->Controls->Add(this->textBox_adr_lv);
			this->Controls->Add(this->textBox_adr_fc);
			this->Controls->Add(this->label_adr_liv);
			this->Controls->Add(this->label_adr_fc);
			this->Controls->Add(this->dateTimePicker_fc);
			this->Controls->Add(this->dateTimePicker_lv);
			this->Controls->Add(this->label_date_fc);
			this->Controls->Add(this->label_date_lv);
			this->Name = L"commande";
			this->Text = L"commande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_qua))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
