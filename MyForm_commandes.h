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
	/// Description résumée de MyForm_commandes
	/// </summary>
	public ref class MyForm_commandes : public System::Windows::Forms::Form
	{
	public:
		MyForm_commandes(void)
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
		~MyForm_commandes()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:







	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label_de;
	private: System::Windows::Forms::Label^ label_ref;


	private: System::Windows::Forms::Label^ label_dl;
	private: System::Windows::Forms::Label^ label_qa;
	private: System::Windows::Forms::Label^ label_IDc;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_de;




	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_dl;

	private: System::Windows::Forms::TextBox^ textBox_ref;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_qua;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_IDc;
	private: System::Windows::Forms::Button^ button_modifier;
	private: System::Windows::Forms::Button^ button_supprimer;
	private: System::Windows::Forms::Button^ button_ajouter;
	private: System::Windows::Forms::Button^ button_afficher;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox_Creer;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label_com;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_com;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_commandes::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_de = (gcnew System::Windows::Forms::Label());
			this->label_ref = (gcnew System::Windows::Forms::Label());
			this->label_dl = (gcnew System::Windows::Forms::Label());
			this->label_qa = (gcnew System::Windows::Forms::Label());
			this->label_IDc = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_de = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_dl = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox_ref = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown_qua = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_IDc = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_modifier = (gcnew System::Windows::Forms::Button());
			this->button_supprimer = (gcnew System::Windows::Forms::Button());
			this->button_ajouter = (gcnew System::Windows::Forms::Button());
			this->button_afficher = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Creer = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_com = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_com = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_qua))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_IDc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Creer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_com))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(263, 17);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(509, 432);
			this->dataGridView1->TabIndex = 45;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 27);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Gestion des commandes";
			// 
			// label_de
			// 
			this->label_de->AutoSize = true;
			this->label_de->BackColor = System::Drawing::Color::Transparent;
			this->label_de->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_de->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_de->ForeColor = System::Drawing::Color::White;
			this->label_de->Location = System::Drawing::Point(9, 58);
			this->label_de->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_de->Name = L"label_de";
			this->label_de->Size = System::Drawing::Size(77, 13);
			this->label_de->TabIndex = 50;
			this->label_de->Text = L"date emission :";
			// 
			// label_ref
			// 
			this->label_ref->AutoSize = true;
			this->label_ref->BackColor = System::Drawing::Color::Transparent;
			this->label_ref->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_ref->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_ref->ForeColor = System::Drawing::Color::White;
			this->label_ref->Location = System::Drawing::Point(9, 156);
			this->label_ref->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_ref->Name = L"label_ref";
			this->label_ref->Size = System::Drawing::Size(61, 13);
			this->label_ref->TabIndex = 51;
			this->label_ref->Text = L"referance : ";
			// 
			// label_dl
			// 
			this->label_dl->AutoSize = true;
			this->label_dl->BackColor = System::Drawing::Color::Transparent;
			this->label_dl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_dl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_dl->ForeColor = System::Drawing::Color::White;
			this->label_dl->Location = System::Drawing::Point(9, 107);
			this->label_dl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_dl->Name = L"label_dl";
			this->label_dl->Size = System::Drawing::Size(75, 13);
			this->label_dl->TabIndex = 52;
			this->label_dl->Text = L"date livraison :";
			// 
			// label_qa
			// 
			this->label_qa->AutoSize = true;
			this->label_qa->BackColor = System::Drawing::Color::Transparent;
			this->label_qa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_qa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_qa->ForeColor = System::Drawing::Color::White;
			this->label_qa->Location = System::Drawing::Point(153, 108);
			this->label_qa->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_qa->Name = L"label_qa";
			this->label_qa->Size = System::Drawing::Size(93, 13);
			this->label_qa->TabIndex = 53;
			this->label_qa->Text = L"quantité d\'article : ";
			// 
			// label_IDc
			// 
			this->label_IDc->AutoSize = true;
			this->label_IDc->BackColor = System::Drawing::Color::Transparent;
			this->label_IDc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_IDc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_IDc->ForeColor = System::Drawing::Color::White;
			this->label_IDc->Location = System::Drawing::Point(153, 152);
			this->label_IDc->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_IDc->Name = L"label_IDc";
			this->label_IDc->Size = System::Drawing::Size(58, 13);
			this->label_IDc->TabIndex = 54;
			this->label_IDc->Text = L"ID_client : ";
			// 
			// dateTimePicker_de
			// 
			this->dateTimePicker_de->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker_de->Location = System::Drawing::Point(12, 74);
			this->dateTimePicker_de->Name = L"dateTimePicker_de";
			this->dateTimePicker_de->Size = System::Drawing::Size(118, 20);
			this->dateTimePicker_de->TabIndex = 55;
			// 
			// dateTimePicker_dl
			// 
			this->dateTimePicker_dl->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker_dl->Location = System::Drawing::Point(12, 123);
			this->dateTimePicker_dl->Name = L"dateTimePicker_dl";
			this->dateTimePicker_dl->Size = System::Drawing::Size(118, 20);
			this->dateTimePicker_dl->TabIndex = 56;
			// 
			// textBox_ref
			// 
			this->textBox_ref->Location = System::Drawing::Point(12, 172);
			this->textBox_ref->Name = L"textBox_ref";
			this->textBox_ref->Size = System::Drawing::Size(118, 20);
			this->textBox_ref->TabIndex = 57;
			// 
			// numericUpDown_qua
			// 
			this->numericUpDown_qua->Location = System::Drawing::Point(156, 123);
			this->numericUpDown_qua->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_qua->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown_qua->Name = L"numericUpDown_qua";
			this->numericUpDown_qua->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_qua->TabIndex = 58;
			// 
			// numericUpDown_IDc
			// 
			this->numericUpDown_IDc->Location = System::Drawing::Point(156, 172);
			this->numericUpDown_IDc->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_IDc->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown_IDc->Name = L"numericUpDown_IDc";
			this->numericUpDown_IDc->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_IDc->TabIndex = 59;
			// 
			// button_modifier
			// 
			this->button_modifier->Location = System::Drawing::Point(166, 225);
			this->button_modifier->Name = L"button_modifier";
			this->button_modifier->Size = System::Drawing::Size(70, 23);
			this->button_modifier->TabIndex = 67;
			this->button_modifier->Text = L"modifier";
			this->button_modifier->UseVisualStyleBackColor = true;
			this->button_modifier->Click += gcnew System::EventHandler(this, &MyForm_commandes::button_modifier_Click);
			// 
			// button_supprimer
			// 
			this->button_supprimer->Location = System::Drawing::Point(36, 346);
			this->button_supprimer->Name = L"button_supprimer";
			this->button_supprimer->Size = System::Drawing::Size(70, 23);
			this->button_supprimer->TabIndex = 66;
			this->button_supprimer->Text = L"supprimer";
			this->button_supprimer->UseVisualStyleBackColor = true;
			this->button_supprimer->Click += gcnew System::EventHandler(this, &MyForm_commandes::button_supprimer_Click);
			// 
			// button_ajouter
			// 
			this->button_ajouter->Location = System::Drawing::Point(166, 346);
			this->button_ajouter->Name = L"button_ajouter";
			this->button_ajouter->Size = System::Drawing::Size(70, 23);
			this->button_ajouter->TabIndex = 65;
			this->button_ajouter->Text = L"ajouter";
			this->button_ajouter->UseVisualStyleBackColor = true;
			this->button_ajouter->Click += gcnew System::EventHandler(this, &MyForm_commandes::button_ajouter_Click);
			// 
			// button_afficher
			// 
			this->button_afficher->Location = System::Drawing::Point(36, 225);
			this->button_afficher->Name = L"button_afficher";
			this->button_afficher->Size = System::Drawing::Size(70, 23);
			this->button_afficher->TabIndex = 64;
			this->button_afficher->Text = L"afficher";
			this->button_afficher->UseVisualStyleBackColor = true;
			this->button_afficher->Click += gcnew System::EventHandler(this, &MyForm_commandes::button_afficher_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(166, 248);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(70, 70);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 63;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(36, 248);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(70, 70);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 62;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox_Creer
			// 
			this->pictureBox_Creer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Creer.Image")));
			this->pictureBox_Creer->Location = System::Drawing::Point(166, 368);
			this->pictureBox_Creer->Name = L"pictureBox_Creer";
			this->pictureBox_Creer->Size = System::Drawing::Size(70, 70);
			this->pictureBox_Creer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_Creer->TabIndex = 61;
			this->pictureBox_Creer->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 368);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 60;
			this->pictureBox1->TabStop = false;
			// 
			// label_com
			// 
			this->label_com->AutoSize = true;
			this->label_com->BackColor = System::Drawing::Color::Transparent;
			this->label_com->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_com->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_com->ForeColor = System::Drawing::Color::White;
			this->label_com->Location = System::Drawing::Point(153, 58);
			this->label_com->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_com->Name = L"label_com";
			this->label_com->Size = System::Drawing::Size(85, 13);
			this->label_com->TabIndex = 68;
			this->label_com->Text = L"ID_commande : ";
			// 
			// numericUpDown_com
			// 
			this->numericUpDown_com->Location = System::Drawing::Point(156, 73);
			this->numericUpDown_com->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_com->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown_com->Name = L"numericUpDown_com";
			this->numericUpDown_com->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_com->TabIndex = 69;
			// 
			// MyForm_commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->numericUpDown_com);
			this->Controls->Add(this->label_com);
			this->Controls->Add(this->button_modifier);
			this->Controls->Add(this->button_supprimer);
			this->Controls->Add(this->button_ajouter);
			this->Controls->Add(this->button_afficher);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox_Creer);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->numericUpDown_IDc);
			this->Controls->Add(this->numericUpDown_qua);
			this->Controls->Add(this->textBox_ref);
			this->Controls->Add(this->dateTimePicker_dl);
			this->Controls->Add(this->dateTimePicker_de);
			this->Controls->Add(this->label_IDc);
			this->Controls->Add(this->label_qa);
			this->Controls->Add(this->label_dl);
			this->Controls->Add(this->label_ref);
			this->Controls->Add(this->label_de);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm_commandes";
			this->Text = L"MyForm_commandes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_qua))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_IDc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Creer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_com))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button_afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ afficher;
	afficher = gcnew DbCo;
	this->dataGridView1->DataSource = afficher->getRows("select* from commande", "table");
	this->dataGridView1->DataMember = "table";
}
private: System::Void button_ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ ajouter;
	ajouter = gcnew DbCo;
	ajouter->actionRows("insert into commande (Date_emission,Date_livraison,Reference,Quantiter_article,ID_client) values ('" + this->dateTimePicker_de->Text + "','" + this->dateTimePicker_dl->Text + "','" + this->textBox_ref->Text + "','" + this->numericUpDown_qua->Text + "'," + this->numericUpDown_IDc->Text + ")");
	
}
private: System::Void button_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ modifier;
	modifier = gcnew DbCo;
	modifier->actionRows("UPDATE commande SET Date_emission = '" + this->dateTimePicker_de->Text + "' , Date_livraison = '" + this->dateTimePicker_dl->Text + "', Reference = '" + this->textBox_ref->Text + "', Quantiter_article = '" + this->numericUpDown_qua->Text + "', ID_client = " + this->numericUpDown_IDc->Text + " WHERE  ID_commande = " + this->numericUpDown_com->Text + " ;");
}
private: System::Void button_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ suprimer;
	suprimer = gcnew DbCo;
	suprimer->actionRows("DELETE commande WHERE ID_commande = " + this->numericUpDown_com->Text + ";");
}
};
}
