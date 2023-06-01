#pragma once

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AddStudent
	/// </summary>
	public ref class AddStudent : public System::Windows::Forms::Form
	{
	public:
		AddStudent(void)
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
		~AddStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ phoneBox;

	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ nameBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ idBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::ComboBox^ semesterBox;
	private: System::Windows::Forms::ComboBox^ departmentBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudent::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->phoneBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->idBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->departmentBox = (gcnew System::Windows::Forms::ComboBox());
			this->semesterBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(12, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 46);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Student";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-6, -4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(664, 67);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->semesterBox);
			this->panel2->Controls->Add(this->departmentBox);
			this->panel2->Controls->Add(this->cancelButton);
			this->panel2->Controls->Add(this->saveButton);
			this->panel2->Controls->Add(this->phoneBox);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->nameBox);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->idBox);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(-6, 62);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(661, 348);
			this->panel2->TabIndex = 2;
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::Color::PaleTurquoise;
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Calibri", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelButton->Location = System::Drawing::Point(344, 266);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(139, 51);
			this->cancelButton->TabIndex = 4;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &AddStudent::cancelButton_Click);
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::PaleTurquoise;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Calibri", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveButton->Location = System::Drawing::Point(155, 266);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(139, 51);
			this->saveButton->TabIndex = 5;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &AddStudent::saveButton_Click);
			// 
			// phoneBox
			// 
			this->phoneBox->Font = (gcnew System::Drawing::Font(L"Calibri", 20));
			this->phoneBox->Location = System::Drawing::Point(344, 206);
			this->phoneBox->Name = L"phoneBox";
			this->phoneBox->Size = System::Drawing::Size(289, 40);
			this->phoneBox->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri Light", 24.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 40);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Phone";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri Light", 24.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 40);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Semester";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri Light", 24.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 40);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Department";
			// 
			// nameBox
			// 
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Calibri", 20));
			this->nameBox->Location = System::Drawing::Point(344, 68);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(289, 40);
			this->nameBox->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri Light", 24.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 40);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Name";
			// 
			// idBox
			// 
			this->idBox->Font = (gcnew System::Drawing::Font(L"Calibri", 20));
			this->idBox->Location = System::Drawing::Point(344, 22);
			this->idBox->Name = L"idBox";
			this->idBox->Size = System::Drawing::Size(289, 40);
			this->idBox->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri Light", 24.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 40);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Id";
			// 
			// departmentBox
			// 
			this->departmentBox->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departmentBox->FormattingEnabled = true;
			this->departmentBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Infomatics Technology", L"Mathematics - Infomatics",
					L"Chemistry", L"Physics", L"Enviroment"
			});
			this->departmentBox->Location = System::Drawing::Point(344, 113);
			this->departmentBox->Name = L"departmentBox";
			this->departmentBox->Size = System::Drawing::Size(289, 41);
			this->departmentBox->TabIndex = 6;
			// 
			// semesterBox
			// 
			this->semesterBox->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->semesterBox->FormattingEnabled = true;
			this->semesterBox->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14"
			});
			this->semesterBox->Location = System::Drawing::Point(344, 159);
			this->semesterBox->Name = L"semesterBox";
			this->semesterBox->Size = System::Drawing::Size(289, 41);
			this->semesterBox->TabIndex = 6;
			// 
			// AddStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 400);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddStudent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddStudent";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sId = idBox->Text;
	String^ sName = nameBox->Text;
	String^ sDepartment = departmentBox->Text;
	String^ sSemester = semesterBox->Text;
	String^ sPhone = phoneBox->Text;

	try
	{
		String^ connString = "Data Source=LAPTOP-FMP2G6PU\\SQLEXPRESS;Initial Catalog=library;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO addStudent " +
			"(Id, Name, Department, Semester, Phone) VALUES " +
			"(@sId, @sName, @sDepartment, @sSemester, @sPhone);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@sId", sId);
		command.Parameters->AddWithValue("@sName", sName);
		command.Parameters->AddWithValue("@sDepartment", sDepartment);
		command.Parameters->AddWithValue("@sSemester", sSemester);
		command.Parameters->AddWithValue("@sPhone", sPhone);

		command.ExecuteNonQuery();
		sqlConn.Close();
		MessageBox::Show("Add student successfully", "Success", MessageBoxButtons::OK);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to add student", "Register Failure", MessageBoxButtons::OK);
	}
}
};
}
