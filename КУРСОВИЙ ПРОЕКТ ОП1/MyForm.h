#pragma once

namespace КУРСОВИЙ_ПРОЕКТ_ОП1 {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ забронюватиНомерToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ інформаціяПроНомерToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->забронюватиНомерToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інформаціяПроНомерToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->забронюватиНомерToolStripMenuItem,
					this->інформаціяПроНомерToolStripMenuItem, this->довідкаToolStripMenuItem, this->довідкаToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(854, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// забронюватиНомерToolStripMenuItem
			// 
			this->забронюватиНомерToolStripMenuItem->Name = L"забронюватиНомерToolStripMenuItem";
			this->забронюватиНомерToolStripMenuItem->Size = System::Drawing::Size(168, 24);
			this->забронюватиНомерToolStripMenuItem->Text = L"Забронювати номер";
			// 
			// інформаціяПроНомерToolStripMenuItem
			// 
			this->інформаціяПроНомерToolStripMenuItem->Name = L"інформаціяПроНомерToolStripMenuItem";
			this->інформаціяПроНомерToolStripMenuItem->Size = System::Drawing::Size(185, 24);
			this->інформаціяПроНомерToolStripMenuItem->Text = L"Інформація про номер";
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(86, 24);
			this->довідкаToolStripMenuItem->Text = L"Контакти";
			// 
			// довідкаToolStripMenuItem1
			// 
			this->довідкаToolStripMenuItem1->Name = L"довідкаToolStripMenuItem1";
			this->довідкаToolStripMenuItem1->Size = System::Drawing::Size(77, 24);
			this->довідкаToolStripMenuItem1->Text = L"Довідка";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(669, 468);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(185, 46);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"Привіт, я Демко Степан";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 516);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		Image^ image = Image::FromFile("112.jpg");

		g->DrawImage(image, 0, 0, image->Size.Width, image->Size.Height);
	}
	};
}
