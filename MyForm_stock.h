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
	/// Description résumée de MyForm_stock
	/// </summary>
	public ref class MyForm_stock : public System::Windows::Forms::Form
	{
	public:
		MyForm_stock(void)
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
		~MyForm_stock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_quantite;
	protected:


	protected:





	private: System::Windows::Forms::TextBox^ textBox_ref;
	private: System::Windows::Forms::TextBox^ textBox_IDar;









	private: System::Windows::Forms::Label^ label_ref;

	private: System::Windows::Forms::Label^ label_quan;
	private: System::Windows::Forms::Label^ label_IDar;















	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label_nat;















	private: System::Windows::Forms::Button^ button_modifier;
	private: System::Windows::Forms::Button^ button_supprimer;
	private: System::Windows::Forms::Button^ button_ajouter;
	private: System::Windows::Forms::Button^ button_afficher;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox_Creer;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label_ht;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_ht;
	private: System::Windows::Forms::ComboBox^ comboBox_nat;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_stock::typeid));
			this->numericUpDown_quantite = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox_ref = (gcnew System::Windows::Forms::TextBox());
			this->textBox_IDar = (gcnew System::Windows::Forms::TextBox());
			this->label_ref = (gcnew System::Windows::Forms::Label());
			this->label_quan = (gcnew System::Windows::Forms::Label());
			this->label_IDar = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label_nat = (gcnew System::Windows::Forms::Label());
			this->button_modifier = (gcnew System::Windows::Forms::Button());
			this->button_supprimer = (gcnew System::Windows::Forms::Button());
			this->button_ajouter = (gcnew System::Windows::Forms::Button());
			this->button_afficher = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Creer = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_ht = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_ht = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox_nat = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantite))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Creer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ht))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown_quantite
			// 
			this->numericUpDown_quantite->Location = System::Drawing::Point(108, 122);
			this->numericUpDown_quantite->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_quantite->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown_quantite->Name = L"numericUpDown_quantite";
			this->numericUpDown_quantite->Size = System::Drawing::Size(117, 20);
			this->numericUpDown_quantite->TabIndex = 44;
			// 
			// textBox_ref
			// 
			this->textBox_ref->Location = System::Drawing::Point(107, 54);
			this->textBox_ref->Margin = System::Windows::Forms::Padding(2);
			this->textBox_ref->Name = L"textBox_ref";
			this->textBox_ref->Size = System::Drawing::Size(118, 20);
			this->textBox_ref->TabIndex = 40;
			// 
			// textBox_IDar
			// 
			this->textBox_IDar->Location = System::Drawing::Point(107, 21);
			this->textBox_IDar->Margin = System::Windows::Forms::Padding(2);
			this->textBox_IDar->Name = L"textBox_IDar";
			this->textBox_IDar->Size = System::Drawing::Size(101, 20);
			this->textBox_IDar->TabIndex = 37;
			// 
			// label_ref
			// 
			this->label_ref->AutoSize = true;
			this->label_ref->BackColor = System::Drawing::Color::Transparent;
			this->label_ref->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_ref->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_ref->ForeColor = System::Drawing::Color::White;
			this->label_ref->Location = System::Drawing::Point(31, 57);
			this->label_ref->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_ref->Name = L"label_ref";
			this->label_ref->Size = System::Drawing::Size(66, 13);
			this->label_ref->TabIndex = 33;
			this->label_ref->Text = L"Référence : ";
			// 
			// label_quan
			// 
			this->label_quan->AutoSize = true;
			this->label_quan->BackColor = System::Drawing::Color::Transparent;
			this->label_quan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_quan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_quan->ForeColor = System::Drawing::Color::White;
			this->label_quan->Location = System::Drawing::Point(42, 124);
			this->label_quan->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_quan->Name = L"label_quan";
			this->label_quan->Size = System::Drawing::Size(56, 13);
			this->label_quan->TabIndex = 31;
			this->label_quan->Text = L"Quantité : ";
			// 
			// label_IDar
			// 
			this->label_IDar->AutoSize = true;
			this->label_IDar->BackColor = System::Drawing::Color::Transparent;
			this->label_IDar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_IDar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_IDar->ForeColor = System::Drawing::Color::White;
			this->label_IDar->Location = System::Drawing::Point(39, 24);
			this->label_IDar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_IDar->Name = L"label_IDar";
			this->label_IDar->Size = System::Drawing::Size(58, 13);
			this->label_IDar->TabIndex = 29;
			this->label_IDar->Text = L"ID article : ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(308, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(464, 441);
			this->dataGridView1->TabIndex = 58;
			// 
			// label_nat
			// 
			this->label_nat->AutoSize = true;
			this->label_nat->BackColor = System::Drawing::Color::Transparent;
			this->label_nat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_nat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_nat->ForeColor = System::Drawing::Color::White;
			this->label_nat->Location = System::Drawing::Point(17, 90);
			this->label_nat->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_nat->Name = L"label_nat";
			this->label_nat->Size = System::Drawing::Size(80, 13);
			this->label_nat->TabIndex = 32;
			this->label_nat->Text = L"nature article  : ";
			// 
			// button_modifier
			// 
			this->button_modifier->Location = System::Drawing::Point(189, 217);
			this->button_modifier->Name = L"button_modifier";
			this->button_modifier->Size = System::Drawing::Size(70, 23);
			this->button_modifier->TabIndex = 66;
			this->button_modifier->Text = L"modifier";
			this->button_modifier->UseVisualStyleBackColor = true;
			this->button_modifier->Click += gcnew System::EventHandler(this, &MyForm_stock::button_modifier_Click);
			// 
			// button_supprimer
			// 
			this->button_supprimer->Location = System::Drawing::Point(59, 338);
			this->button_supprimer->Name = L"button_supprimer";
			this->button_supprimer->Size = System::Drawing::Size(70, 23);
			this->button_supprimer->TabIndex = 65;
			this->button_supprimer->Text = L"supprimer";
			this->button_supprimer->UseVisualStyleBackColor = true;
			this->button_supprimer->Click += gcnew System::EventHandler(this, &MyForm_stock::button_supprimer_Click);
			// 
			// button_ajouter
			// 
			this->button_ajouter->Location = System::Drawing::Point(189, 338);
			this->button_ajouter->Name = L"button_ajouter";
			this->button_ajouter->Size = System::Drawing::Size(70, 23);
			this->button_ajouter->TabIndex = 64;
			this->button_ajouter->Text = L"ajouter";
			this->button_ajouter->UseVisualStyleBackColor = true;
			this->button_ajouter->Click += gcnew System::EventHandler(this, &MyForm_stock::button_ajouter_Click);
			// 
			// button_afficher
			// 
			this->button_afficher->Location = System::Drawing::Point(59, 217);
			this->button_afficher->Name = L"button_afficher";
			this->button_afficher->Size = System::Drawing::Size(70, 23);
			this->button_afficher->TabIndex = 63;
			this->button_afficher->Text = L"afficher";
			this->button_afficher->UseVisualStyleBackColor = true;
			this->button_afficher->Click += gcnew System::EventHandler(this, &MyForm_stock::button_afficher_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(189, 240);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(70, 70);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 62;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(59, 240);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(70, 70);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 61;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox_Creer
			// 
			this->pictureBox_Creer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Creer.Image")));
			this->pictureBox_Creer->Location = System::Drawing::Point(189, 360);
			this->pictureBox_Creer->Name = L"pictureBox_Creer";
			this->pictureBox_Creer->Size = System::Drawing::Size(70, 70);
			this->pictureBox_Creer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_Creer->TabIndex = 60;
			this->pictureBox_Creer->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(59, 360);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 59;
			this->pictureBox1->TabStop = false;
			// 
			// label_ht
			// 
			this->label_ht->AutoSize = true;
			this->label_ht->BackColor = System::Drawing::Color::Transparent;
			this->label_ht->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_ht->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label_ht->ForeColor = System::Drawing::Color::White;
			this->label_ht->Location = System::Drawing::Point(46, 161);
			this->label_ht->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_ht->Name = L"label_ht";
			this->label_ht->Size = System::Drawing::Size(48, 13);
			this->label_ht->TabIndex = 36;
			this->label_ht->Text = L"Prix HT :";
			// 
			// numericUpDown_ht
			// 
			this->numericUpDown_ht->Location = System::Drawing::Point(108, 154);
			this->numericUpDown_ht->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_ht->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown_ht->Name = L"numericUpDown_ht";
			this->numericUpDown_ht->Size = System::Drawing::Size(117, 20);
			this->numericUpDown_ht->TabIndex = 67;
			// 
			// comboBox_nat
			// 
			this->comboBox_nat->FormattingEnabled = true;
			this->comboBox_nat->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Test & Mesure", L"Cartes interfaces", L"Arduino",
					L"Raspberry pi", L"Control"
			});
			this->comboBox_nat->Location = System::Drawing::Point(107, 82);
			this->comboBox_nat->Name = L"comboBox_nat";
			this->comboBox_nat->Size = System::Drawing::Size(121, 21);
			this->comboBox_nat->TabIndex = 68;
			// 
			// MyForm_stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->comboBox_nat);
			this->Controls->Add(this->numericUpDown_ht);
			this->Controls->Add(this->button_modifier);
			this->Controls->Add(this->button_supprimer);
			this->Controls->Add(this->button_ajouter);
			this->Controls->Add(this->button_afficher);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox_Creer);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->numericUpDown_quantite);
			this->Controls->Add(this->textBox_ref);
			this->Controls->Add(this->textBox_IDar);
			this->Controls->Add(this->label_ht);
			this->Controls->Add(this->label_ref);
			this->Controls->Add(this->label_nat);
			this->Controls->Add(this->label_quan);
			this->Controls->Add(this->label_IDar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm_stock";
			this->Text = L"MyForm_stock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantite))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Creer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ht))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ afficher;
	afficher = gcnew DbCo;
	this->dataGridView1->DataSource = afficher->getRows("select* from article", "table");
	this->dataGridView1->DataMember = "table";
}
private: System::Void button_ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ ajouter;
	ajouter = gcnew DbCo;
	ajouter->actionRows("insert into article (References_article,Nature_article,Quantite__stock,Prix_HT) values ('" + this->textBox_ref->Text + "','" + this->comboBox_nat->Text + "','" + this->numericUpDown_quantite->Text + "'," + this->numericUpDown_ht->Text + ")");
}
private: System::Void button_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ modifier;
	modifier = gcnew DbCo;
	modifier->actionRows("UPDATE article SET References_article = '" + this->textBox_ref->Text + "' , Nature_article = '" + this->comboBox_nat->Text + "', Quantite__stock = '" + this->numericUpDown_quantite->Text + "', Prix_HT = " + this->numericUpDown_ht->Text + " WHERE  ID_arcticle = " + this->textBox_IDar->Text + " ;");
}
private: System::Void button_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	DbCo^ suprimer;
	suprimer = gcnew DbCo;
	suprimer->actionRows("DELETE article WHERE ID_arcticle = " + this->textBox_IDar->Text + ";");
}
};
}
