#pragma once
#include <string>
namespace Vinil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class PlayListContainer : public System::Windows::Forms::Button
	{
	public:
		PlayListContainer(std::string* playlistname)
		{
			InitializeComponent();
			auto formated = (gcnew String(playlistname->c_str()))->Replace(".txt", "");
			this->Text = formated;
			this->Name = formated;
		}
	protected:
		~PlayListContainer()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayListContainer::typeid));
			this->SuspendLayout();
			// 
			// PlayListContainer
			// 
			this->Dock = System::Windows::Forms::DockStyle::Top;
			this->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.Image")));
			this->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Name = L"button1";
			this->Text = L"123";
			this->UseVisualStyleBackColor = true;
			this->Height = 40;
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
