#pragma once
//#include "iostream"
//#include "DataOperator.h"
//#include "SongContainer.h"
#include <iostream>
//#include <filesystem>
#include <vector>
#include <fileref.h>

namespace Vinil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading::Tasks;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::Button^ settings_button;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ SongListBtn;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::SplitContainer^ splitContainer4;
	private: System::Windows::Forms::SplitContainer^ splitContainer5;
	private: System::Windows::Forms::TrackBar^ VolumeSlider;
	private: System::Windows::Forms::Button^ MuteButton;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ProgressBar^ SongProgress;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel4;
		   //private: System::Windows::Forms::TableLayoutPanel^ LinearLayoutSongContainer;


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ AddDirButton;
	private: System::Windows::Forms::TableLayoutPanel^ LinearLayoutDirContainer;
	private: System::Windows::Forms::Panel^ SettingPanel;

	private: System::Windows::Forms::Button^ SaveDirsButton;
	private: System::Windows::Forms::Panel^ SongsPanel;
	private: System::Windows::Forms::TextBox^ PlaylistNameTextArea;

	private: System::Windows::Forms::ComboBox^ SongSortComboBox;

	private: System::Windows::Forms::Button^ SavePlayListButton;
	private: System::Windows::Forms::TableLayoutPanel^ MainSongLinearLayout;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		bool muted=false;
		System::ComponentModel::Container^ components;
		ComponentResourceManager^ res;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			res = resources;
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->settings_button = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SongListBtn = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SongsPanel = (gcnew System::Windows::Forms::Panel());
			this->PlaylistNameTextArea = (gcnew System::Windows::Forms::TextBox());
			this->SongSortComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SavePlayListButton = (gcnew System::Windows::Forms::Button());
			this->MainSongLinearLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SettingPanel = (gcnew System::Windows::Forms::Panel());
			this->AddDirButton = (gcnew System::Windows::Forms::Button());
			this->SaveDirsButton = (gcnew System::Windows::Forms::Button());
			this->LinearLayoutDirContainer = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SongProgress = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->VolumeSlider = (gcnew System::Windows::Forms::TrackBar());
			this->MuteButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SongsPanel->SuspendLayout();
			this->SettingPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VolumeSlider))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::Transparent;
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			this->splitContainer1->Panel1MinSize = 50;
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer4);
			this->splitContainer1->Panel2->Controls->Add(this->panel2);
			this->splitContainer1->Panel2MinSize = 50;
			this->splitContainer1->Size = System::Drawing::Size(1155, 595);
			this->splitContainer1->SplitterDistance = 544;
			this->splitContainer1->SplitterWidth = 1;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer2->IsSplitterFixed = true;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->splitContainer2->Panel1->Controls->Add(this->panel1);
			this->splitContainer2->Panel1->Controls->Add(this->settings_button);
			this->splitContainer2->Panel1->Controls->Add(this->flowLayoutPanel1);
			this->splitContainer2->Panel1->Tag = L"Tag1";
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->SongsPanel);
			this->splitContainer2->Panel2->Controls->Add(this->SettingPanel);
			this->splitContainer2->Size = System::Drawing::Size(1155, 544);
			this->splitContainer2->SplitterDistance = 320;
			this->splitContainer2->SplitterWidth = 1;
			this->splitContainer2->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 232);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(320, 274);
			this->panel1->TabIndex = 5;
			// 
			// settings_button
			// 
			this->settings_button->AutoSize = true;
			this->settings_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->settings_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->settings_button->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->settings_button->FlatAppearance->BorderSize = 0;
			this->settings_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settings_button->ForeColor = System::Drawing::Color::White;
			this->settings_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"settings_button.Image")));
			this->settings_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->settings_button->Location = System::Drawing::Point(0, 506);
			this->settings_button->Margin = System::Windows::Forms::Padding(0);
			this->settings_button->Name = L"settings_button";
			this->settings_button->Size = System::Drawing::Size(320, 38);
			this->settings_button->TabIndex = 4;
			this->settings_button->Text = L"Where To Search";
			this->settings_button->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->settings_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->settings_button->UseVisualStyleBackColor = false;
			this->settings_button->Click += gcnew System::EventHandler(this, &MainForm::settings_button_Click);
			this->settings_button->MouseEnter += gcnew System::EventHandler(this, &MainForm::MouseEnter);
			this->settings_button->MouseLeave += gcnew System::EventHandler(this, &MainForm::MouseLeave);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel1->Controls->Add(this->textBox1);
			this->flowLayoutPanel1->Controls->Add(this->SongListBtn);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(320, 145);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->WrapContents = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseEnter += gcnew System::EventHandler(this, &MainForm::MouseEnter);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &MainForm::MouseLeave);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->Location = System::Drawing::Point(0, 56);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(320, 13);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Search";
			// 
			// SongListBtn
			// 
			this->SongListBtn->AutoSize = true;
			this->SongListBtn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SongListBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->SongListBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->SongListBtn->FlatAppearance->BorderSize = 0;
			this->SongListBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SongListBtn->ForeColor = System::Drawing::Color::White;
			this->SongListBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SongListBtn.Image")));
			this->SongListBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SongListBtn->Location = System::Drawing::Point(0, 69);
			this->SongListBtn->Margin = System::Windows::Forms::Padding(0);
			this->SongListBtn->Name = L"SongListBtn";
			this->SongListBtn->Size = System::Drawing::Size(320, 38);
			this->SongListBtn->TabIndex = 5;
			this->SongListBtn->Text = L"My Music";
			this->SongListBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SongListBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->SongListBtn->UseVisualStyleBackColor = false;
			this->SongListBtn->Click += gcnew System::EventHandler(this, &MainForm::SongListBtn_Click);
			this->SongListBtn->MouseEnter += gcnew System::EventHandler(this, &MainForm::MouseEnter);
			this->SongListBtn->MouseLeave += gcnew System::EventHandler(this, &MainForm::MouseLeave);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->button5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 107);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(320, 38);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Recent Plays";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->MouseEnter += gcnew System::EventHandler(this, &MainForm::MouseEnter);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &MainForm::MouseLeave);
			// 
			// SongsPanel
			// 
			this->SongsPanel->Controls->Add(this->PlaylistNameTextArea);
			this->SongsPanel->Controls->Add(this->SongSortComboBox);
			this->SongsPanel->Controls->Add(this->SavePlayListButton);
			this->SongsPanel->Controls->Add(this->MainSongLinearLayout);
			this->SongsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongsPanel->Location = System::Drawing::Point(0, 0);
			this->SongsPanel->Name = L"SongsPanel";
			this->SongsPanel->Size = System::Drawing::Size(834, 544);
			this->SongsPanel->TabIndex = 8;
			// 
			// PlaylistNameTextArea
			// 
			this->PlaylistNameTextArea->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->PlaylistNameTextArea->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PlaylistNameTextArea->Enabled = false;
			this->PlaylistNameTextArea->ForeColor = System::Drawing::Color::White;
			this->PlaylistNameTextArea->Location = System::Drawing::Point(143, 30);
			this->PlaylistNameTextArea->Name = L"PlaylistNameTextArea";
			this->PlaylistNameTextArea->Size = System::Drawing::Size(254, 20);
			this->PlaylistNameTextArea->TabIndex = 3;
			// 
			// SongSortComboBox
			// 
			this->SongSortComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->SongSortComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SongSortComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SongSortComboBox->ForeColor = System::Drawing::Color::White;
			this->SongSortComboBox->FormattingEnabled = true;
			this->SongSortComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Title", L"Author", L"Date Added" });
			this->SongSortComboBox->Location = System::Drawing::Point(16, 29);
			this->SongSortComboBox->Name = L"SongSortComboBox";
			this->SongSortComboBox->Size = System::Drawing::Size(121, 21);
			this->SongSortComboBox->TabIndex = 2;
			// 
			// SavePlayListButton
			// 
			this->SavePlayListButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->SavePlayListButton->Enabled = false;
			this->SavePlayListButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SavePlayListButton->ForeColor = System::Drawing::Color::White;
			this->SavePlayListButton->Location = System::Drawing::Point(403, 28);
			this->SavePlayListButton->Name = L"SavePlayListButton";
			this->SavePlayListButton->Size = System::Drawing::Size(75, 23);
			this->SavePlayListButton->TabIndex = 1;
			this->SavePlayListButton->Text = L"Save Playlist";
			this->SavePlayListButton->UseVisualStyleBackColor = false;
			// 
			// MainSongLinearLayout
			// 
			this->MainSongLinearLayout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MainSongLinearLayout->AutoScroll = true;
			this->MainSongLinearLayout->ColumnCount = 1;
			this->MainSongLinearLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->MainSongLinearLayout->Location = System::Drawing::Point(15, 56);
			this->MainSongLinearLayout->Margin = System::Windows::Forms::Padding(0);
			this->MainSongLinearLayout->Name = L"MainSongLinearLayout";
			this->MainSongLinearLayout->Padding = System::Windows::Forms::Padding(3);
			this->MainSongLinearLayout->RowCount = 1;
			this->MainSongLinearLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->MainSongLinearLayout->Size = System::Drawing::Size(807, 479);
			this->MainSongLinearLayout->TabIndex = 0;
			// 
			// SettingPanel
			// 
			this->SettingPanel->Controls->Add(this->AddDirButton);
			this->SettingPanel->Controls->Add(this->SaveDirsButton);
			this->SettingPanel->Controls->Add(this->LinearLayoutDirContainer);
			this->SettingPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SettingPanel->Location = System::Drawing::Point(0, 0);
			this->SettingPanel->Name = L"SettingPanel";
			this->SettingPanel->Size = System::Drawing::Size(834, 544);
			this->SettingPanel->TabIndex = 0;
			this->SettingPanel->Visible = false;
			// 
			// AddDirButton
			// 
			this->AddDirButton->AutoSize = true;
			this->AddDirButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AddDirButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->AddDirButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->AddDirButton->FlatAppearance->BorderSize = 0;
			this->AddDirButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddDirButton->ForeColor = System::Drawing::Color::White;
			this->AddDirButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddDirButton.Image")));
			this->AddDirButton->Location = System::Drawing::Point(0, 468);
			this->AddDirButton->Margin = System::Windows::Forms::Padding(0);
			this->AddDirButton->Name = L"AddDirButton";
			this->AddDirButton->Size = System::Drawing::Size(834, 38);
			this->AddDirButton->TabIndex = 6;
			this->AddDirButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->AddDirButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->AddDirButton->UseVisualStyleBackColor = false;
			this->AddDirButton->Click += gcnew System::EventHandler(this, &MainForm::AddDirButton_Click);
			// 
			// SaveDirsButton
			// 
			this->SaveDirsButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SaveDirsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->SaveDirsButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->SaveDirsButton->FlatAppearance->BorderSize = 0;
			this->SaveDirsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SaveDirsButton->ForeColor = System::Drawing::Color::White;
			this->SaveDirsButton->Location = System::Drawing::Point(0, 506);
			this->SaveDirsButton->Margin = System::Windows::Forms::Padding(0);
			this->SaveDirsButton->Name = L"SaveDirsButton";
			this->SaveDirsButton->Size = System::Drawing::Size(834, 38);
			this->SaveDirsButton->TabIndex = 7;
			this->SaveDirsButton->Text = L"Save";
			this->SaveDirsButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->SaveDirsButton->UseVisualStyleBackColor = false;
			this->SaveDirsButton->Click += gcnew System::EventHandler(this, &MainForm::SaveDirsButton_Click);
			// 
			// LinearLayoutDirContainer
			// 
			this->LinearLayoutDirContainer->AutoScroll = true;
			this->LinearLayoutDirContainer->AutoSize = true;
			this->LinearLayoutDirContainer->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->LinearLayoutDirContainer->ColumnCount = 1;
			this->LinearLayoutDirContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->LinearLayoutDirContainer->Dock = System::Windows::Forms::DockStyle::Top;
			this->LinearLayoutDirContainer->Location = System::Drawing::Point(0, 0);
			this->LinearLayoutDirContainer->Margin = System::Windows::Forms::Padding(0);
			this->LinearLayoutDirContainer->Name = L"LinearLayoutDirContainer";
			this->LinearLayoutDirContainer->Padding = System::Windows::Forms::Padding(3);
			this->LinearLayoutDirContainer->RowCount = 1;
			this->LinearLayoutDirContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->LinearLayoutDirContainer->Size = System::Drawing::Size(834, 6);
			this->LinearLayoutDirContainer->TabIndex = 1;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer4->Location = System::Drawing::Point(200, 0);
			this->splitContainer4->Name = L"splitContainer4";
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->splitContainer5);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->panel3);
			this->splitContainer4->Size = System::Drawing::Size(955, 50);
			this->splitContainer4->SplitterDistance = 802;
			this->splitContainer4->TabIndex = 3;
			// 
			// splitContainer5
			// 
			this->splitContainer5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer5->IsSplitterFixed = true;
			this->splitContainer5->Location = System::Drawing::Point(0, 0);
			this->splitContainer5->Name = L"splitContainer5";
			this->splitContainer5->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->flowLayoutPanel2);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->panel4);
			this->splitContainer5->Size = System::Drawing::Size(799, 54);
			this->splitContainer5->SplitterDistance = 25;
			this->splitContainer5->TabIndex = 0;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->flowLayoutPanel2->AutoSize = true;
			this->flowLayoutPanel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel2->Controls->Add(this->button7);
			this->flowLayoutPanel2->Controls->Add(this->button6);
			this->flowLayoutPanel2->Controls->Add(this->button3);
			this->flowLayoutPanel2->Controls->Add(this->button2);
			this->flowLayoutPanel2->Controls->Add(this->button1);
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel2->Location = System::Drawing::Point(304, -7);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(190, 38);
			this->flowLayoutPanel2->TabIndex = 11;
			// 
			// button7
			// 
			this->button7->AutoSize = true;
			this->button7->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(152, 0);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(38, 38);
			this->button7->TabIndex = 10;
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(114, 0);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(38, 38);
			this->button6->TabIndex = 9;
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(76, 0);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 38);
			this->button3->TabIndex = 8;
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(38, 0);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 38);
			this->button2->TabIndex = 7;
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 38);
			this->button1->TabIndex = 6;
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel4
			// 
			this->panel4->AutoSize = true;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->SongProgress);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(799, 25);
			this->panel4->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"3:12";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SongProgress
			// 
			this->SongProgress->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SongProgress->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SongProgress->Location = System::Drawing::Point(0, 0);
			this->SongProgress->Name = L"SongProgress";
			this->SongProgress->Size = System::Drawing::Size(730, 25);
			this->SongProgress->Step = 1;
			this->SongProgress->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->SongProgress->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->Dock = System::Windows::Forms::DockStyle::Right;
			this->label4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label4->Location = System::Drawing::Point(730, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"3:12";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->AutoSize = true;
			this->panel3->Controls->Add(this->VolumeSlider);
			this->panel3->Controls->Add(this->MuteButton);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(-8, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(157, 50);
			this->panel3->TabIndex = 7;
			// 
			// VolumeSlider
			// 
			this->VolumeSlider->Dock = System::Windows::Forms::DockStyle::Right;
			this->VolumeSlider->LargeChange = 1;
			this->VolumeSlider->Location = System::Drawing::Point(40, 0);
			this->VolumeSlider->Maximum = 100;
			this->VolumeSlider->Name = L"VolumeSlider";
			this->VolumeSlider->Size = System::Drawing::Size(117, 50);
			this->VolumeSlider->TabIndex = 6;
			this->VolumeSlider->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->VolumeSlider->Value = 100;
			this->VolumeSlider->Scroll += gcnew System::EventHandler(this, &MainForm::VolumeSlider_Scroll);
			// 
			// MuteButton
			// 
			this->MuteButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->MuteButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->MuteButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->MuteButton->FlatAppearance->BorderSize = 0;
			this->MuteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MuteButton->ForeColor = System::Drawing::Color::White;
			this->MuteButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MuteButton.Image")));
			this->MuteButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MuteButton->Location = System::Drawing::Point(0, 0);
			this->MuteButton->Margin = System::Windows::Forms::Padding(0);
			this->MuteButton->Name = L"MuteButton";
			this->MuteButton->Size = System::Drawing::Size(40, 50);
			this->MuteButton->TabIndex = 5;
			this->MuteButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MuteButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->MuteButton->UseVisualStyleBackColor = false;
			this->MuteButton->Click += gcnew System::EventHandler(this, &MainForm::MuteButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->splitContainer3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 50);
			this->panel2->TabIndex = 2;
			this->panel2->MouseEnter += gcnew System::EventHandler(this, &MainForm::MouseEnter);
			this->panel2->MouseLeave += gcnew System::EventHandler(this, &MainForm::MouseLeave);
			// 
			// splitContainer3
			// 
			this->splitContainer3->BackColor = System::Drawing::Color::Transparent;
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->IsSplitterFixed = true;
			this->splitContainer3->Location = System::Drawing::Point(100, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->label2);
			this->splitContainer3->Size = System::Drawing::Size(100, 50);
			this->splitContainer3->SplitterDistance = 25;
			this->splitContainer3->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Track Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Author";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MainForm::backgroundWorker1_DoWork);
			this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MainForm::backgroundWorker1_RunWorkerCompleted);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1155, 595);
			this->Controls->Add(this->splitContainer1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1000, 500);
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Text = L"Vinil";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->SongsPanel->ResumeLayout(false);
			this->SongsPanel->PerformLayout();
			this->SettingPanel->ResumeLayout(false);
			this->SettingPanel->PerformLayout();
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel1->PerformLayout();
			this->splitContainer5->Panel2->ResumeLayout(false);
			this->splitContainer5->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VolumeSlider))->EndInit();
			this->panel2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void MouseEnter(Object^ sender, EventArgs^ e) {
		Button^ btn = safe_cast<Button^>(sender);
		if (btn != nullptr) {
			btn->BackColor = Color::FromArgb(75, 75, 75);
		}
		else {
			Panel^ pan = safe_cast<Panel^>(sender);
			if (pan != nullptr) {
				pan->BackColor = Color::FromArgb(75, 75, 75);
			}
		}
	}

	private: System::Void MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = safe_cast<Button^>(sender);
		if (btn != nullptr) {
			btn->BackColor = Color::FromArgb(43, 43, 43);
		}
		else {
			Panel^ pan = safe_cast<Panel^>(sender);
			if (pan != nullptr) {
				pan->BackColor = Color::FromArgb(43, 43, 43);
			}
		}
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		DataOperator::ReadDataFolders();
		if (DataOperator::getMusicPaths()->empty()) {
			DisplaySettings();
		}
		else {
			backgroundWorker1->RunWorkerAsync();
		}
	}


		   //private: Collections::ArrayList pathList;
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		/*std::string dirpath = "D:\\music";
		for (auto&& entry : std::filesystem::directory_iterator(dirpath)) {
			if (entry.is_regular_file())
				pathList.Add(gcnew String(entry.path().string().c_str()));
		}*/
		DataOperator::GetSongpaths();
	}

	private:  System::Void backgroundWorker1_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e) {
		if (DataOperator::getMusicPaths()->empty()) {
			DisplaySettings();
		}
		else {
			DisplaySongs();
		}

	}

	private:   delegate Void UpdateSongsDelegate(SongContainer^ el);
	private:  Void FillSongList(SongContainer^ el) {
		MainSongLinearLayout->Controls->Add(el);
		MainSongLinearLayout->Update();
	}
	private: Void DisplaySettings() {
		auto* dirs = DataOperator::getDirPaths();
		for (size_t i = 0; i < dirs->size(); i++) {
			auto el = gcnew DirPathContainer();
			el->setPath_s(&dirs->at(i));
			LinearLayoutDirContainer->Controls->Add(el);
		}
		SettingPanel->Visible = true;
		SongsPanel->Visible = false;
	}
		   Threading::Thread^ thread;
	private: Void DisplaySongs() {
		SettingPanel->Visible = false;
		SongsPanel->Visible = true;
		Threading::Tasks::Task::Run(
			gcnew System::Action(this, &MainForm::DoSongsFill)
		);
		/*if (thread != nullptr) {
			if (thread->IsAlive)
				thread->Suspend();
			LinearLayoutDirContainer->Controls->Clear();
		}
		thread = gcnew Threading::Thread(gcnew Threading::ThreadStart(this, &MainForm::DoSongsFill));
		thread->Start();*/
	}


	private: Void DoSongsFill() {
		try {
			UpdateSongsDelegate^ US = gcnew UpdateSongsDelegate(this, &MainForm::FillSongList);
			auto paths = DataOperator::getMusicPaths();
			for (size_t i = 0; i < paths->size(); i++) {
				/*TagLib::FileRef FR(paths->at(i).c_str());
				if (!FR.isNull() && !FR.tag()->title().isEmpty() && FR.audioProperties() != nullptr)*/
				this->Invoke(US, gcnew SongContainer(&paths->at(i)));
			}
		}
		catch (...) {
			Console::WriteLine("Eh");
		}
		//LinearLayoutSongContainer->Update();
	}



	private: System::Void settings_button_Click(System::Object^ sender, System::EventArgs^ e) {
		DisplaySettings();
	}

	private: System::Void SaveDirsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		IEnumerator^ enumerator = LinearLayoutDirContainer->Controls->GetEnumerator();
		std::vector<std::string> dirs;
		for each (DirPathContainer ^ var in LinearLayoutDirContainer->Controls) {
			//DirPathContainer^ con = safe_cast<DirPathContainer^>(var->GetControlFromPosition(0, 0));
			dirs.push_back(var->getPath_s());
		}
		DataOperator::SaveDataFolders(&dirs);
	}
	private: System::Void AddDirButton_Click(System::Object^ sender, System::EventArgs^ e) {
		LinearLayoutDirContainer->Controls->Add(gcnew DirPathContainer());
	}

	private: System::Void SongListBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		DisplaySongs();
	}

	private: System::Void VolumeSlider_Scroll(System::Object^ sender, System::EventArgs^ e) {
		if (!muted) {
			MusicOperator::SetVolume(this->VolumeSlider->Value);
		}
	}

	private: System::Void MuteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!muted) {
			this->MuteButton->Image = (cli::safe_cast<System::Drawing::Image^>(this->res->GetObject(L"NO Sound.Image")));
			this->muted = true;
			MusicOperator::SetVolume(0);
		}else {
			this->muted = false;
			MusicOperator::SetVolume(this->VolumeSlider->Value);
			this->MuteButton->Image = (cli::safe_cast<System::Drawing::Image^>(this->res->GetObject(L"MuteButton.Image")));
		}
	}
	};
}
