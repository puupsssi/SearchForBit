#pragma once
#include "TSet.h"
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace SearchForBit
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	TSet A;
	TSet B;
	TSet res;
	int size;
	void Algoritm10(string str, int& k, string* W)
	{
		string zn = ",!?:;.";
		k = 0;
		str += " ";
		for (int i = 0; i < str.length(); i++) {
			int l = zn.find(str[i]);
			if (l >= 0 && l < zn.length()) {
				if (W[k].length() > 0) {
					k++;
				}
				W[k] = str[i];
			}
			else {
				if (str[i] == ' ') {
					if (W[k].length() > 0) {
						W[++k] = "";
					}
				}
				else {
					W[k] = W[k] + str[i];
				}
			}
		}
	}
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1A;
	private: System::Windows::Forms::TextBox^ textBox2B;
	private: System::Windows::Forms::TextBox^ textBox3RES;
	private: System::Windows::Forms::TextBox^ textBox4UNIV;
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;





	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ���������
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1A = (gcnew System::Windows::Forms::TextBox());
			this->textBox2B = (gcnew System::Windows::Forms::TextBox());
			this->textBox3RES = (gcnew System::Windows::Forms::TextBox());
			this->textBox4UNIV = (gcnew System::Windows::Forms::TextBox());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(19, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(19, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"B";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(19, 295);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"RES";
			//
			// button1
			//
			this->button1->BackColor = System::Drawing::Color::Violet;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(55, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//
			// button2
			//
			this->button2->BackColor = System::Drawing::Color::Violet;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(151, 217);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 51);
			this->button2->TabIndex = 4;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			//
			// button3
			//
			this->button3->BackColor = System::Drawing::Color::Violet;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(249, 217);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 51);
			this->button3->TabIndex = 5;
			this->button3->Text = L"~";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(649, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"UNIV";
			//
			// textBox1A
			//
			this->textBox1A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1A->Location = System::Drawing::Point(55, 64);
			this->textBox1A->Name = L"textBox1A";
			this->textBox1A->Size = System::Drawing::Size(273, 22);
			this->textBox1A->TabIndex = 7;
			this->textBox1A->Leave += gcnew System::EventHandler(this, &MyForm::textBox1A_Leave);
			//
			// textBox2B
			//
			this->textBox2B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2B->Location = System::Drawing::Point(55, 162);
			this->textBox2B->Name = L"textBox2B";
			this->textBox2B->Size = System::Drawing::Size(273, 22);
			this->textBox2B->TabIndex = 8;
			this->textBox2B->Leave += gcnew System::EventHandler(this, &MyForm::textBox2B_Leave);
			//
			// textBox3RES
			//
			this->textBox3RES->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3RES->Location = System::Drawing::Point(55, 323);
			this->textBox3RES->Name = L"textBox3RES";
			this->textBox3RES->Size = System::Drawing::Size(614, 22);
			this->textBox3RES->TabIndex = 9;
			this->textBox3RES->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3RES_TextChanged);
			//
			// textBox4UNIV
			//
			this->textBox4UNIV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4UNIV->Location = System::Drawing::Point(433, 68);
			this->textBox4UNIV->Name = L"textBox4UNIV";
			this->textBox4UNIV->Size = System::Drawing::Size(236, 22);
			this->textBox4UNIV->TabIndex = 10;
			this->textBox4UNIV->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4UNIV_TextChanged);
			//
			// fileSystemWatcher1
			//
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(722, 397);
			this->Controls->Add(this->textBox4UNIV);
			this->Controls->Add(this->textBox3RES);
			this->Controls->Add(this->textBox2B);
			this->Controls->Add(this->textBox1A);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1A_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		string str = msclr::interop::marshal_as<string>(textBox1A->Text);
		int n = str.length();
		string* W = new string[n + 2];
		int k;
		Algoritm10(str, k, W);
		for (int i = 0; i < k; i++) {
			A.Add(atoi(W[i].c_str()));
		}
		textBox1A->Text = gcnew String(A.TSettostring().c_str());
	}
	private: System::Void textBox2B_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		string str = msclr::interop::marshal_as<string>(textBox2B->Text);
		int n = str.length();
		string* W = new string[n + 2];
		int k;
		Algoritm10(str, k, W);
		for (int i = 0; i < k; i++) {
			B.Add(atoi(W[i].c_str()));
		}
		textBox2B->Text = gcnew String(B.TSettostring().c_str());
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		res = A + B;
		textBox3RES->Text = gcnew String(res.TSettostring().c_str());

	}
	private: System::Void textBox3RES_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void textBox4UNIV_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		size = Convert::ToInt32(textBox4UNIV->Text);
		A = TSet(size);
		B = TSet(size);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		res = A * B;
		textBox3RES->Text = gcnew String(res.TSettostring().c_str());
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		res = ~A;
		textBox3RES->Text = gcnew String(res.TSettostring().c_str());
	}
	};
}
