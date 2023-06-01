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
	/// Summary for AddBook
	/// </summary>
	public ref class AddBook : public System::Windows::Forms::Form
	{
	public:
		AddBook(void)
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
		~AddBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DateTimePicker^ dateTimeProduction;

	private: System::Windows::Forms::TextBox^ authorBox;

	private: System::Windows::Forms::TextBox^ nameBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::Button^ cancelButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddBook::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dateTimeProduction = (gcnew System::Windows::Forms::DateTimePicker());
			this->authorBox = (gcnew System::Windows::Forms::TextBox());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-6, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(665, 63);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(12, 7);
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
			this->label1->Location = System::Drawing::Point(68, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Book";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel2->Controls->Add(this->dateTimeProduction);
			this->panel2->Controls->Add(this->authorBox);
			this->panel2->Controls->Add(this->nameBox);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(-6, 59);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(662, 266);
			this->panel2->TabIndex = 1;
			// 
			// dateTimeProduction
			// 
			this->dateTimeProduction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->dateTimeProduction->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimeProduction->Location = System::Drawing::Point(338, 121);
			this->dateTimeProduction->MinDate = System::DateTime(1799, 1, 1, 0, 0, 0, 0);
			this->dateTimeProduction->Name = L"dateTimeProduction";
			this->dateTimeProduction->Size = System::Drawing::Size(289, 38);
			this->dateTimeProduction->TabIndex = 2;
			// 
			// authorBox
			// 
			this->authorBox->Font = (gcnew System::Drawing::Font(L"Calibri", 20));
			this->authorBox->Location = System::Drawing::Point(338, 71);
			this->authorBox->Name = L"authorBox";
			this->authorBox->Size = System::Drawing::Size(289, 40);
			this->authorBox->TabIndex = 1;
			// 
			// nameBox
			// 
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Calibri", 20));
			this->nameBox->Location = System::Drawing::Point(338, 17);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(289, 40);
			this->nameBox->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri Light", 24.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(307, 40);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Book Production Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri Light", 24.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(270, 40);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Book Author Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri Light", 24.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 40);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Book Name";
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Calibri", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveButton->Location = System::Drawing::Point(143, 244);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(139, 51);
			this->saveButton->TabIndex = 2;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &AddBook::saveButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Calibri", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelButton->Location = System::Drawing::Point(332, 244);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(139, 51);
			this->cancelButton->TabIndex = 2;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &AddBook::cancelButton_Click);
			// 
			// AddBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 320);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddBook";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddBook";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ bName = nameBox->Text;
		String^ bAuthor = authorBox->Text;

		try { 
			String^ connString = "Data Source=LAPTOP-FMP2G6PU\\SQLEXPRESS;Initial Catalog=library;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			
			String^ sqlQuery = "INSERT INTO addBook " + 
				"(bName, bAuthor) VALUES " + 
				"(@bName, @bAuthor);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@bName", bName);
			command.Parameters->AddWithValue("@bAuthor", bAuthor);

			command.ExecuteNonQuery();
			sqlConn.Close();
			MessageBox::Show("Add book successfully", "Success", MessageBoxButtons::OK);

			nameBox->Clear();
			authorBox->Clear();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to add book", "Register Failure", MessageBoxButtons::OK);
		}
	}
};
}
