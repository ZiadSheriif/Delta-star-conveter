#pragma once
#include<iostream>
namespace Project2 {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label13;

	private:
		/// <summary>
		/// Required designer variable.
		/// 
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label14;
		   bool test ;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkGreen;
			this->button1->Location = System::Drawing::Point(143, 84);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Star";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(783, 182);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(783, 261);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(783, 336);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 22);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(645, 185);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Enter R1";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(645, 266);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Enter R2";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(645, 341);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Enter R3";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Crimson;
			this->label4->Location = System::Drawing::Point(310, 369);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"R1";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label5->Location = System::Drawing::Point(89, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(752, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Please if you want to calculate delta press delta,or to calculate star press star"
				L"";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(64, 369);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 48);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Calculate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(461, 84);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 52);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Delta";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Crimson;
			this->label7->Location = System::Drawing::Point(310, 394);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"R2";
			this->label7->Visible = false;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Crimson;
			this->label8->Location = System::Drawing::Point(310, 423);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 20);
			this->label8->TabIndex = 13;
			this->label8->Text = L"R3";
			this->label8->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Crimson;
			this->label10->Location = System::Drawing::Point(310, 369);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 20);
			this->label10->TabIndex = 16;
			this->label10->Text = L"R12";
			this->label10->Visible = false;
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Crimson;
			this->label11->Location = System::Drawing::Point(310, 394);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 20);
			this->label11->TabIndex = 17;
			this->label11->Text = L"R23";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Crimson;
			this->label12->Location = System::Drawing::Point(310, 423);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 20);
			this->label12->TabIndex = 18;
			this->label12->Text = L"R31";
			this->label12->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(637, 187);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 20);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Enter R12";
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(637, 266);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Enter R23";
			this->label9->Visible = false;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(637, 341);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 20);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Enter R31";
			this->label13->Visible = false;
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(759, 84);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 52);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(164, 241);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(277, 20);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Please Enter Valid Resistance!!";
			this->label14->Visible = false;
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(966, 465);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->ForeColor = System::Drawing::Color::DarkGreen;
			this->Name = L"MyForm";
			this->Text = L"Delta Star Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		bool check(String^s)
		{
		
			for (int i = 0; i <s->Length ; i++)
			{
				if ((isdigit(s[i]) == 0 && s[i] != '.' )||(s[0]-48)==0)
				{
					return false;
				}
			}
			return true;

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	test = true; //star (10,11,12)
	label14->Visible = false;
	label10->Visible = false;
	label11->Visible = false;
	label12->Visible = false;
	label1->Visible = false;
	label2->Visible = false;
	label3->Visible = false;
	label6->Visible = true;
	label9->Visible = true;
	label13->Visible = true;
	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (test)
	{
		label10->Visible = false;
		label11->Visible = false;
		label12->Visible = false;
		String^ R12 = textBox1->Text;
		String^ R23 = textBox2->Text;
		String^ R31 = textBox3->Text;
		if (!check(R12) || !check(R23) || !check(R31))
		{
			label14->Visible = true;
			label4->Visible = false;
			label7->Visible = false;
			label8->Visible = false;
			return;
		}
		else
			label14->Visible = false;
		double inputR12 = System::Convert::ToDouble(R12);
		double inputR23 = System::Convert::ToDouble(R23);
		double inputR31 = System::Convert::ToDouble(R31);

		double R1 = (inputR12 * inputR31 * 1.0) / (inputR12 + inputR23 + inputR31);
		double R2 = (inputR12 * inputR23 * 1.0) / (inputR12 + inputR23 + inputR31);
		double R3 = (inputR23 * inputR31 * 1.0) / (inputR12 + inputR23 + inputR31);

		R12 = System::Convert::ToString("R1=" + R1 + " ohm");
		R23 = System::Convert::ToString("R2=" + R2 + " ohm");
		R31 = System::Convert::ToString("R3=" + R3 + " ohm");
		label4->Text = R12;
		label7->Text = R23;
		label8->Text = R31;
		label4->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
	}
	else
	{
		label4->Visible = false;
		label7->Visible = false;
		label8->Visible = false;
		String^ R1 = textBox1->Text;
		String^ R2 = textBox2->Text;
		String^ R3 = textBox3->Text;
		if (!check(R1) || !check(R2) || !check(R3))
		{
			label14->Visible = true;
			label10->Visible = false;
			label11->Visible = false;
			label12->Visible = false;
			return;
		}
		else
			label14->Visible = false;
		double inputR1 = System::Convert::ToDouble(R1);
		double inputR2 = System::Convert::ToDouble(R2);
		double inputR3 = System::Convert::ToDouble(R3);
		double R12 = inputR1 + inputR2 + (inputR1 * inputR2 * 1.0 / inputR3);
		double R23 = inputR2 + inputR3 + (inputR2 * inputR3 * 1.0 / inputR1);
		double R31 = inputR3 + inputR1 + (inputR3 * inputR1 * 1.0 / inputR2);

		R1 = System::Convert::ToString("R12=" + R12 + " ohm");
		R2 = System::Convert::ToString("R23=" + R23 + " ohm");
		R3 = System::Convert::ToString("R31=" + R31 + " ohm");
		label10->Text = R1;
		label11->Text = R2;
		label12->Text = R3;
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;
	}
	
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	test = false; //delta
	label14->Visible = false;
	label6->Visible = false;
	label9->Visible = false;
	label4->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	label13->Visible = false;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
