#pragma once
#include "generator.h"
#include "filestream.h"
#include "Controller.h"
#include <time.h>
#include <iostream>
#include "Controller.h"

namespace GUIyt {

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

		static int i = 0;
		static int sec = 10;		// Get Num of CountDown Second
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
		   String^ second;			// Get String of CountDown
		// Recursive function
		   void Recursive(int nCount)
		   {
			   if (nCount > 0)
			   {
				   Sleep(1000);
				   Recursive(nCount - 1);
			   }
		   }
		   // Visible Save btn
		   void VisibleSave()
		   {
			   Recursive(1);
			   textBox2->Visible = false;
			   button2->Visible = true;
			   button2->Enabled = true;
			   label9->Text = "Enter Save btn";
		   }

	public:
		MyForm(void)
		{
			InitializeComponent();
		}
		void ControlX()
		{
			Controller* xboxController = new Controller();
			XINPUT_STATE controllerState;
			bool running = true;

			//block the form progress, player has to press A on controller to jump out of the while loop
			while (!xboxController->isApressed)
			{
				xboxController->Update();
			}

			delete xboxController;
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Password Generator";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Account";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(204, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 22);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Gen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(103, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 22);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Account";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Letter";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(102, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(201, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 15);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Symbol";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(15, 102);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(54, 25);
			this->textBox4->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(103, 102);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(54, 25);
			this->textBox3->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(204, 102);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(54, 25);
			this->textBox5->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(87, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 15);
			this->label7->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(31, 173);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(222, 20);
			this->label9->TabIndex = 0;
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(40, 205);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(88, 274);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(107, 25);
			this->textBox2->TabIndex = 16;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 310);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Gen button
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (System::Convert::ToInt16(textBox3->Text) <= 0 || System::Convert::ToInt16(textBox3->Text) >= 10)
			{
				throw 5;
			}
			if (System::Convert::ToInt16(textBox4->Text) <= 0 || System::Convert::ToInt16(textBox4->Text) >= 10)
			{
				throw 5;
			}
			if (System::Convert::ToInt16(textBox5->Text) <= 0 || System::Convert::ToInt16(textBox5->Text) >= 10)
			{
				throw 5;
			}
			//-----------------------------------------------------------------------------------------------------
			// Generate the password
			//-----------------------------------------------------------------------------------------------------
			generator GenPwd;	// Create passward object
			GenPwd.NumofAlpha = System::Convert::ToInt16(textBox4->Text);	// get quantity of alphabets
			GenPwd.NumofNum = System::Convert::ToInt16(textBox3->Text);		// get quantity of numbers
			GenPwd.NumofSymbol = System::Convert::ToInt16(textBox5->Text);	// get quantity of symbols
			GenPwd.GeneratePassword();	// generate pwd
			String^ passwordSysString = gcnew String(GenPwd.password.data()); // convert password string to String

			//block the form progress, player has to press A on controller to proceed
			ControlX();
			label7->Text = passwordSysString; // export password to window
			label9->Text = "What his first name?";
			textBox2->Enabled = true;
		}
		catch (int error)
		{
			label9->Text = "Enter between 1-9";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
		label9->Text = "...Please wait";
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Recursive(2);
		second = System::Convert::ToString(sec);
		if (sec <= 0) {
			timer1->Enabled = false;
			sec = 10;
			filestream GenInfo;
			GenInfo.account = msclr::interop::marshal_as<std::string>(textBox1->Text);	// get account info
			GenInfo.password = msclr::interop::marshal_as<std::string>(label7->Text);	// get recent password info
			GenInfo.Combine();		// conbine account and password
			GenInfo.SaveInTxt();	// save info to txt file

			//Initiation
			textBox1->Text = "";	// acount box cleanup
			textBox4->Text = "";	// letters box cleanup
			textBox5->Text = "";	// symbols box cleanup
			textBox3->Text = "";	// number box cleanup
			label7->Text = "";		// pwd label cleanup
			label9->Text = "Save it!";
			srand(time(0));
			int rad = rand() % 3;
			if (rad == 0)
			{
				pictureBox1->Load("pic_0.png"); //
				pictureBox1->Tag = "0";
			}
			if (rad == 1)
			{
				pictureBox1->Load("pic_1.png");
				pictureBox1->Tag = "1";
			}
			if (rad == 2)
			{
				pictureBox1->Load("pic_2.png");
				pictureBox1->Tag = "2";
			}
			textBox2->Visible = true;
			textBox2->Enabled = false;
			textBox2->Text = "";
			button2->Visible = false;
			button2->Enabled = false;
		}
		else {
			label9->Text = "Count Down: " + second;
			sec = sec - 2;
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//Get random picture for human verification test
		//Inspired by James
		srand(time(0));
		int rad = rand() % 3;
		char picload[11];
		sprintf_s(picload, "pic_%d.png", rad);

		System::String^ newStr = Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)picload);
		pictureBox1->Load(newStr);
		sprintf_s(picload, "%d", rad);
		newStr = Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)picload);
		pictureBox1->Tag = newStr;

		label9->Text = "Press A btn after gen";

		//original code
		/*if (rad == 0)
		{
			pictureBox1->Load("pic_0.png");
			pictureBox1->Tag = "0";
		}
		if (rad == 1)
		{
			pictureBox1->Load("pic_1.png");
			pictureBox1->Tag = "1";
		}
		if (rad == 2)
		{
			pictureBox1->Load("pic_2.png");
			pictureBox1->Tag = "2";
		}*/
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//Check answer is Right
		String^ newstr = System::Convert::ToString(pictureBox1->Tag);
		if (newstr == "0")
		{
			if (textBox2->Text == "James" || textBox2->Text == "james")
			{
				VisibleSave();
			}
		}
		if (newstr == "1" || newstr == "2")
		{
			if (textBox2->Text == "Justin" || textBox2->Text == "justin")
			{
				VisibleSave();
			}
		}
	}
	};
}
