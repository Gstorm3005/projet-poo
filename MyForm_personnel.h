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
	/// Description résumée de MyForm_personnel
	/// </summary>
	public ref class MyForm_personnel : public System::Windows::Forms::Form
	{
	public:
		MyForm_personnel(void)
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
		~MyForm_personnel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label_adresse;



	private: System::Windows::Forms::Label^ label_ID;





	private: System::Windows::Forms::Label^ label_prenom_c;
	private: System::Windows::Forms::Label^ label_nom_c;
	private: System::Windows::Forms::TextBox^ textBox_nom_p;
	private: System::Windows::Forms::TextBox^ textBox_prenom_p;






	private: System::Windows::Forms::Label^ label_date_em;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker__date_em;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_ID;
	private: System::Windows::Forms::Button^ button_modifier;
	private: System::Windows::Forms::Button^ button_supprimer;
	private: System::Windows::Forms::Button^ button_ajouter;
	private: System::Windows::Forms::Button^ button_afficher;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox_Creer;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_ID_adr;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_personnel::typeid));
			this->label_adresse = (gcnew System::Windows::Forms::Label());
			this->label_ID = (gcnew System::Windows::Forms::Label());
			this->label_prenom_c = (gcnew System::Windows::Forms::Label());
			this->label_nom_c = (gcnew System::Windows::Forms::Label());
			this->textBox_nom_p = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prenom_p = (gcnew System::Windows::Forms::TextBox());
			this->label_date_em = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker__date_em = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDown_ID = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_modifier = (gcnew System::Windows::Forms::Button());
			this->button_supprimer = (gcnew System::Windows::Forms::Button());
			this->button_ajouter = (gcnew System::Windows::Forms::Button());
			this->button_afficher = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Creer = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown_ID_adr = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Creer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ID_adr))->BeginInit();
			this->SuspendLayout();
			// 
			// label_adresse
			// 
			this->label_adresse->AutoSize = true;
			this->label_adresse->BackColor = System::Drawing::Color::Transparent;
			this->label_adresse->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_adresse->Location = System::Drawing::Point(55, 347);
			this->label_adresse->Name = L"label_adresse";
			this->label_adresse->Size = System::Drawing::Size(58, 13);
			this->label_adresse->TabIndex = 40;
			this->label_adresse->Text = L"ID adresse";
			// 
			// label_ID
			// 
			this->label_ID->AutoSize = true;
			this->label_ID->BackColor = System::Drawing::Color::Transparent;
			this->label_ID->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_ID->Location = System::Drawing::Point(55, 227);
			this->label_ID->Name = L"label_ID";
			this->label_ID->Size = System::Drawing::Size(18, 13);
			this->label_ID->TabIndex = 37;
			this->label_ID->Text = L"ID";
			// 
			// label_prenom_c
			// 
			this->label_prenom_c->AutoSize = true;
			this->label_prenom_c->BackColor = System::Drawing::Color::Transparent;
			this->label_prenom_c->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_prenom_c->Location = System::Drawing::Point(55, 305);
			this->label_prenom_c->Name = L"label_prenom_c";
			this->label_prenom_c->Size = System::Drawing::Size(43, 13);
			this->label_prenom_c->TabIndex = 31;
			this->label_prenom_c->Text = L"Prenom";
			// 
			// label_nom_c
			// 
			this->label_nom_c->AutoSize = true;
			this->label_nom_c->BackColor = System::Drawing::Color::Transparent;
			this->label_nom_c->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_nom_c->Location = System::Drawing::Point(55, 266);
			this->label_nom_c->Name = L"label_nom_c";
			this->label_nom_c->Size = System::Drawing::Size(29, 13);
			this->label_nom_c->TabIndex = 30;
			this->label_nom_c->Text = L"Nom";
			// 
			// textBox_nom_p
			// 
			this->textBox_nom_p->Location = System::Drawing::Point(55, 282);
			this->textBox_nom_p->Name = L"textBox_nom_p";
			this->textBox_nom_p->Size = System::Drawing::Size(200, 20);
			this->textBox_nom_p->TabIndex = 25;
			// 
			// textBox_prenom_p
			// 
			this->textBox_prenom_p->Location = System::Drawing::Point(55, 321);
			this->textBox_prenom_p->Name = L"textBox_prenom_p";
			this->textBox_prenom_p->Size = System::Drawing::Size(200, 20);
			this->textBox_prenom_p->TabIndex = 24;
			// 
			// label_date_em
			// 
			this->label_date_em->AutoSize = true;
			this->label_date_em->BackColor = System::Drawing::Color::Transparent;
			this->label_date_em->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_date_em->Location = System::Drawing::Point(52, 395);
			this->label_date_em->Name = L"label_date_em";
			this->label_date_em->Size = System::Drawing::Size(91, 13);
			this->label_date_em->TabIndex = 43;
			this->label_date_em->Text = L"Date d\'embauche";
			// 
			// dateTimePicker__date_em
			// 
			this->dateTimePicker__date_em->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker__date_em->Location = System::Drawing::Point(55, 411);
			this->dateTimePicker__date_em->Name = L"dateTimePicker__date_em";
			this->dateTimePicker__date_em->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker__date_em->TabIndex = 42;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(297, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(475, 437);
			this->dataGridView1->TabIndex = 44;
			// 
			// numericUpDown_ID
			// 
			this->numericUpDown_ID->Location = System::Drawing::Point(55, 244);
			this->numericUpDown_ID->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_ID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown_ID->Name = L"numericUpDown_ID";
			this->numericUpDown_ID->Size = System::Drawing::Size(200, 20);
			this->numericUpDown_ID->TabIndex = 45;
			// 
			// button_modifier
			// 
			this->button_modifier->Location = System::Drawing::Point(185, 6);
			this->button_modifier->Name = L"button_modifier";
			this->button_modifier->Size = System::Drawing::Size(70, 23);
			this->button_modifier->TabIndex = 61;
			this->button_modifier->Text = L"modifier";
			this->button_modifier->UseVisualStyleBackColor = true;
			this->button_modifier->Click += gcnew System::EventHandler(this, &MyForm_personnel::button_modifier_Click);
			// 
			// button_supprimer
			// 
			this->button_supprimer->Location = System::Drawing::Point(55, 127);
			this->button_supprimer->Name = L"button_supprimer";
			this->button_supprimer->Size = System::Drawing::Size(70, 23);
			this->button_supprimer->TabIndex = 60;
			this->button_supprimer->Text = L"supprimer";
			this->button_supprimer->UseVisualStyleBackColor = true;
			this->button_supprimer->Click += gcnew System::EventHandler(this, &MyForm_personnel::button_supprimer_Click);
			// 
			// button_ajouter
			// 
			this->button_ajouter->Location = System::Drawing::Point(185, 127);
			this->button_ajouter->Name = L"button_ajouter";
			this->button_ajouter->Size = System::Drawing::Size(70, 23);
			this->button_ajouter->TabIndex = 59;
			this->button_ajouter->Text = L"ajouter";
			this->button_ajouter->UseVisualStyleBackColor = true;
			this->button_ajouter->Click += gcnew System::EventHandler(this, &MyForm_personnel::button_ajouter_Click);
			// 
			// button_afficher
			// 
			this->button_afficher->Location = System::Drawing::Point(55, 6);
			this->button_afficher->Name = L"button_afficher";
			this->button_afficher->Size = System::Drawing::Size(70, 23);
			this->button_afficher->TabIndex = 58;
			this->button_afficher->Text = L"afficher";
			this->button_afficher->UseVisualStyleBackColor = true;
			this->button_afficher->Click += gcnew System::EventHandler(this, &MyForm_personnel::button_afficher_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(185, 29);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(70, 70);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 57;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(55, 29);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(70, 70);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 56;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox_Creer
			// 
			this->pictureBox_Creer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Creer.Image")));
			this->pictureBox_Creer->Location = System::Drawing::Point(185, 149);
			this->pictureBox_Creer->Name = L"pictureBox_Creer";
			this->pictureBox_Creer->Size = System::Drawing::Size(70, 70);
			this->pictureBox_Creer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_Creer->TabIndex = 55;
			this->pictureBox_Creer->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(55, 149);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// numericUpDown_ID_adr
			// 
			this->numericUpDown_ID_adr->Location = System::Drawing::Point(55, 362);
			this->numericUpDown_ID_adr->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_ID_adr->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown_ID_adr->Name = L"numericUpDown_ID_adr";
			this->numericUpDown_ID_adr->Size = System::Drawing::Size(200, 20);
			this->numericUpDown_ID_adr->TabIndex = 62;
			// 
			// MyForm_personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->numericUpDown_ID_adr);
			this->Controls->Add(this->button_modifier);
			this->Controls->Add(this->button_supprimer);
			this->Controls->Add(this->button_ajouter);
			this->Controls->Add(this->button_afficher);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox_Creer);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->numericUpDown_ID);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label_date_em);
			this->Controls->Add(this->dateTimePicker__date_em);
			this->Controls->Add(this->label_adresse);
			this->Controls->Add(this->label_ID);
			this->Controls->Add(this->label_prenom_c);
			this->Controls->Add(this->label_nom_c);
			this->Controls->Add(this->textBox_nom_p);
			this->Controls->Add(this->textBox_prenom_p);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm_personnel";
			this->Text = L"MyForm_personnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Creer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ID_adr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ afficher;
	afficher = gcnew DbCo;
	this->dataGridView1->DataSource = afficher->getRows("select* from personnel", "table");
	this->dataGridView1->DataMember = "table";
}
private: System::Void button_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ modifier;
	modifier = gcnew DbCo;
	
	modifier->actionRows("UPDATE personnel SET Nom_personnel = '" + this->textBox_nom_p->Text + "' , Prenom_personnel = '" + this->textBox_prenom_p->Text + "', Date_embauche = '" + this->dateTimePicker__date_em->Text + "', ID_adresse = " + this->numericUpDown_ID_adr->Text + " WHERE  ID_personnel = " + this->numericUpDown_ID->Text + " ;");
}
private: System::Void button_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ suprimer;
	suprimer = gcnew DbCo;
	suprimer->actionRows("DELETE personnel WHERE ID_personnel = " + this->numericUpDown_ID->Text + ";");

}
private: System::Void button_ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ ajouter;
	ajouter = gcnew DbCo;
	ajouter->actionRows("insert into personnel (Nom_personnel,Prenom_personnel,Date_embauche,ID_adresse) values ('" + this->textBox_nom_p->Text + "','" + this->textBox_prenom_p->Text + "','" + this->dateTimePicker__date_em->Text + "'," + this->numericUpDown_ID_adr->Text + ")");
}
};
}
