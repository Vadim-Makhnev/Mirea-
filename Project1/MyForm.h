#pragma once
#include <math.h>
#include<ctime>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ textBox1;

	private:


	private: System::Windows::Forms::TextBox^ textBox2;





	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::CheckBox^ check1;
	private: System::Windows::Forms::CheckBox^ check2;
	private: System::Windows::Forms::CheckBox^ check3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;





	protected:

	private:
	
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->check1 = (gcnew System::Windows::Forms::CheckBox());
			this->check2 = (gcnew System::Windows::Forms::CheckBox());
			this->check3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 3, 4, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(722, 46);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Каким способом решать данное уравнение\?";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(143, 234);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(466, 43);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Введите коэффициенты:";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(211, 417);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 37);
			this->label1->TabIndex = 9;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(104, 353);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(146, 61);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChange);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(500, 353);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(146, 61);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(306, 353);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(146, 61);
			this->textBox6->TabIndex = 13;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(104, 283);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(146, 61);
			this->textBox7->TabIndex = 14;
			this->textBox7->Text = L"a , a<>0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox8->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(306, 283);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(146, 61);
			this->textBox8->TabIndex = 15;
			this->textBox8->Text = L"b";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox9->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(500, 283);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(146, 61);
			this->textBox9->TabIndex = 16;
			this->textBox9->Text = L"с ";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(584, 515);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 55);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Решить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Silver;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(306, 428);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 37);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Уравнение";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(18, 535);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 35);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Ответ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(584, 442);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(151, 55);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// check1
			// 
			this->check1->AutoSize = true;
			this->check1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check1->Location = System::Drawing::Point(51, 168);
			this->check1->Name = L"check1";
			this->check1->Size = System::Drawing::Size(170, 29);
			this->check1->TabIndex = 24;
			this->check1->Text = L"Подтвердить";
			this->check1->UseVisualStyleBackColor = true;
			this->check1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check1_CheckedChanged);
			// 
			// check2
			// 
			this->check2->AutoSize = true;
			this->check2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check2->Location = System::Drawing::Point(297, 168);
			this->check2->Name = L"check2";
			this->check2->Size = System::Drawing::Size(170, 29);
			this->check2->TabIndex = 25;
			this->check2->Text = L"Подтвердить";
			this->check2->UseVisualStyleBackColor = true;
			this->check2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check2_CheckedChanged);
			// 
			// check3
			// 
			this->check3->AutoSize = true;
			this->check3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check3->Location = System::Drawing::Point(537, 168);
			this->check3->Name = L"check3";
			this->check3->Size = System::Drawing::Size(170, 29);
			this->check3->TabIndex = 26;
			this->check3->Text = L"Подтвердить";
			this->check3->UseVisualStyleBackColor = true;
			this->check3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check3_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(41, 82);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 80);
			this->textBox3->TabIndex = 27;
			this->textBox3->Text = L"Дискриминант";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(287, 82);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(180, 80);
			this->textBox10->TabIndex = 28;
			this->textBox10->Text = L"Завершение квадрата";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(527, 82);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(180, 80);
			this->textBox11->TabIndex = 29;
			this->textBox11->Text = L"Теорема Виета";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(748, 599);
			this->Controls->Add(this->check1);
			this->Controls->Add(this->check2);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->check3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Решение квадратных уравнений";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (check1->Checked ) {
			
			double a = System::Convert::ToDouble(textBox4->Text);
			double b = System::Convert::ToDouble(textBox6->Text);
			double c = System::Convert::ToDouble(textBox5->Text);


			if (b > 0 && c > 0) {

				label2->Text = a + "x^2 + " + b + "x + " + c + " = 0";
			}
			else if (b < 0 && c>0) {

				label2->Text = a + "x^2 " + b + "x + " + c + " = 0";

			}

			else if (b > 0 && c < 0) {

				label2->Text = a + "x^2 + " + b + "x " + c + " = 0";
			}
			else if (b < 0 && c < 0) {

				label2->Text = a + "x^2 " + b + "x " + c + " = 0";
			}

			if (a == 0) {

				label2->Text = "Ошибка:a должно быть > 0!";


			}
			else {
				double D = b * b - 4 * a * c;
				if (D > 0) {

					double x1 = (-b + sqrt(D)) / (2 * a);
					double x2 = (-b - sqrt(D)) / (2 * a);
					label3->Text = "x1=" + round(x1*10000)/10000 + ";" + "x2=" + round(x2 * 10000) / 10000;
					
				}
				else if (D == 0) {

					double x = (-b / (2 * a));

					label3->Text = "x=" + x;
				}
				else {

					label3->Text = "нет корней";

				}


			}
		}

		if (check3->Checked) {

			double a = System::Convert::ToDouble(textBox4->Text);
			double b = System::Convert::ToDouble(textBox6->Text);
			double c = System::Convert::ToDouble(textBox5->Text);
			if (a == 0) {

				label2->Text = "Ошибка:a должно быть > 0!";

			}
			else {
				double x1, x2, D;
				D = b * b - 4 * a* c;

				if (D == 0) {
					x1 = -b / (2*a) ;
					x2 = -b / (2*a);
					label3->Text = "x1 = " + x1 + "x2 = " + x2;
				}
				else if (D > 0) {
					x1 = -b + sqrt(D) / (2*a) ;
					x2 = -b - sqrt(D) / (2*a) ;
					if (x1 + x2 == -b / a && x1*x2 == c/a) {
						label3->Text = "x1 = " + round(x1 * 10000) / 10000 + ";" + "x2 = " + round(x2 * 10000) / 10000 + "Корни удовлетворяют теореме Виета";
							
					}
					else {
						label3->Text = "Корни не удовлетворяют теореме виета";
					}
				}
				else {
					label3->Text = "Нет корней";
				}
			}
		}

		if (check2->Checked) {
			double a = System::Convert::ToDouble(textBox4->Text);
			double b = System::Convert::ToDouble(textBox6->Text);
			double c = System::Convert::ToDouble(textBox5->Text);

			if (a == 0) {
				label2->Text = "Ошибка:a должно быть > 0!";
			}
			else {
				double x1, x2, h, k, D, x;
				D = b * b - 4 * a * c;
				h = -b / (2 * a);
				k = c - (b * b) / (4 * a);
				if (D < 0) {

					label3->Text = "Нет корней";

				}
				else if (D == 0) {

					x = -h;
					label3->Text = "x=" + x;


				}
				else {

					x1 = h + sqrt(D) / (2 * a);
					x2 = h - sqrt(D) / (2 * a);
					label3->Text = "x1=" + round(x1 * 10000) / 10000 + ";" + "x2=" + round(x2*10000)/10000;

				}
			}
		}
	}
	
private: System::Void textBox4_TextChange(System::Object^ sender, System::EventArgs^ e) {	
	
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
	textBox6->Text = "";
	textBox5->Text = "";
	label2->Text ="";
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void check2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (check2->Checked) {
		check3->Checked = false;
		check1->Checked = false;
	}
	else {

	}
}
private: System::Void check1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (check1->Checked) {
		check3->Checked = false;
		check2->Checked = false;
}    
	else {
		
	}
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void check3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (check3->Checked) {
		check1->Checked = false;
		check2->Checked = false;
	}
	else {

	}
}
	   private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	   {
		   if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 46 || e->KeyChar == 45))
		   {
			   e->Handled = true;
		   }
	   }
};
}


