#pragma once
#include <fileref.h>
#include "MusicOperator.h"

namespace Vinil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SongContainer
	/// </summary>
	public ref class SongContainer : public System::Windows::Forms::TableLayoutPanel
	{
	public:
		SongContainer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
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
	private: System::Windows::Forms::CheckBox^ SongCheckBox;
	private: System::Windows::Forms::Button^ SongPlayButton;
	private: System::Windows::Forms::Label^ SongTitle;
	private: System::Windows::Forms::Label^ SongAuthor;
	private: System::Windows::Forms::Label^ SongDuration;
	private: System::String^ path;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SongContainer::typeid));
			//this = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SongCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->SongPlayButton = (gcnew System::Windows::Forms::Button());
			this->SongTitle = (gcnew System::Windows::Forms::Label());
			this->SongAuthor = (gcnew System::Windows::Forms::Label());
			this->SongDuration = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			//this->BackColor = System::Drawing::Color::Black;
			//this->ColumnCount = 5;
			//this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			//	9.090909F)));
			//this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			//	18.18182F)));
			//this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			//	22.72727F)));
			//this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			//	22.72727F)));
			//this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			//	27.27273F)));
			//this->Controls->Add(this->SongCheckBox, 0, 0);
			//this->Controls->Add(this->SongPlayButton, 1, 0);
			//this->Controls->Add(this->SongTitle, 2, 0);
			//this->Controls->Add(this->SongAuthor, 3, 0);
			//this->Controls->Add(this->SongDuration, 4, 0);
			//this->Dock = System::Windows::Forms::DockStyle::Fill;
			//this->Location = System::Drawing::Point(0, 0);
			//this->Name = L"tableLayoutPanel1";
			//this->RowCount = 1;
			//this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			//this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			//this->Size = System::Drawing::Size(486, 68);
			//this->TabIndex = 0;	


			// 
			// SongCheckBox
			// 
			this->SongCheckBox->AutoSize = true;
			this->SongCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->SongCheckBox->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SongCheckBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongCheckBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SongCheckBox->ForeColor = System::Drawing::Color::White;
			this->SongCheckBox->Location = System::Drawing::Point(3, 3);
			this->SongCheckBox->Name = L"SongCheckBox";
			this->SongCheckBox->Size = System::Drawing::Size(38, 62);
			this->SongCheckBox->TabIndex = 0;
			this->SongCheckBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SongCheckBox->UseVisualStyleBackColor = false;
			// 
			// SongPlayButton
			// 
			this->SongPlayButton->BackColor = System::Drawing::Color::Transparent;
			this->SongPlayButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongPlayButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SongPlayButton->ForeColor = System::Drawing::Color::White;
			this->SongPlayButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SongPlayButton.Image")));
			this->SongPlayButton->Location = System::Drawing::Point(47, 3);
			this->SongPlayButton->Name = L"SongPlayButton";
			this->SongPlayButton->Size = System::Drawing::Size(82, 62);
			this->SongPlayButton->TabIndex = 1;
			this->SongPlayButton->Click += gcnew System::EventHandler(this, &SongContainer::SongPlayButton_Click);
			this->SongPlayButton->UseVisualStyleBackColor = false;
			// 
			// SongTitle
			// 
			this->SongTitle->AutoSize = true;
			this->SongTitle->BackColor = System::Drawing::Color::Transparent;
			this->SongTitle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongTitle->ForeColor = System::Drawing::Color::White;
			this->SongTitle->Location = System::Drawing::Point(135, 0);
			this->SongTitle->Name = L"SongTitle";
			this->SongTitle->Size = System::Drawing::Size(104, 68);
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
			this->SongAuthor->Location = System::Drawing::Point(245, 0);
			this->SongAuthor->Name = L"SongAuthor";
			this->SongAuthor->Size = System::Drawing::Size(104, 68);
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
			this->SongDuration->Location = System::Drawing::Point(355, 0);
			this->SongDuration->Name = L"SongDuration";
			this->SongDuration->Size = System::Drawing::Size(128, 68);
			this->SongDuration->TabIndex = 4;
			this->SongDuration->Text = L"Duration";
			this->SongDuration->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// SongContainer
			// 
			//this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			//this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->ClientSize = System::Drawing::Size(486, 68);
			this->BackColor = System::Drawing::Color::Transparent;
			this->ColumnCount = 5;
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25.0F)));
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25.0F)));
			this->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->Controls->Add(this->SongCheckBox, 0, 0);
			this->Controls->Add(this->SongPlayButton, 1, 0);
			this->Controls->Add(this->SongTitle, 2, 0);
			this->Controls->Add(this->SongAuthor, 3, 0);
			this->Controls->Add(this->SongDuration, 4, 0);
			this->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Location = System::Drawing::Point(0, 0);
			this->RowCount = 1;
			this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->Size = System::Drawing::Size(486, 50);
			this->TabIndex = 0;
			this->Name = L"SongContainer";
			this->Text = L"SongContainer";
			this->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Void SetData(std::string* path) {
		TagLib::FileRef FR(path->c_str());
		if (!FR.isNull() && !FR.tag()->title().isEmpty() && FR.audioProperties() != nullptr) {
			TagLib::FileRef* FR_p = &FR;
			this->SongTitle->Text = gcnew String(FR_p->tag()->title().toCString());
			this->SongAuthor->Text = gcnew String(FR_p->tag()->artist().toCString());
			int seconds = FR_p->audioProperties()->lengthInSeconds() % 60;
			int minutes = (FR_p->audioProperties()->lengthInSeconds() - seconds) / 60;
			this->SongDuration->Text = gcnew String(minutes + ":" + seconds);
			this->path = gcnew String(path->c_str());
		}
	}
	private: System::Void SongPlayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MusicOperator::PlayFromPath((char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->path)).ToPointer());
	}
	};
}
