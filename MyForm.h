#pragma once
#include "MyForm_commandes.h"
#include "MyForm_client.h"
#include "MyForm_stock.h" 
#include "MyForm_personnel.h"
#include "MyForm_statistiques.h"
#include "commande.h"
#include "adresse.h"
#include "article.h"
namespace Projectpoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button_client;

	private: System::Windows::Forms::Button^ button_commande;
	private: System::Windows::Forms::Button^ button_stock;
	private: System::Windows::Forms::Button^ button_statistiques;



	private: System::Windows::Forms::Button^ button_personnel;
	private: System::Windows::Forms::Button^ button_adr;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;








	protected:

	protected:


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button_client = (gcnew System::Windows::Forms::Button());
			this->button_commande = (gcnew System::Windows::Forms::Button());
			this->button_stock = (gcnew System::Windows::Forms::Button());
			this->button_statistiques = (gcnew System::Windows::Forms::Button());
			this->button_personnel = (gcnew System::Windows::Forms::Button());
			this->button_adr = (gcnew System::Windows::Forms::Button());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_client
			// 
			this->button_client->Location = System::Drawing::Point(400, 180);
			this->button_client->Name = L"button_client";
			this->button_client->Size = System::Drawing::Size(144, 63);
			this->button_client->TabIndex = 3;
			this->button_client->Text = L"GESTION DES CLIENTS";
			this->button_client->UseVisualStyleBackColor = true;
			this->button_client->Click += gcnew System::EventHandler(this, &MyForm::button_client_Click);
			// 
			// button_commande
			// 
			this->button_commande->Location = System::Drawing::Point(400, 53);
			this->button_commande->Name = L"button_commande";
			this->button_commande->Size = System::Drawing::Size(144, 63);
			this->button_commande->TabIndex = 4;
			this->button_commande->Text = L"GESTION DES COMMANDES";
			this->button_commande->UseVisualStyleBackColor = true;
			this->button_commande->Click += gcnew System::EventHandler(this, &MyForm::button_commande_Click);
			// 
			// button_stock
			// 
			this->button_stock->Location = System::Drawing::Point(606, 53);
			this->button_stock->Name = L"button_stock";
			this->button_stock->Size = System::Drawing::Size(144, 63);
			this->button_stock->TabIndex = 5;
			this->button_stock->Text = L"GESTION DU STOCK";
			this->button_stock->UseVisualStyleBackColor = true;
			this->button_stock->Click += gcnew System::EventHandler(this, &MyForm::button_stock_Click);
			// 
			// button_statistiques
			// 
			this->button_statistiques->Location = System::Drawing::Point(606, 180);
			this->button_statistiques->Name = L"button_statistiques";
			this->button_statistiques->Size = System::Drawing::Size(144, 63);
			this->button_statistiques->TabIndex = 6;
			this->button_statistiques->Text = L"STATISTIQUES";
			this->button_statistiques->UseVisualStyleBackColor = true;
			this->button_statistiques->Click += gcnew System::EventHandler(this, &MyForm::button_statistiques_Click);
			// 
			// button_personnel
			// 
			this->button_personnel->Location = System::Drawing::Point(400, 318);
			this->button_personnel->Name = L"button_personnel";
			this->button_personnel->Size = System::Drawing::Size(144, 63);
			this->button_personnel->TabIndex = 7;
			this->button_personnel->Text = L"GESTION DU PERSONNEL";
			this->button_personnel->UseVisualStyleBackColor = true;
			this->button_personnel->Click += gcnew System::EventHandler(this, &MyForm::button_personnel_Click);
			// 
			// button_adr
			// 
			this->button_adr->Location = System::Drawing::Point(606, 318);
			this->button_adr->Name = L"button_adr";
			this->button_adr->Size = System::Drawing::Size(144, 63);
			this->button_adr->TabIndex = 8;
			this->button_adr->Text = L"ADRESSE";
			this->button_adr->UseVisualStyleBackColor = true;
			this->button_adr->Click += gcnew System::EventHandler(this, &MyForm::button_adr_Click);
			// 
			// button_close
			// 
			this->button_close->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_close->Location = System::Drawing::Point(12, 12);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(58, 57);
			this->button_close->TabIndex = 9;
			this->button_close->Text = L"X";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 72));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(27, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(305, 128);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Projet";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(53, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(252, 128);
			this->label2->TabIndex = 11;
			this->label2->Text = L"POO";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->button_adr);
			this->Controls->Add(this->button_personnel);
			this->Controls->Add(this->button_statistiques);
			this->Controls->Add(this->button_stock);
			this->Controls->Add(this->button_commande);
			this->Controls->Add(this->button_client);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	//BOUTON GESTION DES COMMANDES
	MyForm_commandes^ co = gcnew MyForm_commandes;
	this->Hide();
	Projectpoo::MyForm_commandes monFormulaire1;
	co->ShowDialog();
	this->Show();
}
private: System::Void button_client_Click(System::Object^ sender, System::EventArgs^ e) {
	//BOUTON GESTION DES CLIENTS
	MyForm_client^ c = gcnew MyForm_client;
	this->Hide();
	Projectpoo::MyForm_client monFormulaire1;
	c->ShowDialog();
	this->Show();
}
private: System::Void button_stock_Click(System::Object^ sender, System::EventArgs^ e) {
	//BOUTON GESTION DES STOCKS
	MyForm_stock^ c = gcnew MyForm_stock;
	this->Hide();
	Projectpoo::MyForm_stock monFormulaire1;
	c->ShowDialog();
	this->Show();
}
private: System::Void button_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	//BOUTON GESTION DES PERSONNEL
	MyForm_personnel^ c = gcnew MyForm_personnel;
	this->Hide();
	Projectpoo::MyForm_personnel monFormulaire1;
	c->ShowDialog();
	this->Show();
}
private: System::Void button_statistiques_Click(System::Object^ sender, System::EventArgs^ e) {
	//BOUTON GESTION DES STATISTIQUES
	MyForm_statistiques^ c = gcnew MyForm_statistiques;
	this->Hide();
	Projectpoo::MyForm_statistiques monFormulaire1;
	c->ShowDialog();
	this->Show();
}
private: System::Void button_adr_Click(System::Object^ sender, System::EventArgs^ e) {
	//BOUTON adresse
	adresse^ c = gcnew adresse;
	this->Hide();
	Projectpoo::adresse monFormulaire1;
	c->ShowDialog();
	this->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you want to exit?", "Exit",
		MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
}
};
}