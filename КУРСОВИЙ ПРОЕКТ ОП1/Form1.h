#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox3;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(132, 86);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(257, 22);
			this->dateTimePicker1->TabIndex = 1;
			this->dateTimePicker1->Value = System::DateTime(2021, 6, 8, 18, 24, 12, 0);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Дата заїзду";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Дата виїзду";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(132, 137);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(257, 22);
			this->dateTimePicker2->TabIndex = 4;
			this->dateTimePicker2->Value = System::DateTime(2021, 6, 8, 18, 24, 12, 0);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(515, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Кількість дорослих";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(542, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Кількість дітей";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox1->Location = System::Drawing::Point(670, 86);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(142, 24);
			this->comboBox1->TabIndex = 7;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox2->Location = System::Drawing::Point(670, 135);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(142, 24);
			this->comboBox2->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Клас номеру";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"DBL (double) — двомісний номер з двоспальним ліжком.",
					L"TRPL (triple) — номер для трьох, з трьома окремими односпальними ліжками.", L"EXB (extra bed) — номер для 1.", L"Family Room — номер для сім`ї з дітьми, однокімнатний, або складається з двох сум"
					L"іжних кімнат."
			});
			this->comboBox3->Location = System::Drawing::Point(132, 191);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(680, 24);
			this->comboBox3->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(650, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 48);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Забронювати";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 41);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(72, 256);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Ціна";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 253);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 340);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		Image^ image = Image::FromFile("123.jpg");
		Form::ClientSize = image->Size;
		g->DrawImage(image, 0, 0, image->Size.Width, image->Size.Height);
	}

};
}
