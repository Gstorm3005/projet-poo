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
	/// Description résumée de MyForm_client
	/// </summary>
	public ref class MyForm_client : public System::Windows::Forms::Form
	{
	public:
		MyForm_client(void)
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
		~MyForm_client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_prenom_c;
	protected:

	private: System::Windows::Forms::TextBox^ textBox_nom_c;

	protected:


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker__date_nc;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox_Creer;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label_nom_c;
	private: System::Windows::Forms::Label^ label_prenom_c;
	private: System::Windows::Forms::Label^ label_date_nc;
	private: System::Windows::Forms::Label^ label_date_pa;











	private: System::Windows::Forms::Label^ label_ID;






	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_ID;



	private: System::Windows::Forms::Button^ button_afficher;
	private: System::Windows::Forms::Button^ button_ajouter;
	private: System::Windows::Forms::Button^ button_supprimer;
	private: System::Windows::Forms::Button^ button_modifier;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_pra;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_client::typeid));
			this->textBox_prenom_c = (gcnew System::Windows::Forms::TextBox());
			this->textBox_nom_c = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker__date_nc = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Creer = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label_nom_c = (gcnew System::Windows::Forms::Label());
			this->label_prenom_c = (gcnew System::Windows::Forms::Label());
			this->label_date_nc = (gcnew System::Windows::Forms::Label());
			this->label_date_pa = (gcnew System::Windows::Forms::Label());
			this->label_ID = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDown_ID = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_afficher = (gcnew System::Windows::Forms::Button());
			this->button_ajouter = (gcnew System::Windows::Forms::Button());
			this->button_supprimer = (gcnew System::Windows::Forms::Button());
			this->button_modifier = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker_pra = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Creer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ID))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox_prenom_c
			// 
			this->textBox_prenom_c->Location = System::Drawing::Point(54, 320);
			this->textBox_prenom_c->Name = L"textBox_prenom_c";
			this->textBox_prenom_c->Size = System::Drawing::Size(200, 20);
			this->textBox_prenom_c->TabIndex = 0;
			// 
			// textBox_nom_c
			// 
			this->textBox_nom_c->Location = System::Drawing::Point(54, 281);
			this->textBox_nom_c->Name = L"textBox_nom_c";
			this->textBox_nom_c->Size = System::Drawing::Size(200, 20);
			this->textBox_nom_c->TabIndex = 3;
			// 
			// dateTimePicker__date_nc
			// 
			this->dateTimePicker__date_nc->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker__date_nc->Location = System::Drawing::Point(51, 369);
			this->dateTimePicker__date_nc->Name = L"dateTimePicker__date_nc";
			this->dateTimePicker__date_nc->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker__date_nc->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(54, 147);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox_Creer
			// 
			this->pictureBox_Creer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Creer.Image")));
			this->pictureBox_Creer->Location = System::Drawing::Point(184, 147);
			this->pictureBox_Creer->Name = L"pictureBox_Creer";
			this->pictureBox_Creer->Size = System::Drawing::Size(70, 70);
			this->pictureBox_Creer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_Creer->TabIndex = 7;
			this->pictureBox_Creer->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(54, 27);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(70, 70);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(184, 27);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(70, 70);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// label_nom_c
			// 
			this->label_nom_c->AutoSize = true;
			this->label_nom_c->BackColor = System::Drawing::Color::Transparent;
			this->label_nom_c->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_nom_c->Location = System::Drawing::Point(54, 265);
			this->label_nom_c->Name = L"label_nom_c";
			this->label_nom_c->Size = System::Drawing::Size(29, 13);
			this->label_nom_c->TabIndex = 10;
			this->label_nom_c->Text = L"Nom";
			// 
			// label_prenom_c
			// 
			this->label_prenom_c->AutoSize = true;
			this->label_prenom_c->BackColor = System::Drawing::Color::Transparent;
			this->label_prenom_c->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_prenom_c->Location = System::Drawing::Point(54, 304);
			this->label_prenom_c->Name = L"label_prenom_c";
			this->label_prenom_c->Size = System::Drawing::Size(43, 13);
			this->label_prenom_c->TabIndex = 11;
			this->label_prenom_c->Text = L"Prenom";
			// 
			// label_date_nc
			// 
			this->label_date_nc->AutoSize = true;
			this->label_date_nc->BackColor = System::Drawing::Color::Transparent;
			this->label_date_nc->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_date_nc->Location = System::Drawing::Point(51, 353);
			this->label_date_nc->Name = L"label_date_nc";
			this->label_date_nc->Size = System::Drawing::Size(96, 13);
			this->label_date_nc->TabIndex = 12;
			this->label_date_nc->Text = L"Date de naissance";
			// 
			// label_date_pa
			// 
			this->label_date_pa->AutoSize = true;
			this->label_date_pa->BackColor = System::Drawing::Color::Transparent;
			this->label_date_pa->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_date_pa->Location = System::Drawing::Point(51, 400);
			this->label_date_pa->Name = L"label_date_pa";
			this->label_date_pa->Size = System::Drawing::Size(97, 13);
			this->label_date_pa->TabIndex = 13;
			this->label_date_pa->Text = L"Date premier achat";
			// 
			// label_ID
			// 
			this->label_ID->AutoSize = true;
			this->label_ID->BackColor = System::Drawing::Color::Transparent;
			this->label_ID->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_ID->Location = System::Drawing::Point(54, 226);
			this->label_ID->Name = L"label_ID";
			this->label_ID->Size = System::Drawing::Size(18, 13);
			this->label_ID->TabIndex = 19;
			this->label_ID->Text = L"ID";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(333, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(439, 437);
			this->dataGridView1->TabIndex = 24;
			// 
			// numericUpDown_ID
			// 
			this->numericUpDown_ID->Location = System::Drawing::Point(54, 243);
			this->numericUpDown_ID->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_ID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown_ID->Name = L"numericUpDown_ID";
			this->numericUpDown_ID->Size = System::Drawing::Size(200, 20);
			this->numericUpDown_ID->TabIndex = 46;
			// 
			// button_afficher
			// 
			this->button_afficher->Location = System::Drawing::Point(54, 4);
			this->button_afficher->Name = L"button_afficher";
			this->button_afficher->Size = System::Drawing::Size(70, 23);
			this->button_afficher->TabIndex = 50;
			this->button_afficher->Text = L"afficher";
			this->button_afficher->UseVisualStyleBackColor = true;
			this->button_afficher->Click += gcnew System::EventHandler(this, &MyForm_client::button_afficher_Click);
			// 
			// button_ajouter
			// 
			this->button_ajouter->Location = System::Drawing::Point(184, 125);
			this->button_ajouter->Name = L"button_ajouter";
			this->button_ajouter->Size = System::Drawing::Size(70, 23);
			this->button_ajouter->TabIndex = 51;
			this->button_ajouter->Text = L"ajouter";
			this->button_ajouter->UseVisualStyleBackColor = true;
			this->button_ajouter->Click += gcnew System::EventHandler(this, &MyForm_client::button_ajouter_Click);
			// 
			// button_supprimer
			// 
			this->button_supprimer->Location = System::Drawing::Point(54, 125);
			this->button_supprimer->Name = L"button_supprimer";
			this->button_supprimer->Size = System::Drawing::Size(70, 23);
			this->button_supprimer->TabIndex = 52;
			this->button_supprimer->Text = L"supprimer";
			this->button_supprimer->UseVisualStyleBackColor = true;
			this->button_supprimer->Click += gcnew System::EventHandler(this, &MyForm_client::button_supprimer_Click);
			// 
			// button_modifier
			// 
			this->button_modifier->Location = System::Drawing::Point(184, 4);
			this->button_modifier->Name = L"button_modifier";
			this->button_modifier->Size = System::Drawing::Size(70, 23);
			this->button_modifier->TabIndex = 53;
			this->button_modifier->Text = L"modifier";
			this->button_modifier->UseVisualStyleBackColor = true;
			this->button_modifier->Click += gcnew System::EventHandler(this, &MyForm_client::button_modifier_Click);
			// 
			// dateTimePicker_pra
			// 
			this->dateTimePicker_pra->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker_pra->Location = System::Drawing::Point(51, 416);
			this->dateTimePicker_pra->Name = L"dateTimePicker_pra";
			this->dateTimePicker_pra->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker_pra->TabIndex = 57;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(260, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 58;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm_client::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(271, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 59;
			this->label1->Text = L"label1";
			// 
			// MyForm_client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker_pra);
			this->Controls->Add(this->button_modifier);
			this->Controls->Add(this->button_supprimer);
			this->Controls->Add(this->button_ajouter);
			this->Controls->Add(this->button_afficher);
			this->Controls->Add(this->numericUpDown_ID);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label_ID);
			this->Controls->Add(this->label_date_pa);
			this->Controls->Add(this->label_date_nc);
			this->Controls->Add(this->label_prenom_c);
			this->Controls->Add(this->label_nom_c);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox_Creer);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dateTimePicker__date_nc);
			this->Controls->Add(this->textBox_nom_c);
			this->Controls->Add(this->textBox_prenom_c);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm_client";
			this->Text = L"MyForm_client";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Creer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ID))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button_afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ afficher;
	afficher = gcnew DbCo;
	this->dataGridView1->DataSource = afficher->getRows("select* from client", "table");
	this->dataGridView1->DataMember = "table";
}
private: System::Void button_ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ ajouter;
	ajouter = gcnew DbCo;
	ajouter->actionRows("insert into client (Nom_client,Prenom_client,Date_de_naissance,Date_premier_achat) values ('" + this->textBox_nom_c->Text + "','" + this->textBox_prenom_c->Text + "','" + this->dateTimePicker__date_nc->Text + "','" + this->dateTimePicker_pra->Text + "')");
}
private: System::Void button_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ modifier;
	modifier = gcnew DbCo;
	modifier->actionRows("UPDATE client SET Nom_client = '" + this->textBox_nom_c->Text + "' , Prenom_client = '" + this->textBox_prenom_c->Text + "', Date_de_naissance = '" + this->dateTimePicker__date_nc->Text + "', Date_premier_achat = '" + this->dateTimePicker_pra->Text + "' WHERE  ID_client = " + this->numericUpDown_ID->Text + " ;");
}
private: System::Void button_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ suprimer;
	suprimer = gcnew DbCo;
	suprimer->actionRows("DELETE client WHERE ID_client = " + this->numericUpDown_ID->Text + ";");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ get;
	get = gcnew DbCo;
	this->label1->Text = System::Convert::ToString(get->Equals("select Nom_client from client where ID_client = 5;"));
}
};
}
