#pragma once
#include <string>
namespace Vinil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// A container class for holding and displaying SongDirectories data.
	/// </summary>
	public ref class DirPathContainer : public System::Windows::Forms::Panel
	{
	public:
		DirPathContainer(){
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DirPathContainer()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ RemoveDirBtn;
	private: System::Windows::Forms::RichTextBox^ DirPath;

	protected:

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
			System::ComponentModel::ComponentResourceManager::ResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager::ResourceManager(L"Vinil.src.resx.DirPathContainer", System::Reflection::Assembly::GetExecutingAssembly()));
			this->RemoveDirBtn = (gcnew System::Windows::Forms::Button());
			this->DirPath = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// RemoveDirBtn
			// 
			this->RemoveDirBtn->AutoSize = true;
			this->RemoveDirBtn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->RemoveDirBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->RemoveDirBtn->Dock = System::Windows::Forms::DockStyle::Right;
			this->RemoveDirBtn->FlatAppearance->BorderSize = 0;
			this->RemoveDirBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RemoveDirBtn->ForeColor = System::Drawing::Color::White;
			this->RemoveDirBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RemoveDirBtn.Image")));
			this->RemoveDirBtn->Location = System::Drawing::Point(715, 0);
			this->RemoveDirBtn->Margin = System::Windows::Forms::Padding(0);
			this->RemoveDirBtn->Name = L"RemoveDirBtn";
			this->RemoveDirBtn->Size = System::Drawing::Size(38, 40);
			this->RemoveDirBtn->TabIndex = 7;
			this->RemoveDirBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->RemoveDirBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->RemoveDirBtn->UseVisualStyleBackColor = false;
			// 
			// DirPath
			// 
			this->DirPath->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->DirPath->DetectUrls = false;
			this->DirPath->Dock = System::Windows::Forms::DockStyle::Fill;
			this->DirPath->ForeColor = System::Drawing::SystemColors::Window;
			this->DirPath->Location = System::Drawing::Point(0, 0);
			this->DirPath->Multiline = false;
			this->DirPath->Name = L"DirPath";
			this->DirPath->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->DirPath->Size = System::Drawing::Size(715, 40);
			this->DirPath->TabIndex = 8;
			this->DirPath->Text = L"";
			this->DirPath->WordWrap = false;
			// 
			// DirPathContainer
			// 
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Controls->Add(this->DirPath);
			this->Controls->Add(this->RemoveDirBtn);
			this->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MinimumSize = System::Drawing::Size(200, 40);
			this->Size = System::Drawing::Size(753, 40);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String^ getPath_S() {
		return DirPath->Text;
	}

	public: std::string getPath_s() {
		return	(const char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(DirPath->Text)).ToPointer();
	}
	public: Void setPath_S(String^ path) {

	}
	public: void setPath_s(std::string* path) {
		this->DirPath->Text = gcnew String(path->c_str());
	}
	};
}
