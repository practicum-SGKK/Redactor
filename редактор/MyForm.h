#pragma once

namespace �������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(259, 333);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(365, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�������� � ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(310, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�����";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"text2.txt" });
			this->comboBox1->Location = System::Drawing::Point(313, 230);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"10", L"12", L"14", L"16" });
			this->comboBox2->Location = System::Drawing::Point(408, 129);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(105, 24);
			this->comboBox2->TabIndex = 4;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(384, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"����������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(277, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"������ ������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(310, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"��� ����� ��� �������� �����";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(284, 45);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(55, 20);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Arial";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(284, 97);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(143, 20);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Times New Roman";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(284, 71);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(71, 20);
			this->radioButton3->TabIndex = 10;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Courier";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(436, 45);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(111, 20);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"����������";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(436, 72);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(75, 20);
			this->checkBox2->TabIndex = 12;
			this->checkBox2->Text = L"������";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(436, 97);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(124, 20);
			this->checkBox3->TabIndex = 13;
			this->checkBox3->Text = L"������������";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 378);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		if (comboBox2->SelectedIndex == 1)
		{
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("C:\\Users\\������\\Desktop\\menu1\\text2.txt"); //����� ��������� ����� ����
			System::String^ text = sr->ReadToEnd(); //�������� ���� � text
			textBox1->Text = textBox1->Text + text;//���������� � textbox �������� ��������� text
			sr->Close(); //�������� �����
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Font = gcnew System::Drawing::Font("Arial", textBox1->Font->Size, textBox1->Font->Style);
	}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Font = gcnew System::Drawing::Font("Courier", textBox1->Font->Size, textBox1->Font->Style);
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Font = gcnew System::Drawing::Font("Times New Roman", textBox1->Font->Size, textBox1->Font->Style);
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (checkBox1->Checked == true)
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Bold);
	else
	{
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style & FontStyle::Regular);
		if (checkBox2->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Italic);
		if (checkBox3->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Underline);
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (comboBox1->SelectedIndex == 0) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 10, textBox1->Font->Style);
	if (comboBox1->SelectedIndex == 1) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 12, textBox1->Font->Style);
	if (comboBox1->SelectedIndex == 2) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 14, textBox1->Font->Style);
	if (comboBox1->SelectedIndex == 3) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 16, textBox1->Font->Style);

}
};
}
