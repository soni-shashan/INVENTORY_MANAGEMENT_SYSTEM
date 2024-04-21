<<<<<<< HEAD
#pragma once
#include "libxl/libxl.h"
#include"excel.h"
#include"delete_conform.h"
#include<thread>
#include<chrono>
#include"update.h"
using namespace libxl;
namespace INVENTORYMANAGEMENTSYSTEM {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	public:
		   INVENTORYMANAGEMENTSYSTEM::excel^ Excel = gcnew INVENTORYMANAGEMENTSYSTEM::excel("INVENTORY.xlsx");
		   const char* _filename = "INVENTORY.xlsx";
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1758, 945);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1750, 912);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"ADD PRODUCT";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Main::tabPage1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(65, 637);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 24);
			this->label5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 20;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei Light", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(69, 523);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 86);
			this->button1->TabIndex = 8;
			this->button1->Text = L"ADD PRODUCT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(69, 435);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(156, 26);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(65, 397);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"PRODUCT QUANTITY";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(69, 312);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 26);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"PRODUCT PRICE";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(69, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 26);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PRODUCT ID";
			this->label2->Click += gcnew System::EventHandler(this, &Main::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(69, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(432, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PRODUCT NAME";
			this->label1->Click += gcnew System::EventHandler(this, &Main::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1750, 912);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"REMOVE PRODUCT";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button2->FlatAppearance->BorderSize = 20;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(53, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Load Data";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column0,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(28, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1704, 830);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main::dataGridView1_CellContentClick);
			// 
			// Column0
			// 
			this->Column0->HeaderText = L"SR.NO";
			this->Column0->MinimumWidth = 6;
			this->Column0->Name = L"Column0";
			this->Column0->ReadOnly = true;
			this->Column0->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"PRODUCT NAME";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"PRODUCT ID";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"PRODUCT PRICE";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"PRODUCT QUANTITY";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1750, 912);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"UPDATE PRODUCT";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &Main::tabPage3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(35, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(213, 37);
			this->button4->TabIndex = 1;
			this->button4->Text = L"LOAD DATA";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column7,
					this->Column11, this->Column12, this->Column13, this->Column14
			});
			this->dataGridView3->Location = System::Drawing::Point(24, 49);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(1704, 830);
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main::dataGridView3_CellContentClick);
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"SR.NO";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column7->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"PRODUCT NAME";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"PRODUCT ID";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column12->Width = 125;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"PRODUCT PRICE";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column13->Width = 125;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"PRODUCT QUANTITY";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column14->Width = 125;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl2);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1750, 912);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"SEARCH PRODUCT";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1741, 903);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label7);
			this->tabPage6->Controls->Add(this->button5);
			this->tabPage6->Controls->Add(this->label6);
			this->tabPage6->Controls->Add(this->textBox5);
			this->tabPage6->Location = System::Drawing::Point(4, 29);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1733, 870);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"BY PRODUCT NAME";
			this->tabPage6->UseVisualStyleBackColor = true;
			this->tabPage6->Click += gcnew System::EventHandler(this, &Main::tabPage6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(39, 315);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 25);
			this->label7->TabIndex = 3;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(44, 158);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(233, 119);
			this->button5->TabIndex = 2;
			this->button5->Text = L"SEARCH";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(350, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"SEARCH PRODUCT (CASE SENSITIVE)";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(30, 83);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(391, 26);
			this->textBox5->TabIndex = 0;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Main::textBox5_TextChanged);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->label9);
			this->tabPage7->Controls->Add(this->button6);
			this->tabPage7->Controls->Add(this->textBox6);
			this->tabPage7->Controls->Add(this->label8);
			this->tabPage7->Location = System::Drawing::Point(4, 29);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1733, 870);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"BY PRODUCT ID";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Blue;
			this->label9->Location = System::Drawing::Point(46, 313);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 25);
			this->label9->TabIndex = 3;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(47, 178);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(245, 96);
			this->button6->TabIndex = 2;
			this->button6->Text = L"SEARCH";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(50, 94);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(343, 26);
			this->textBox6->TabIndex = 1;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Main::textBox6_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(43, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(350, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"SEARCH PRODUCT (CASE SENSITIVE)";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button3);
			this->tabPage5->Controls->Add(this->dataGridView2);
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1750, 912);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"DISPLAY INVENTORY";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Navy;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(48, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(267, 41);
			this->button3->TabIndex = 1;
			this->button3->Text = L"DISPLAY DATA";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column5,
					this->Column6, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView2->Location = System::Drawing::Point(18, 53);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1704, 830);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main::dataGridView2_CellContentClick);
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"SR.NO.";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"PRODUCT NAME";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"PRODUCT ID";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"PRODUCT PRICE";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"PRODUCT QUANTITY";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 125;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1782, 1033);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"INVENTORY MANAGEMENT SYSTEM";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "") {
		label5->Text = "Warning: Please Fill All The Details.";
	}
	else {
	Excel->add_data(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text);
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	label5->Text = "";
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	delete_conform^ conform = gcnew delete_conform(getRow(dataGridView1));
	conform->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	for (int i = 0; i < Excel->last_data(); i++) {
		dataGridView1->Rows->Add(i + 1, Excel->read_data(i, 1), Excel->read_data(i, 2), Excel->read_data(i, 3), Excel->read_data(i, 4));
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->Rows->Clear();
	for (int i = 0; i < Excel->last_data(); i++) {
		dataGridView2->Rows->Add(i + 1, Excel->read_data(i, 1), Excel->read_data(i, 2), Excel->read_data(i, 3), Excel->read_data(i, 4));
	}
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Rows->Clear();
	for (int i = 0; i < Excel->last_data(); i++) {
		dataGridView3->Rows->Add(i + 1, Excel->read_data(i, 1), Excel->read_data(i, 2), Excel->read_data(i, 3), Excel->read_data(i, 4));
	}
}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	update^ _Update = gcnew update(getRow(dataGridView3),getCol(dataGridView3));
	_Update->Show();
}
	   int getRow(System::Windows::Forms::DataGridView^ grid) {
		   String^ temp = Convert::ToString(grid->CurrentRow);
		   int t1 = temp->IndexOf("=");
		   int t2 = temp->IndexOf("}");
		   String^ t3 = temp->Substring(24, t2 - t1 - 1);
		   int row = Convert::ToInt32(t3);
		   return row;
	   }
	   int getCol(System::Windows::Forms::DataGridView^ grid) {
		   String^ temp1 = Convert::ToString(grid->CurrentCell);
		   int t11 = temp1->IndexOf("=");
		   int t21 = temp1->IndexOf(",");
		   String^ t31 = temp1->Substring(t11 + 1, t21 - t11 - 1);
		   int col = Convert::ToInt32(t31);
		   return col;
	   }
private: System::Void tabPage6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int y=Excel->searchProductByName(textBox5->Text);
	if (y == -1) {
		label7->Text = "Product Not Found!!!";
	}
	else
	{
		label7->Text = "PRODUCT NAME: " + Excel->read_data(y, 1) + "\nPRODUCT ID: " + Excel->read_data(y, 2) + "\nPRODUCT PRICE: " + Excel->read_data(y, 3) + "\nPRODUCT QUANTITY: "+Excel->read_data(y, 4);
	}
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int y = Excel->searchProductById(textBox6->Text);
	if (y == -1) {
		label9->Text = "Product Not Found!!!";
	}
	else
	{
		label9->Text = "PRODUCT NAME: " + Excel->read_data(y, 1) + "\nPRODUCT ID: " + Excel->read_data(y, 2) + "\nPRODUCT PRICE: " + Excel->read_data(y, 3) + "\nPRODUCT QUANTITY: " + Excel->read_data(y, 4);
	}
}
};
}
=======
#pragma once
#include "libxl.h"
#include"excel.h"
#include"delete_conform.h"
#include<thread>
#include<chrono>
#include"update.h"
using namespace libxl;
namespace INVENTORYMANAGEMENTSYSTEM {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	public:
		   INVENTORYMANAGEMENTSYSTEM::excel^ Excel = gcnew INVENTORYMANAGEMENTSYSTEM::excel("INVENTORY.xlsx");
		   const char* _filename = "INVENTORY.xlsx";
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1758, 945);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1750, 912);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"ADD PRODUCT";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Main::tabPage1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(65, 637);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 24);
			this->label5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 20;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei Light", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(69, 523);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 86);
			this->button1->TabIndex = 8;
			this->button1->Text = L"ADD PRODUCT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(69, 435);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(156, 26);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(65, 397);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"PRODUCT QUANTITY";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(69, 312);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 26);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"PRODUCT PRICE";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(69, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 26);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PRODUCT ID";
			this->label2->Click += gcnew System::EventHandler(this, &Main::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(69, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(432, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PRODUCT NAME";
			this->label1->Click += gcnew System::EventHandler(this, &Main::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1750, 912);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"REMOVE PRODUCT";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button2->FlatAppearance->BorderSize = 20;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(53, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Load Data";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column0,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(28, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1704, 830);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main::dataGridView1_CellContentClick);
			// 
			// Column0
			// 
			this->Column0->HeaderText = L"SR.NO";
			this->Column0->MinimumWidth = 6;
			this->Column0->Name = L"Column0";
			this->Column0->ReadOnly = true;
			this->Column0->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"PRODUCT NAME";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"PRODUCT ID";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"PRODUCT PRICE";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"PRODUCT QUANTITY";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1750, 912);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"UPDATE PRODUCT";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &Main::tabPage3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(35, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(213, 37);
			this->button4->TabIndex = 1;
			this->button4->Text = L"LOAD DATA";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column7,
					this->Column11, this->Column12, this->Column13, this->Column14
			});
			this->dataGridView3->Location = System::Drawing::Point(24, 49);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(1704, 830);
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main::dataGridView3_CellContentClick);
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"SR.NO";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column7->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"PRODUCT NAME";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"PRODUCT ID";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column12->Width = 125;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"PRODUCT PRICE";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column13->Width = 125;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"PRODUCT QUANTITY";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column14->Width = 125;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl2);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1750, 912);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"SEARCH PRODUCT";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1741, 903);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label7);
			this->tabPage6->Controls->Add(this->button5);
			this->tabPage6->Controls->Add(this->label6);
			this->tabPage6->Controls->Add(this->textBox5);
			this->tabPage6->Location = System::Drawing::Point(4, 29);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1733, 870);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"BY PRODUCT NAME";
			this->tabPage6->UseVisualStyleBackColor = true;
			this->tabPage6->Click += gcnew System::EventHandler(this, &Main::tabPage6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(39, 315);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 25);
			this->label7->TabIndex = 3;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(44, 158);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(233, 119);
			this->button5->TabIndex = 2;
			this->button5->Text = L"SEARCH";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(350, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"SEARCH PRODUCT (CASE SENSITIVE)";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(30, 83);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(391, 26);
			this->textBox5->TabIndex = 0;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Main::textBox5_TextChanged);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->label9);
			this->tabPage7->Controls->Add(this->button6);
			this->tabPage7->Controls->Add(this->textBox6);
			this->tabPage7->Controls->Add(this->label8);
			this->tabPage7->Location = System::Drawing::Point(4, 29);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1733, 870);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"BY PRODUCT ID";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Blue;
			this->label9->Location = System::Drawing::Point(46, 313);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 25);
			this->label9->TabIndex = 3;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(47, 178);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(245, 96);
			this->button6->TabIndex = 2;
			this->button6->Text = L"SEARCH";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(50, 94);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(343, 26);
			this->textBox6->TabIndex = 1;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Main::textBox6_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(43, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(350, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"SEARCH PRODUCT (CASE SENSITIVE)";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button3);
			this->tabPage5->Controls->Add(this->dataGridView2);
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1750, 912);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"DISPLAY INVENTORY";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Navy;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(48, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(267, 41);
			this->button3->TabIndex = 1;
			this->button3->Text = L"DISPLAY DATA";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column5,
					this->Column6, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView2->Location = System::Drawing::Point(18, 53);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1704, 830);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main::dataGridView2_CellContentClick);
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"SR.NO.";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"PRODUCT NAME";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"PRODUCT ID";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"PRODUCT PRICE";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"PRODUCT QUANTITY";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 125;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1782, 1033);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"INVENTORY MANAGEMENT SYSTEM";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "") {
		label5->Text = "Warning: Please Fill All The Details.";
	}
	else {
	Excel->add_data(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text);
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	label5->Text = "";
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	delete_conform^ conform = gcnew delete_conform(getRow(dataGridView1));
	conform->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	for (int i = 0; i < Excel->last_data(); i++) {
		dataGridView1->Rows->Add(i + 1, Excel->read_data(i, 1), Excel->read_data(i, 2), Excel->read_data(i, 3), Excel->read_data(i, 4));
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->Rows->Clear();
	for (int i = 0; i < Excel->last_data(); i++) {
		dataGridView2->Rows->Add(i + 1, Excel->read_data(i, 1), Excel->read_data(i, 2), Excel->read_data(i, 3), Excel->read_data(i, 4));
	}
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Rows->Clear();
	for (int i = 0; i < Excel->last_data(); i++) {
		dataGridView3->Rows->Add(i + 1, Excel->read_data(i, 1), Excel->read_data(i, 2), Excel->read_data(i, 3), Excel->read_data(i, 4));
	}
}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	update^ _Update = gcnew update(getRow(dataGridView3),getCol(dataGridView3));
	_Update->Show();
}
	   int getRow(System::Windows::Forms::DataGridView^ grid) {
		   String^ temp = Convert::ToString(grid->CurrentRow);
		   int t1 = temp->IndexOf("=");
		   int t2 = temp->IndexOf("}");
		   String^ t3 = temp->Substring(24, t2 - t1 - 1);
		   int row = Convert::ToInt32(t3);
		   return row;
	   }
	   int getCol(System::Windows::Forms::DataGridView^ grid) {
		   String^ temp1 = Convert::ToString(grid->CurrentCell);
		   int t11 = temp1->IndexOf("=");
		   int t21 = temp1->IndexOf(",");
		   String^ t31 = temp1->Substring(t11 + 1, t21 - t11 - 1);
		   int col = Convert::ToInt32(t31);
		   return col;
	   }
private: System::Void tabPage6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int y=Excel->searchProductByName(textBox5->Text);
	if (y == -1) {
		label7->Text = "Product Not Found!!!";
	}
	else
	{
		label7->Text = "PRODUCT NAME: " + Excel->read_data(y, 1) + "\nPRODUCT ID: " + Excel->read_data(y, 2) + "\nPRODUCT PRICE: " + Excel->read_data(y, 3) + "\nPRODUCT QUANTITY: "+Excel->read_data(y, 4);
	}
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int y = Excel->searchProductById(textBox6->Text);
	if (y == -1) {
		label9->Text = "Product Not Found!!!";
	}
	else
	{
		label9->Text = "PRODUCT NAME: " + Excel->read_data(y, 1) + "\nPRODUCT ID: " + Excel->read_data(y, 2) + "\nPRODUCT PRICE: " + Excel->read_data(y, 3) + "\nPRODUCT QUANTITY: " + Excel->read_data(y, 4);
	}
}
};
}
>>>>>>> caf9767ca46b54a9fe2b2f649ff1ad40741e53f7
