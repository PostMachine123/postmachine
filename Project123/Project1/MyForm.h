#pragma once

#include <string>
#include "PostMachine.cpp"
#include <msclr\marshal_cppstd.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			this->saveFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			auto row = cli::safe_cast<System::Windows::Forms::DataGridViewRow^>(this->dataGridView1->Rows[0]->Clone());
			/*row->Cells[10]->Value = L"🟢";
			row->Cells[11]->Value = L"🟢";
			row->Cells[13]->Value = L"🟢";
			row->Cells[14]->Value = L"🟢";
			row->Cells[15]->Value = L"🟢";*/

			this->dataGridView1->Rows->Add(row);
			auto row2 = cli::safe_cast<System::Windows::Forms::DataGridViewRow^>(this->dataGridView1->Rows[0]->Clone());
			row2->Cells[10]->Value = L"▲";
			this->dataGridView1->Rows->Add(row2);
			this->dataGridView1->AllowUserToAddRows = false;
			machine = new PostMachine();
			//machine->GetState()->Set(0, true);
			//machine->GetState()->Set(1, true);
			//machine->GetState()->Set(3, true);
			//machine->GetState()->Set(4, true);
			//machine->GetState()->Set(5, true);
			//machine->GetState()->Set(6, true);
			columns = gcnew array<System::Windows::Forms::DataGridViewTextBoxColumn^>{
				Column1, Column2, Column3, Column4, Column5, Column6, Column7, Column8, Column9, Column10,
				Column11, Column12, Column13, Column14, Column15, Column16, Column17, Column18, Column19, Column20, Column21
			};
			SetPosition(-10);
		}
		void SetPosition(int^ startIndex)
		{
			auto row = this->dataGridView1->Rows[0];
			for (int i = 0; i < 21; i++)
			{
				row->Cells[i]->Value = this->machine->GetState()->Get((int)startIndex + i) ? L"🟢" : L"";
				columns[i]->HeaderText = ((int)startIndex + i).ToString();
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	array<System::Windows::Forms::DataGridViewTextBoxColumn^>^ columns;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;





	private: System::Windows::Forms::ToolStripMenuItem^ новыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;




	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 35);
			this->button1->TabIndex = 1;
			this->button1->Tag = L"Запустить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(699, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->новыйToolStripMenuItem,
					this->открытьToolStripMenuItem, this->сохранитьToolStripMenuItem1, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// новыйToolStripMenuItem
			// 
			this->новыйToolStripMenuItem->Name = L"новыйToolStripMenuItem";
			this->новыйToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->новыйToolStripMenuItem->Text = L"Новый";
			this->новыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::новыйToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem1
			// 
			this->сохранитьToolStripMenuItem1->Name = L"сохранитьToolStripMenuItem1";
			this->сохранитьToolStripMenuItem1->Size = System::Drawing::Size(133, 22);
			this->сохранитьToolStripMenuItem1->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem1_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(21) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18,
					this->Column19, this->Column20, this->Column21
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Size = System::Drawing::Size(674, 74);
			this->dataGridView1->TabIndex = 3;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"-10";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"-9";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 30;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"-8";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 30;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"-7";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 30;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"-6";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 30;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"-5";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 30;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"-4";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 30;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"-3";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 30;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"-2";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 30;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"-1";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 30;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"0";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 30;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"1";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 30;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"2";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->Width = 30;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"3";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->Width = 30;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"4";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			this->Column15->Width = 30;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"5";
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Width = 30;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"6";
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			this->Column17->Width = 30;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"7";
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			this->Column18->Width = 30;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"8";
			this->Column19->Name = L"Column19";
			this->Column19->ReadOnly = true;
			this->Column19->Width = 30;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"9";
			this->Column20->Name = L"Column20";
			this->Column20->ReadOnly = true;
			this->Column20->Width = 30;
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"10";
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			this->Column21->Width = 30;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(53, 108);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(634, 222);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(12, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 35);
			this->button2->TabIndex = 6;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 279);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(34, 20);
			this->textBox1->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(34, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 340);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Машина Поста";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void новыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < 20; i++)
			this->dataGridView1->Rows[0]->Cells[i]->Value = "";
		this->richTextBox1->Text = "";
		machine = new PostMachine();
	}
	System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
			return;
		auto filename = openFileDialog1->FileName;
		auto text = System::IO::File::ReadAllText(filename);
		richTextBox1->Text = text;
	}
	System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Environment::Exit(0);
	}
	private: System::Void сохранитьToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
			return;
		auto filename = saveFileDialog1->FileName;
		System::IO::File::WriteAllText(filename, richTextBox1->Text);
	}
	private: System::Void изСтрокиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		auto s = prompt("Например, 2x1 1x0 3x1 соответствует 2 меткам, разделенным 1 пустой меткой с 3 метками", "Введите шаблон");

	}

	System::String^ prompt(System::String^ text, System::String^ caption)
	{
		   Form^ prompt = gcnew Form();
		   prompt->Width = 500;
		   prompt->Height = 150;
		   prompt->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
		   prompt->Text = caption;
		   prompt->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		   Label^ textLabel = gcnew Label();
		   textLabel->Left = 50;
		   textLabel->Top = 20;
		   textLabel->Text = text;
		   TextBox^ textBox = gcnew TextBox();
		   textBox->Left = 50;
		   textBox->Top = 50;
		   textBox->Width = 400;
		   Button^ confirmation = gcnew Button();
		   confirmation->Text = "Ok";
		   confirmation->Left = 350;
		   confirmation->Width = 100;
		   confirmation->Top = 70;
		   confirmation->DialogResult = System::Windows::Forms::DialogResult::OK;
		   //confirmation->Click += System::EventHandler(onConfirmationClick);
		   prompt->Controls->Add(textBox);
		   prompt->Controls->Add(confirmation);
		   prompt->Controls->Add(textLabel);
		   prompt->AcceptButton = confirmation;
		   return prompt->ShowDialog() == System::Windows::Forms::DialogResult::OK ? textBox->Text : "";
	}

	System::Void onConfirmationClick(System::Object^ sender, System::EventArgs^ e)
	{

	}
	   PostMachine* machine;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		machine->SetProgram(split(msclr::interop::marshal_as<std::string>(richTextBox1->Text), '\n'));
		while (machine->IsRunning())
		{
			int lineNumberToSelect = machine->GetInstructionIndex();

			int start = richTextBox1->GetFirstCharIndexFromLine(lineNumberToSelect);

			int length = richTextBox1->Lines[lineNumberToSelect]->Length;
			richTextBox1->SelectionStart = start;
			richTextBox1->SelectionLength = length;
			richTextBox1->SelectionBackColor = System::Drawing::Color::Yellow;

			machine->Step();
			Application::DoEvents();
			Sleep(500);

			SetPosition(-10 + machine->GetCaretIndex());

			richTextBox1->SelectionBackColor = System::Drawing::Color::White;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectionBackColor = System::Drawing::Color::White;
		if (machine->GetInstructionIndex() == 0)
		machine->SetProgram(split(msclr::interop::marshal_as<std::string>(richTextBox1->Text), '\n'));
		int lineNumberToSelect = machine->GetInstructionIndex();

		int start = richTextBox1->GetFirstCharIndexFromLine(lineNumberToSelect);

		int length = richTextBox1->Lines[lineNumberToSelect]->Length;
		richTextBox1->SelectionStart = start;
		richTextBox1->SelectionLength = length;
		richTextBox1->SelectionBackColor = System::Drawing::Color::Yellow;

		machine->Step();

		SetPosition(-10 + machine->GetCaretIndex());

	
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int a = System::Convert::ToInt32(textBox1->Text);
	machine->GetState()->Set(a, true);
	textBox1->Text = "";
	richTextBox1->Text = "!";

	machine->SetProgram(split(msclr::interop::marshal_as<std::string>(richTextBox1->Text), '\n'));
	while (machine->IsRunning())
	{
		int lineNumberToSelect = machine->GetInstructionIndex();
		int start = richTextBox1->GetFirstCharIndexFromLine(lineNumberToSelect);
		int length = richTextBox1->Lines[lineNumberToSelect]->Length;
		richTextBox1->SelectionStart = start;
		richTextBox1->SelectionLength = length;
		richTextBox1->SelectionBackColor = System::Drawing::Color::Yellow;
		machine->Step();
		Application::DoEvents();
		SetPosition(-10 + machine->GetCaretIndex());
		richTextBox1->SelectionBackColor = System::Drawing::Color::White;
	}
	richTextBox1->Text = "";

}
};
}
