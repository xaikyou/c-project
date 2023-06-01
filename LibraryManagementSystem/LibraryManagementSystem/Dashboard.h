#pragma once
#include "AddBook.h"
#include "ViewBooks.h"
#include "AddStudent.h"
#include "viewStudent.h"

namespace LibraryManagementSystem {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ booksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addNewBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewBookToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ studentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ returnBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ returnBookToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->booksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->returnBookToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->returnBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->booksToolStripMenuItem,
					this->studentsToolStripMenuItem, this->returnBookToolStripMenuItem1, this->returnBookToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 58);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// booksToolStripMenuItem
			// 
			this->booksToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addNewBookToolStripMenuItem,
					this->viewBookToolStripMenuItem
			});
			this->booksToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->booksToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"booksToolStripMenuItem.Image")));
			this->booksToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->booksToolStripMenuItem->Name = L"booksToolStripMenuItem";
			this->booksToolStripMenuItem->Padding = System::Windows::Forms::Padding(50, 0, 10, 0);
			this->booksToolStripMenuItem->Size = System::Drawing::Size(174, 54);
			this->booksToolStripMenuItem->Text = L"Books";
			// 
			// addNewBookToolStripMenuItem
			// 
			this->addNewBookToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addNewBookToolStripMenuItem.Image")));
			this->addNewBookToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->addNewBookToolStripMenuItem->Name = L"addNewBookToolStripMenuItem";
			this->addNewBookToolStripMenuItem->Size = System::Drawing::Size(237, 56);
			this->addNewBookToolStripMenuItem->Text = L"Add New Book";
			this->addNewBookToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::addNewBookToolStripMenuItem_Click);
			// 
			// viewBookToolStripMenuItem
			// 
			this->viewBookToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"viewBookToolStripMenuItem.Image")));
			this->viewBookToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->viewBookToolStripMenuItem->Name = L"viewBookToolStripMenuItem";
			this->viewBookToolStripMenuItem->Size = System::Drawing::Size(237, 56);
			this->viewBookToolStripMenuItem->Text = L"View Books";
			this->viewBookToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::viewBookToolStripMenuItem_Click);
			// 
			// studentsToolStripMenuItem
			// 
			this->studentsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addStudentToolStripMenuItem,
					this->viewStudentToolStripMenuItem
			});
			this->studentsToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->studentsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"studentsToolStripMenuItem.Image")));
			this->studentsToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->studentsToolStripMenuItem->Name = L"studentsToolStripMenuItem";
			this->studentsToolStripMenuItem->Padding = System::Windows::Forms::Padding(50, 0, 4, 0);
			this->studentsToolStripMenuItem->Size = System::Drawing::Size(192, 54);
			this->studentsToolStripMenuItem->Text = L"Students";
			// 
			// addStudentToolStripMenuItem
			// 
			this->addStudentToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addStudentToolStripMenuItem.Image")));
			this->addStudentToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->addStudentToolStripMenuItem->Name = L"addStudentToolStripMenuItem";
			this->addStudentToolStripMenuItem->Size = System::Drawing::Size(225, 56);
			this->addStudentToolStripMenuItem->Text = L"Add Student";
			this->addStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::addStudentToolStripMenuItem_Click);
			// 
			// viewStudentToolStripMenuItem
			// 
			this->viewStudentToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"viewStudentToolStripMenuItem.Image")));
			this->viewStudentToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->viewStudentToolStripMenuItem->Name = L"viewStudentToolStripMenuItem";
			this->viewStudentToolStripMenuItem->Size = System::Drawing::Size(225, 56);
			this->viewStudentToolStripMenuItem->Text = L"View Student";
			this->viewStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::viewStudentToolStripMenuItem_Click);
			// 
			// returnBookToolStripMenuItem1
			// 
			this->returnBookToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->returnBookToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"returnBookToolStripMenuItem1.Image")));
			this->returnBookToolStripMenuItem1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->returnBookToolStripMenuItem1->Name = L"returnBookToolStripMenuItem1";
			this->returnBookToolStripMenuItem1->Padding = System::Windows::Forms::Padding(50, 0, 4, 0);
			this->returnBookToolStripMenuItem1->Size = System::Drawing::Size(222, 54);
			this->returnBookToolStripMenuItem1->Text = L"Return Book";
			// 
			// returnBookToolStripMenuItem
			// 
			this->returnBookToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->returnBookToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"returnBookToolStripMenuItem.Image")));
			this->returnBookToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->returnBookToolStripMenuItem->Name = L"returnBookToolStripMenuItem";
			this->returnBookToolStripMenuItem->Padding = System::Windows::Forms::Padding(50, 0, 4, 0);
			this->returnBookToolStripMenuItem->Size = System::Drawing::Size(205, 54);
			this->returnBookToolStripMenuItem->Text = L"Lend Book";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Padding = System::Windows::Forms::Padding(75, 0, 4, 0);
			this->exitToolStripMenuItem->Size = System::Drawing::Size(174, 54);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::exitToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 536);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure want to exit?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}


private: System::Void addNewBookToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddBook^ addBook = gcnew AddBook();
	addBook->ShowDialog();
}
private: System::Void viewBookToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewBooks^ viewBooks = gcnew ViewBooks();
	viewBooks->ShowDialog();
}
private: System::Void addStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddStudent^ addStudent = gcnew AddStudent();
	addStudent->ShowDialog();
}

private: System::Void viewStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	viewStudent^ viewStu = gcnew viewStudent();
	viewStu->ShowDialog();
}
};
}
