#pragma once
#include "DateWindow.h"
#include "Reservation.h"
#include <msclr\marshal_cppstd.h> // to convert System::String^ to string

namespace Cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>

	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		// constructor 
		MainWindow(Reservation & reservation): reservation(reservation)
		{
			InitializeComponent();

			this->ChooseCinema->Items->Add("CHOOSE CITY");
			this->ChooseCinema->SelectedIndex = 3;
		}

	protected:
		/// <summary>

		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  MainLabel;
	private: System::Windows::Forms::Label^  CityLabel;
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  MCinema;
	private: System::Windows::Forms::PictureBox^  Logo;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  NachosLabel;
	private: System::Windows::Forms::Label^  ColaLabel;
	private: System::Windows::Forms::PictureBox^  NachosPic;
	private: System::Windows::Forms::PictureBox^  ColaPic;
	private: System::Windows::Forms::Label^  PopcornLabel;
	private: System::Windows::Forms::PictureBox^  PopcornPic;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  GithubLink;
	private: System::Windows::Forms::ComboBox^  ChooseCinema;

	private:
		/// <summary>
		// our variables
		int selectedChanged = 0;
		Reservation & reservation;
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->MainLabel = (gcnew System::Windows::Forms::Label());
			this->CityLabel = (gcnew System::Windows::Forms::Label());
			this->ChooseCinema = (gcnew System::Windows::Forms::ComboBox());
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->MCinema = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->NachosLabel = (gcnew System::Windows::Forms::Label());
			this->ColaLabel = (gcnew System::Windows::Forms::Label());
			this->NachosPic = (gcnew System::Windows::Forms::PictureBox());
			this->ColaPic = (gcnew System::Windows::Forms::PictureBox());
			this->PopcornLabel = (gcnew System::Windows::Forms::Label());
			this->PopcornPic = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GithubLink = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NachosPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColaPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PopcornPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// MainLabel
			// 
			resources->ApplyResources(this->MainLabel, L"MainLabel");
			this->MainLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MainLabel->Name = L"MainLabel";
			this->MainLabel->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
			// 
			// CityLabel
			// 
			resources->ApplyResources(this->CityLabel, L"CityLabel");
			this->CityLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CityLabel->Name = L"CityLabel";
			this->CityLabel->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click_1);
			// 
			// ChooseCinema
			// 
			this->ChooseCinema->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ChooseCinema->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->ChooseCinema, L"ChooseCinema");
			this->ChooseCinema->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				resources->GetString(L"ChooseCinema.Items"),
					resources->GetString(L"ChooseCinema.Items1"), resources->GetString(L"ChooseCinema.Items2")
			});
			this->ChooseCinema->Name = L"ChooseCinema";
			this->ChooseCinema->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::comboBox1_SelectedIndexChanged);
			// 
			// QuitButton
			// 
			resources->ApplyResources(this->QuitButton, L"QuitButton");
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->UseVisualStyleBackColor = true;
			this->QuitButton->Click += gcnew System::EventHandler(this, &MainWindow::QuitButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel3->Controls->Add(this->MCinema);
			this->panel3->Controls->Add(this->Logo);
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// MCinema
			// 
			resources->ApplyResources(this->MCinema, L"MCinema");
			this->MCinema->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MCinema->Name = L"MCinema";
			this->MCinema->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click_2);
			// 
			// Logo
			// 
			resources->ApplyResources(this->Logo, L"Logo");
			this->Logo->Name = L"Logo";
			this->Logo->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Controls->Add(this->NachosLabel);
			this->panel1->Controls->Add(this->ColaLabel);
			this->panel1->Controls->Add(this->NachosPic);
			this->panel1->Controls->Add(this->ColaPic);
			this->panel1->Controls->Add(this->PopcornLabel);
			this->panel1->Controls->Add(this->PopcornPic);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// NachosLabel
			// 
			resources->ApplyResources(this->NachosLabel, L"NachosLabel");
			this->NachosLabel->Name = L"NachosLabel";
			// 
			// ColaLabel
			// 
			resources->ApplyResources(this->ColaLabel, L"ColaLabel");
			this->ColaLabel->Name = L"ColaLabel";
			this->ColaLabel->Click += gcnew System::EventHandler(this, &MainWindow::ColaLabel_Click);
			// 
			// NachosPic
			// 
			resources->ApplyResources(this->NachosPic, L"NachosPic");
			this->NachosPic->Name = L"NachosPic";
			this->NachosPic->TabStop = false;
			this->NachosPic->Click += gcnew System::EventHandler(this, &MainWindow::NachosPic_Click);
			// 
			// ColaPic
			// 
			resources->ApplyResources(this->ColaPic, L"ColaPic");
			this->ColaPic->Name = L"ColaPic";
			this->ColaPic->TabStop = false;
			// 
			// PopcornLabel
			// 
			resources->ApplyResources(this->PopcornLabel, L"PopcornLabel");
			this->PopcornLabel->Name = L"PopcornLabel";
			// 
			// PopcornPic
			// 
			resources->ApplyResources(this->PopcornPic, L"PopcornPic");
			this->PopcornPic->Name = L"PopcornPic";
			this->PopcornPic->TabStop = false;
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// GithubLink
			// 
			resources->ApplyResources(this->GithubLink, L"GithubLink");
			this->GithubLink->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->GithubLink->Name = L"GithubLink";
			this->GithubLink->Click += gcnew System::EventHandler(this, &MainWindow::GithubLink_Click);
			// 
			// MainWindow
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->GithubLink);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ChooseCinema);
			this->Controls->Add(this->CityLabel);
			this->Controls->Add(this->MainLabel);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NachosPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColaPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PopcornPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		selectedChanged++;

		if (this->ChooseCinema->SelectedIndex != 3 && selectedChanged > 1)
		{
			this->ChooseCinema->Items->Remove("CHOOSE CITY");
			this->Hide();
			std::string convertedCityName = msclr::interop::marshal_as<std::string>(this->ChooseCinema->Text);
			this->reservation.setCityName(convertedCityName);

			// Call Date Window:

			DateWindow^ dateWindow = gcnew DateWindow(this, this->reservation); 
			dateWindow->ShowDialog();
		}
	}
	private: System::Void QuitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void label1_Click_2(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ColaLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void NachosPic_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void GithubLink_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_3(System::Object^  sender, System::EventArgs^  e) {
}
};
}
