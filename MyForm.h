#pragma once

namespace LD4_LD5_Jonas_Kuprescenkovas_If160099 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  kontras3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  Kolis;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Egzas;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TextBox^  procentas1;



	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  procentas2;
	private: System::Windows::Forms::TextBox^  procentas4;


	private: System::Windows::Forms::TextBox^  procentas3;
	private: System::Windows::Forms::TextBox^  procentas5;
	private: System::Windows::Forms::TextBox^  Vidurkis;



	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  SafePoint;



	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  kontras1;
	private: System::Windows::Forms::TextBox^  kontras2;


	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::TextBox^  Kaupiamas;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  Galutinis;

	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListBox^  Pasirinktu_dalyku_istorija;










	protected:











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->kontras3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Kolis = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Egzas = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->procentas1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->procentas2 = (gcnew System::Windows::Forms::TextBox());
			this->procentas4 = (gcnew System::Windows::Forms::TextBox());
			this->procentas3 = (gcnew System::Windows::Forms::TextBox());
			this->procentas5 = (gcnew System::Windows::Forms::TextBox());
			this->Vidurkis = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SafePoint = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->kontras1 = (gcnew System::Windows::Forms::TextBox());
			this->kontras2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Kaupiamas = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Galutinis = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Pasirinktu_dalyku_istorija = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->Location = System::Drawing::Point(257, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Dalykas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gainsboro;
			this->label3->Location = System::Drawing::Point(16, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Kontrolinis nr1:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox3->Location = System::Drawing::Point(103, 189);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox4->Location = System::Drawing::Point(103, 215);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gainsboro;
			this->label4->Location = System::Drawing::Point(16, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Kontrolinis nr2:";
			// 
			// kontras3
			// 
			this->kontras3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->kontras3->Location = System::Drawing::Point(103, 241);
			this->kontras3->Name = L"kontras3";
			this->kontras3->Size = System::Drawing::Size(100, 20);
			this->kontras3->TabIndex = 9;
			this->kontras3->Text = L"0";
			this->kontras3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gainsboro;
			this->label5->Location = System::Drawing::Point(16, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Kontrolinis nr3:";
			// 
			// Kolis
			// 
			this->Kolis->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Kolis->Location = System::Drawing::Point(103, 267);
			this->Kolis->Name = L"Kolis";
			this->Kolis->Size = System::Drawing::Size(100, 20);
			this->Kolis->TabIndex = 11;
			this->Kolis->Text = L"0";
			this->Kolis->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gainsboro;
			this->label6->Location = System::Drawing::Point(16, 270);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Kolis:";
			// 
			// Egzas
			// 
			this->Egzas->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Egzas->Location = System::Drawing::Point(103, 293);
			this->Egzas->Name = L"Egzas";
			this->Egzas->Size = System::Drawing::Size(100, 20);
			this->Egzas->TabIndex = 13;
			this->Egzas->Text = L"0";
			this->Egzas->TextChanged += gcnew System::EventHandler(this, &MyForm::Egzas_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Gainsboro;
			this->label7->Location = System::Drawing::Point(16, 296);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Egzaminas:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(311, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Pasirinkti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// procentas1
			// 
			this->procentas1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->procentas1->Location = System::Drawing::Point(255, 189);
			this->procentas1->Name = L"procentas1";
			this->procentas1->Size = System::Drawing::Size(58, 20);
			this->procentas1->TabIndex = 18;
			this->procentas1->Text = L"0";
			this->procentas1->TextChanged += gcnew System::EventHandler(this, &MyForm::procentas1_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gainsboro;
			this->label8->Location = System::Drawing::Point(225, 192);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"%";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gainsboro;
			this->label9->Location = System::Drawing::Point(225, 218);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"%";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gainsboro;
			this->label10->Location = System::Drawing::Point(225, 267);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"%";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Gainsboro;
			this->label11->Location = System::Drawing::Point(225, 241);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"%";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Gainsboro;
			this->label12->Location = System::Drawing::Point(225, 293);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(15, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"%";
			// 
			// procentas2
			// 
			this->procentas2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->procentas2->Location = System::Drawing::Point(255, 215);
			this->procentas2->Name = L"procentas2";
			this->procentas2->Size = System::Drawing::Size(58, 20);
			this->procentas2->TabIndex = 24;
			this->procentas2->Text = L"0";
			this->procentas2->TextChanged += gcnew System::EventHandler(this, &MyForm::procentas2_TextChanged);
			// 
			// procentas4
			// 
			this->procentas4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->procentas4->Location = System::Drawing::Point(255, 267);
			this->procentas4->Name = L"procentas4";
			this->procentas4->Size = System::Drawing::Size(58, 20);
			this->procentas4->TabIndex = 26;
			this->procentas4->Text = L"0";
			this->procentas4->TextChanged += gcnew System::EventHandler(this, &MyForm::procentas4_TextChanged);
			// 
			// procentas3
			// 
			this->procentas3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->procentas3->Location = System::Drawing::Point(255, 241);
			this->procentas3->Name = L"procentas3";
			this->procentas3->Size = System::Drawing::Size(58, 20);
			this->procentas3->TabIndex = 25;
			this->procentas3->Text = L"0";
			this->procentas3->TextChanged += gcnew System::EventHandler(this, &MyForm::procentas3_TextChanged);
			// 
			// procentas5
			// 
			this->procentas5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->procentas5->Location = System::Drawing::Point(255, 293);
			this->procentas5->Name = L"procentas5";
			this->procentas5->Size = System::Drawing::Size(58, 20);
			this->procentas5->TabIndex = 27;
			this->procentas5->Text = L"0";
			this->procentas5->TextChanged += gcnew System::EventHandler(this, &MyForm::procentas5_TextChanged);
			// 
			// Vidurkis
			// 
			this->Vidurkis->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Vidurkis->Location = System::Drawing::Point(194, 339);
			this->Vidurkis->Name = L"Vidurkis";
			this->Vidurkis->ReadOnly = true;
			this->Vidurkis->Size = System::Drawing::Size(100, 20);
			this->Vidurkis->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Gainsboro;
			this->label13->Location = System::Drawing::Point(16, 342);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Vidurkis:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(809, 24);
			this->menuStrip1->TabIndex = 30;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// SafePoint
			// 
			this->SafePoint->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SafePoint->Location = System::Drawing::Point(194, 365);
			this->SafePoint->Name = L"SafePoint";
			this->SafePoint->ReadOnly = true;
			this->SafePoint->Size = System::Drawing::Size(100, 20);
			this->SafePoint->TabIndex = 33;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Gainsboro;
			this->label16->Location = System::Drawing::Point(16, 368);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(175, 13);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Kiek reikia gauti kad nebutu skolos:";
			// 
			// kontras1
			// 
			this->kontras1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->kontras1->Location = System::Drawing::Point(103, 189);
			this->kontras1->Name = L"kontras1";
			this->kontras1->Size = System::Drawing::Size(100, 20);
			this->kontras1->TabIndex = 5;
			this->kontras1->Text = L"0";
			this->kontras1->TextChanged += gcnew System::EventHandler(this, &MyForm::kontras1_TextChanged);
			// 
			// kontras2
			// 
			this->kontras2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->kontras2->Location = System::Drawing::Point(103, 215);
			this->kontras2->Name = L"kontras2";
			this->kontras2->Size = System::Drawing::Size(100, 20);
			this->kontras2->TabIndex = 7;
			this->kontras2->Text = L"0";
			this->kontras2->TextChanged += gcnew System::EventHandler(this, &MyForm::kontras2_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->checkBox1->Location = System::Drawing::Point(311, 341);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(71, 17);
			this->checkBox1->TabIndex = 35;
			this->checkBox1->Text = L"Nerodyti\?";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->checkBox2->Location = System::Drawing::Point(311, 368);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(71, 17);
			this->checkBox2->TabIndex = 36;
			this->checkBox2->Text = L"Nerodyti\?";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(388, 337);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 37;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Kaupiamas
			// 
			this->Kaupiamas->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Kaupiamas->Location = System::Drawing::Point(194, 391);
			this->Kaupiamas->Name = L"Kaupiamas";
			this->Kaupiamas->ReadOnly = true;
			this->Kaupiamas->Size = System::Drawing::Size(100, 20);
			this->Kaupiamas->TabIndex = 40;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Gainsboro;
			this->label14->Location = System::Drawing::Point(16, 398);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 13);
			this->label14->TabIndex = 41;
			this->label14->Text = L"Kaupiamasis balas:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Gainsboro;
			this->label15->Location = System::Drawing::Point(16, 424);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(78, 13);
			this->label15->TabIndex = 43;
			this->label15->Text = L"Galutinis balas:";
			// 
			// Galutinis
			// 
			this->Galutinis->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Galutinis->Location = System::Drawing::Point(194, 417);
			this->Galutinis->Name = L"Galutinis";
			this->Galutinis->ReadOnly = true;
			this->Galutinis->Size = System::Drawing::Size(100, 20);
			this->Galutinis->TabIndex = 42;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->checkBox3->Location = System::Drawing::Point(311, 420);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(71, 17);
			this->checkBox3->TabIndex = 45;
			this->checkBox3->Text = L"Nerodyti\?";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->checkBox4->Location = System::Drawing::Point(311, 393);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(71, 17);
			this->checkBox4->TabIndex = 44;
			this->checkBox4->Text = L"Nerodyti\?";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(388, 362);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 46;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(388, 387);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 47;
			this->button4->Text = L"OK";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(388, 414);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 48;
			this->button5->Text = L"OK";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(494, 337);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 23);
			this->button6->TabIndex = 49;
			this->button6->Text = L"Saugoti";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->richTextBox1->Location = System::Drawing::Point(388, 189);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(409, 124);
			this->richTextBox1->TabIndex = 50;
			this->richTextBox1->Text = L"Vardas: \nDalykas: \nVidurkis: \nKaupiamas balas: \nGalutinis Balas: \nKiek reikia gau"
				L"ti is egzamino, kad nebutu skolos:  ";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(597, 337);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 23);
			this->button7->TabIndex = 52;
			this->button7->Text = L"Valyti";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(700, 337);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 23);
			this->button8->TabIndex = 53;
			this->button8->Text = L"Generuoti";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(311, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(172, 21);
			this->comboBox1->TabIndex = 54;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// Pasirinktu_dalyku_istorija
			// 
			this->Pasirinktu_dalyku_istorija->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Pasirinktu_dalyku_istorija->FormattingEnabled = true;
			this->Pasirinktu_dalyku_istorija->Location = System::Drawing::Point(255, 88);
			this->Pasirinktu_dalyku_istorija->Name = L"Pasirinktu_dalyku_istorija";
			this->Pasirinktu_dalyku_istorija->Size = System::Drawing::Size(269, 95);
			this->Pasirinktu_dalyku_istorija->TabIndex = 55;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(809, 447);
			this->Controls->Add(this->Pasirinktu_dalyku_istorija);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->Galutinis);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Kaupiamas);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->SafePoint);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Vidurkis);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->procentas5);
			this->Controls->Add(this->procentas4);
			this->Controls->Add(this->procentas3);
			this->Controls->Add(this->procentas2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->procentas1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Egzas);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Kolis);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->kontras3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->kontras2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->kontras1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Studento Studiju Rezultatu Tvarkykle";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		//combobox pasirinkimu sarasas
		comboBox1->Items->Add("Anglu.k");
		comboBox1->Items->Add("Rusu.k");
		comboBox1->Items->Add("Japonu.k");
		comboBox1->Items->Add("Matematika");
		comboBox1->Items->Add("Programavimas");
		comboBox1->Items->Add("Matematine logika");
		comboBox1->Items->Add("Kompiuterine architektura");
	}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
{
	if (MessageBox::Show("Close the application?",
		"Converter Going Down", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
		
	}
	else
	{
		e->Cancel = true;
	}
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		// konvertuoja teksta i double reiksme ir nustato ar skaicius < 0.
		if (Double::Parse(kontras3->Text) < 0 || Double::Parse(kontras3->Text) > 10)
		{
			//Jei skaicius < 0 jis zymimas raudona spalva.
			kontras3->ForeColor = Color::Red;
			button2->Enabled = false;//Isjungiami mygtukai
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;

			MessageBox::Show("Galima naudoti tik skaicius kurie yra didesni nei 0, bet nedidesni nei 10 !", "Error",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			//Ekrane rodomas error messagebox
		}
		else
		{
			// Jei skaicius > 0 jis zymimas juoda spalva
			kontras3->ForeColor = Color::Black;
			button2->Enabled = true;//Ijungia mygtukus
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
		}
	}
	catch (Exception^)
	{
		// Jei yra error tekstas zymimas naudojant system colors.
		kontras3->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		// konvertuoja teksta i double reiksme ir nustato ar skaicius < 0.
		if (Double::Parse(Kolis->Text) < 0 || Double::Parse(Kolis->Text) > 10)
		{
			//Jei skaicius < 0 jis zymimas raudona spalva.
			Kolis->ForeColor = Color::Red;
			button2->Enabled = false;//Isjungiami mygtukai
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;

			MessageBox::Show("Galima naudoti tik skaicius kurie yra didesni nei 0, bet nedidesni nei 10 !", "Error",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			//Ekrane rodomas error messagebox
		}
		else
		{
			// Jei skaicius > 0 jis zymimas juoda spalva
			Kolis->ForeColor = Color::Black;
			button2->Enabled = true;//Ijungia mygtukus
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
		}
	}
	catch (Exception^)
	{
		// Jei yra error tekstas zymimas naudojant system colors.
		Kolis->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	comboBox1->Items->Add(comboBox1->Text); 
	Pasirinktu_dalyku_istorija->Items->Add(comboBox1->Text);
}
		 //deklaruojamos funkcijos
		 float vidurkis();
		 float kaupiamas();
		 float galutinis();
		 int Kiek_gauti_kad_nebutu_skolos();

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	//iskvieciama funkcija is Myform.cpp
	//po skaiciavimu atsakymas grazinamas, konvertuojamas ir isvedamas i textbox lauka
	vidurkis();
	String ^ output = Convert::ToString(vidurkis());
	Vidurkis->Text = output;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{//iskvieciama funkcija is Myform.cpp
	//po skaiciavimu atsakymas grazinamas, konvertuojamas ir isvedamas i textbox lauka
	kaupiamas();
	String ^ output = Convert::ToString(kaupiamas());
	Kaupiamas->Text = output;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
{//iskvieciama funkcija is Myform.cpp
	//po skaiciavimu atsakymas grazinamas, konvertuojamas ir isvedamas i textbox lauka
	galutinis();
	String ^ output = Convert::ToString(galutinis());
	Galutinis->Text = output;
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox1->Checked)
	{
		Vidurkis->UseSystemPasswordChar = true;
		
	}
	else
	{
		Vidurkis->UseSystemPasswordChar = false;
		
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (checkBox2->Checked)
	{
		SafePoint->UseSystemPasswordChar = true;
		
	}
	else
	{
		SafePoint->UseSystemPasswordChar = false;
		
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (checkBox4->Checked)
	{
		Kaupiamas->UseSystemPasswordChar = true;
		
	}
	else
	{
		Kaupiamas->UseSystemPasswordChar = false;
		
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (checkBox3->Checked)
	{
		Galutinis->UseSystemPasswordChar = true;
	
	}
	else
	{
		Galutinis->UseSystemPasswordChar = false;
		
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	//iskvieciama funkcija is Myform.cpp
	//po skaiciavimu atsakymas grazinamas, konvertuojamas ir isvedamas i textbox lauka
	Kiek_gauti_kad_nebutu_skolos();
	String ^ output = Convert::ToString(Kiek_gauti_kad_nebutu_skolos());
	SafePoint->Text = output;
}
private: System::Void kontras1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	try
	{
		// konvertuoja teksta i double reiksme ir nustato ar skaicius < 0.
		if (Double::Parse(kontras1->Text) < 0 || Double::Parse(kontras1->Text) > 10)
		{
			//Jei skaicius < 0 jis zymimas raudona spalva.
			kontras1->ForeColor = Color::Red;
			button2->Enabled = false;//Isjungiami mygtukai
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;

			MessageBox::Show("Galima naudoti tik skaicius kurie yra didesni nei 0, bet nedidesni nei 10 !", "Error",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			//Ekrane rodomas error messagebox
		}
		else
		{
			// Jei skaicius > 0 jis zymimas juoda spalva
			kontras1->ForeColor = Color::Black;
			button2->Enabled = true;//Ijungia mygtukus
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
		}
	}
	catch (Exception^)
	{
		// Jei yra error tekstas zymimas naudojant system colors.
		kontras1->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void kontras2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	try
	{
		// konvertuoja teksta i double reiksme ir nustato ar skaicius < 0.
		if (Double::Parse(kontras2->Text) < 0 || Double::Parse(kontras2->Text) > 10)
		{
			//Jei skaicius < 0 jis zymimas raudona spalva.
			kontras2->ForeColor = Color::Red;
			button2->Enabled = false;//Isjungiami mygtukai
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;

			MessageBox::Show("Galima naudoti tik skaicius kurie yra didesni nei 0, bet nedidesni nei 10 !", "Error",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			//Ekrane rodomas error messagebox
		}
		else
		{
			// Jei skaicius > 0 jis zymimas juoda spalva
			kontras2->ForeColor = Color::Black;
			button2->Enabled = true;//Ijungia mygtukus
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
		}
	}
	catch (Exception^)
	{
		// Jei yra error tekstas zymimas naudojant system colors.
		kontras2->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void Egzas_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	try
	{
		// konvertuoja teksta i double reiksme ir nustato ar skaicius < 0.
		if (Double::Parse(Egzas->Text) < 0 || Double::Parse(Egzas->Text) > 10)
		{
			//Jei skaicius < 0 jis zymimas raudona spalva.
			Egzas->ForeColor = Color::Red;
			button2->Enabled = false;//Isjungiami mygtukai
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;

			MessageBox::Show("Galima naudoti tik skaicius kurie yra didesni nei 0, bet nedidesni nei 10 !", "Error",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			//Ekrane rodomas error messagebox
		}
		else
		{
			// Jei skaicius > 0 jis zymimas juoda spalva
			Egzas->ForeColor = Color::Black;
			button2->Enabled = true;//Ijungia mygtukus
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
		}
	}
	catch (Exception^)
	{
		// Jei yra error tekstas zymimas naudojant system colors.
		Egzas->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void procentas1_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		if (Double::Parse(procentas1->Text) < 0)
		{
			//Jei skaicius < 0 jis zymimas raudona spalva.
			procentas1->ForeColor = Color::Red;
			button2->Enabled = false;//Isjungiami mygtukai
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;

			MessageBox::Show("Procentai negali buti < 0 !", "Error",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			//Ekrane rodomas error messagebox
		}
		else
		{
			// Jei skaicius > 0 jis zymimas juoda spalva
			procentas1->ForeColor = Color::Black;
			button2->Enabled = true;//Ijungia mygtukus
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
		}
	}
	catch (Exception^)
	{
		procentas1->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ my;
	saveFileDialog1->InitialDirectory = "d:\\";
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->FileName = L"";
	saveFileDialog1->RestoreDirectory = true;
	saveFileDialog1->ShowDialog();
	my = saveFileDialog1->FileName;
	if (my != L"")
		richTextBox1->SaveFile(my);
	//duomenu saugojimas i faila
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	
}
private: System::Void procentas2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	try
	{
		if (Double::Parse(procentas2->Text) < 0)
		{
			procentas2->ForeColor=Color::Red;

			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;

			MessageBox::Show("Procentai negali buti < 0 !","Error",MessageBoxButtons::OKCancel,MessageBoxIcon::Error);

		}
		else
		{
			procentas2->ForeColor = Color::Black;

			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
		}
	}
	catch (Exception^)
	{
		procentas2->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void procentas3_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		if (Double::Parse(procentas3->Text) < 0)
		{
			//tikslinama kad procentine verte nebutu mazesne nei 0
			procentas3->ForeColor = Color::Red; //keiciama texto spalva

			//isjungiami mtgtukai
			button1-> Enabled = false;
			button2->Enabled = false;
			button3-> Enabled = false;
			button4->Enabled = false;

			MessageBox::Show("Procentai negali buti < 0 !","Error",MessageBoxButtons::OKCancel,MessageBoxIcon::Error);
		}
		else
		{
			procentas3->ForeColor = Color::Black;

			//ijungiami mtgtukai
			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
		}
	}
	catch (Exception^)
	{
		procentas3->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void procentas4_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	try
	{//tikslinama kad procentine verte nebutu mazesne nei 0
		if (Double::Parse(procentas4->Text) < 0)
		{
			procentas4->ForeColor = Color::Red;//keiciama texto spalva
											   //isjungiami mtgtukai
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;

			MessageBox::Show("Procentai negali buti < 0 !", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		}
		else
		{
			procentas4->ForeColor = Color::Black;

			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
		}
	}
	catch (Exception^)
	{
		procentas4->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void procentas5_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	try
	{
		if (Double::Parse(procentas5->Text) < 0)
		{
			procentas5->ForeColor = Color::Red;

			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;

			MessageBox::Show("Procentai negali buti < 0 !", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		}
		else
		{
			procentas5->ForeColor = Color::Black;

			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
		}
	}
	catch (Exception^)
	{
		procentas5->ForeColor = SystemColors::ControlText;
	}
}
private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
{
//	richTextBox1->Text = richTextBox1->Text->Remove(richTextBox1->SelectionStart, richTextBox1->SelectionLength);
	richTextBox1->Text ="" ;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ my;
	openFileDialog1->InitialDirectory = "d:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->FileName = L"";
	openFileDialog1->RestoreDirectory = true;
	openFileDialog1->ShowDialog();
	my = openFileDialog1->FileName;
	if (my != L"")
		richTextBox1->LoadFile(my);
	// .txt failo uzkrovimas(load) i richtextbox

}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	
}
};
}
