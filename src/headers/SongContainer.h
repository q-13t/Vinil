﻿#pragma once
#include <fileref.h>
#include "MusicOperator.h"
#include "DataOperator.h"

namespace Vinil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// A container class for holding and displaying song data.
	/// </summary>
	public ref class SongContainer : public System::Windows::Forms::TableLayoutPanel {
	public:
		SongContainer(void) {
			InitializeComponent();
		}

		/// <param name="path">Full std::string path to the song</param>
		SongContainer(std::string* path) {
			InitializeComponent();
			SetData(path);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SongContainer()
		{
			if (components)
			{
				delete components;
			}
		}
		//private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	public: System::Windows::Forms::CheckBox^ SongCheckBox;
	public: System::Windows::Forms::Button^ SongPlayButton;
	public: System::Windows::Forms::Label^ SongTitle;
	public: System::Windows::Forms::Label^ SongAuthor;
	public: System::Windows::Forms::Label^ SongDuration;
	public: System::String^ path;
	public: TagLib::FileRef* FR;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager::ResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager::ResourceManager(L"Vinil.src.resx.SongContainer", System::Reflection::Assembly::GetExecutingAssembly()));
			this->SongCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->SongPlayButton = (gcnew System::Windows::Forms::Button());
			this->SongTitle = (gcnew System::Windows::Forms::Label());
			this->SongAuthor = (gcnew System::Windows::Forms::Label());
			this->SongDuration = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// SongCheckBox
			// 
			this->SongCheckBox->AutoSize = true;
			this->SongCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->SongCheckBox->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SongCheckBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongCheckBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SongCheckBox->ForeColor = System::Drawing::Color::Black;
			this->SongCheckBox->Location = System::Drawing::Point(3, 3);
			this->SongCheckBox->Name = L"SongCheckBox";
			this->SongCheckBox->Size = System::Drawing::Size(44, 44);
			this->SongCheckBox->TabIndex = 0;
			this->SongCheckBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SongCheckBox->UseVisualStyleBackColor = false;
			this->SongCheckBox->CheckedChanged += gcnew System::EventHandler(this, &SongContainer::SongCheckBox_CheckedChanged);
			// 
			// SongPlayButton
			// 
			this->SongPlayButton->BackColor = System::Drawing::Color::Transparent;
			this->SongPlayButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongPlayButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SongPlayButton->ForeColor = System::Drawing::Color::White;
			this->SongPlayButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SongPlayButton.Image")));
			this->SongPlayButton->Location = System::Drawing::Point(53, 3);
			this->SongPlayButton->Name = L"SongPlayButton";
			this->SongPlayButton->Size = System::Drawing::Size(44, 44);
			this->SongPlayButton->TabIndex = 1;
			this->SongPlayButton->UseVisualStyleBackColor = false;
			this->SongPlayButton->Click += gcnew System::EventHandler(this, &SongContainer::SongPlayButton_Click);
			// 
			// SongTitle
			// 
			this->SongTitle->AutoSize = true;
			this->SongTitle->BackColor = System::Drawing::Color::Transparent;
			this->SongTitle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongTitle->ForeColor = System::Drawing::Color::White;
			this->SongTitle->Location = System::Drawing::Point(103, 0);
			this->SongTitle->Name = L"SongTitle";
			this->SongTitle->Size = System::Drawing::Size(162, 50);
			this->SongTitle->TabIndex = 2;
			this->SongTitle->Text = L"Title";
			this->SongTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// SongAuthor
			// 
			this->SongAuthor->AutoSize = true;
			this->SongAuthor->BackColor = System::Drawing::Color::Transparent;
			this->SongAuthor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongAuthor->ForeColor = System::Drawing::Color::White;
			this->SongAuthor->Location = System::Drawing::Point(271, 0);
			this->SongAuthor->Name = L"SongAuthor";
			this->SongAuthor->Size = System::Drawing::Size(162, 50);
			this->SongAuthor->TabIndex = 3;
			this->SongAuthor->Text = L"Author";
			this->SongAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// SongDuration
			// 
			this->SongDuration->AutoSize = true;
			this->SongDuration->BackColor = System::Drawing::Color::Transparent;
			this->SongDuration->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongDuration->ForeColor = System::Drawing::Color::White;
			this->SongDuration->Location = System::Drawing::Point(439, 0);
			this->SongDuration->Name = L"SongDuration";
			this->SongDuration->Size = System::Drawing::Size(44, 50);
			this->SongDuration->TabIndex = 4;
			this->SongDuration->Text = L"Duration";
			this->SongDuration->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// SongContainer
			// 
			this->BackColor = System::Drawing::Color::Transparent;
			this->ColumnCount = 5;
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->Controls->Add(this->SongCheckBox, 0, 0);
			this->Controls->Add(this->SongPlayButton, 1, 0);
			this->Controls->Add(this->SongTitle, 2, 0);
			this->Controls->Add(this->SongAuthor, 3, 0);
			this->Controls->Add(this->SongDuration, 4, 0);
			this->Dock = System::Windows::Forms::DockStyle::Top;
			this->RowCount = 1;
			this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->Size = System::Drawing::Size(486, 50);
			this->Text = L"SongContainer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/// <summary>
		/// Sets Data for this instance of song Container.
		/// </summary>
		/// <param name="path"></param>
	private: Void SetData(std::string* path) {
		TagLib::FileRef FR(path->c_str());
		if (!FR.isNull() && !FR.tag()->title().isEmpty() && FR.audioProperties() != nullptr) {
			TagLib::FileRef* FR_p = &FR;
			this->SongTitle->Text = gcnew String(FR_p->tag()->title().toCString());
			this->SongAuthor->Text = gcnew String(FR_p->tag()->artist().toCString());
			int seconds = FR_p->audioProperties()->lengthInSeconds() % 60;
			int minutes = (FR_p->audioProperties()->lengthInSeconds() - seconds) / 60;
			this->SongDuration->Text = minutes + ":" + ((seconds > 10) ? seconds + "" : "0" + seconds);
			this->path = gcnew String(path->c_str());
			this->FR = FR_p;
		}
	}
		   //////////////////////////////////////////////////////////////////////////////////////////
		   //Controlls
		   //////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void SongPlayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MusicOperator::PlayFromPath((char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->path)).ToPointer());
	}
	public: System::Void SongCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (sender->GetType()->Equals(CheckBox::typeid)) {
			char* path = (char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->path)).ToPointer();
			if (SongCheckBox->Checked) {
				DataOperator::getCheckedSongs()->push_back(path);
			}
			else {
				DataOperator::getCheckedSongs()->erase(std::find(DataOperator::getCheckedSongs()->begin(), DataOperator::getCheckedSongs()->end(), path));
			}
		}
	}
		  //////////////////////////////////////////////////////////////////////////////////////////
		  //Misc
		  //////////////////////////////////////////////////////////////////////////////////////////
	public: char* getPath() {
		return (char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->path)).ToPointer();
	}
	public: TagLib::FileRef* getFileRef() {
		return FR;
	}

	public: System::String^ getTitle() {
		return SongTitle->Text;
	}
	public: System::String^ getAuthor() {
		return SongAuthor->Text;
	}
	};
}
