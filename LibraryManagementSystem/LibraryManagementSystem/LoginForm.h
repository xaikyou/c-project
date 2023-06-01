#pragma once
#include "Dashboard.h"

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ userBox;
	private: System::Windows::Forms::TextBox^ passBox;
	protected:


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Button^ signinButton;
	private: System::Windows::Forms::Button^ closeButton;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->userBox = (gcnew System::Windows::Forms::TextBox());
			this->passBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->signinButton = (gcnew System::Windows::Forms::Button());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(150, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(146, 133);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// userBox
			// 
			this->userBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->userBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->userBox->Font = (gcnew System::Drawing::Font(L"Calibri", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userBox->ForeColor = System::Drawing::Color::White;
			this->userBox->Location = System::Drawing::Point(142, 204);
			this->userBox->Name = L"userBox";
			this->userBox->Size = System::Drawing::Size(229, 41);
			this->userBox->TabIndex = 1;
			this->userBox->Text = L"username";
			this->userBox->Click += gcnew System::EventHandler(this, &LoginForm::userBox_Click);
			// 
			// passBox
			// 
			this->passBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->passBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passBox->Font = (gcnew System::Drawing::Font(L"Calibri", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passBox->ForeColor = System::Drawing::Color::White;
			this->passBox->Location = System::Drawing::Point(142, 283);
			this->passBox->Name = L"passBox";
			this->passBox->Size = System::Drawing::Size(229, 41);
			this->passBox->TabIndex = 1;
			this->passBox->Text = L"password";
			this->passBox->UseSystemPasswordChar = true;
			this->passBox->Click += gcnew System::EventHandler(this, &LoginForm::passBox_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(131, 248);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(240, 3);
			this->panel1->TabIndex = 2;
			this->panel1->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(131, 327);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(240, 3);
			this->panel2->TabIndex = 2;
			this->panel2->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(70, 196);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(55, 55);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(70, 275);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(55, 55);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->loginButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->loginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginButton->FlatAppearance->BorderSize = 0;
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Calibri", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->Location = System::Drawing::Point(76, 363);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(295, 49);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &LoginForm::loginButton_Click);
			// 
			// signinButton
			// 
			this->signinButton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->signinButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signinButton->FlatAppearance->BorderSize = 0;
			this->signinButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signinButton->Font = (gcnew System::Drawing::Font(L"Calibri", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signinButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->signinButton->Location = System::Drawing::Point(76, 438);
			this->signinButton->Name = L"signinButton";
			this->signinButton->Size = System::Drawing::Size(295, 49);
			this->signinButton->TabIndex = 4;
			this->signinButton->Text = L"Sign in";
			this->signinButton->UseVisualStyleBackColor = false;
			this->signinButton->Click += gcnew System::EventHandler(this, &LoginForm::signinButton_Click);
			// 
			// closeButton
			// 
			this->closeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->closeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->closeButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->closeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->closeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->closeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->closeButton->ForeColor = System::Drawing::Color::White;
			this->closeButton->Location = System::Drawing::Point(410, 5);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(36, 37);
			this->closeButton->TabIndex = 5;
			this->closeButton->Text = L"X";
			this->closeButton->UseVisualStyleBackColor = false;
			this->closeButton->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->ClientSize = System::Drawing::Size(450, 550);
			this->Controls->Add(this->closeButton);
			this->Controls->Add(this->signinButton);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->passBox);
			this->Controls->Add(this->userBox);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}


private: System::Void userBox_Click(System::Object^ sender, System::EventArgs^ e) {
	if (userBox->Text == "username")
	{
		userBox->Clear();
	}
}

private: System::Void passBox_Click(System::Object^ sender, System::EventArgs^ e) {
	if (passBox->Text == "password")
	{
		passBox->Clear();
	}
}
private: System::Void otherClick(System::Object^ sender, System::EventArgs^ e) {
	if (userBox->Text == "")
	{
		userBox->Text = "username";
	}
	if (passBox->Text == "")
	{
		passBox->Text = "password";
	}
}
private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = userBox->Text;
	String^ password = passBox->Text;

	String^ connString = "Data Source=LAPTOP-FMP2G6PU\\SQLEXPRESS;Initial Catalog=library;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	

	sqlConn.Close();
}
private: System::Void signinButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = userBox->Text;
	String^ password = passBox->Text;

	String^ connString = "Data Source=LAPTOP-FMP2G6PU\\SQLEXPRESS;Initial Catalog=library;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();
	String^ sqlQuery = "INSERT INTO loginAccount " +
		"(username, password) VALUES " +
		"(@username, @password);";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@username", username);
	command.Parameters->AddWithValue("@password", password);

	command.ExecuteNonQuery();
	sqlConn.Close();
	MessageBox::Show("Add book successfully", "Success", MessageBoxButtons::OK);

	userBox->Clear();
	passBox->Clear();
}
};
}
