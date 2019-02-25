#pragma once
#include "Reservation.h"
#include "Filereader.h"
#include "CinemaHallWindow.h"
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
	public ref class MovieWindow : public System::Windows::Forms::Form
	{
	public:
		// constructor
		MovieWindow(Reservation & reservation, System::Windows::Forms::Form ^previousForm): reservation(reservation)
		{
			this->previousForm = previousForm;

			// DATE INFO

			InitializeComponent();
			this->noMoviesLabel->Hide();
			System::String^ symbol1 = "/";
			System::String^ symbol2 = "/";
			if (this->reservation.getMonth() < 10) symbol1 += "0";
			if (this->reservation.getDay() < 10) symbol2 += "0";

			this->dateLabel->Text = 
					this->reservation.getYear().ToString() + symbol1 
				+	this->reservation.getMonth().ToString() + symbol2 
				+	this->reservation.getDay().ToString();

			// MOVIES INFO

			std::string filePath = "../../booking/" + reservation.getCityName() + "/";
			filePath += std::to_string(reservation.getYear()) + "/" + std::to_string(reservation.getMonth())
				+ "/" + std::to_string(reservation.getDay());
			FileReader reader1(filePath + "/1.txt");
			FileReader reader2(filePath + "/2.txt");
			FileReader reader3(filePath + "/3.txt");

			this->Movie1Label->Text = gcnew String(reader1.getMovieName().c_str());
			this->Movie2Label->Text = gcnew String(reader2.getMovieName().c_str());
			this->Movie3Label->Text = gcnew String(reader3.getMovieName().c_str());

			this->Movie1Button->Text = gcnew String(reader1.getMovieTime().c_str());
			this->Movie2Button->Text = gcnew String(reader2.getMovieTime().c_str());
			this->Movie3Button->Text = gcnew String(reader3.getMovieTime().c_str());

			// MOVIES PICS
			if (this->Movie1Label->Text == "")
			{
				this->noMoviesLabel->Show();
			}
			else
			{
				std::string picsPath = "../../booking/" + reservation.getCityName()
					+ "/" + std::to_string(reservation.getYear()) + "/" + std::to_string(reservation.getMonth());

				this->Movie1Pic->ImageLocation = gcnew String(picsPath.c_str()) + "/1.jpg";
				this->Movie2Pic->ImageLocation = gcnew String(picsPath.c_str()) + "/2.jpg";
				this->Movie3Pic->ImageLocation = gcnew String(picsPath.c_str()) + "/3.jpg";

			}
		}

	protected:
		/// <summary>
		/// </summary>
		~MovieWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Button^  BackButton;
	private: System::Windows::Forms::Panel^  logoPanel;
	private: System::Windows::Forms::Label^  MCinema;
	private: System::Windows::Forms::PictureBox^  Logo;
	private: System::Windows::Forms::Label^  ChooseMovieLabel;
	private: System::Windows::Forms::Panel^  Movie1Panel;
	private: System::Windows::Forms::Label^  Movie1Label;
	private: System::Windows::Forms::PictureBox^  Movie1Pic;
	private: System::Windows::Forms::Panel^  Movie2Panel;
	private: System::Windows::Forms::Label^  Movie2Label;
	private: System::Windows::Forms::PictureBox^  Movie2Pic;
	private: System::Windows::Forms::Panel^  Movie3Panel;
	private: System::Windows::Forms::Label^  Movie3Label;
	private: System::Windows::Forms::PictureBox^  Movie3Pic;
	private: System::Windows::Forms::Label^  dateLabel;
	private: System::Windows::Forms::Button^  Movie1Button;
	private: System::Windows::Forms::Button^  Movie2Button;
	private: System::Windows::Forms::Button^  Movie3Button;
	private: System::Windows::Forms::Label^  noMoviesLabel;

	protected:

	private:
		/// <summary>
		// our variables
		Reservation & reservation;
		System::Windows::Forms::Form ^previousForm;

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MovieWindow::typeid));
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->logoPanel = (gcnew System::Windows::Forms::Panel());
			this->MCinema = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->ChooseMovieLabel = (gcnew System::Windows::Forms::Label());
			this->Movie1Panel = (gcnew System::Windows::Forms::Panel());
			this->Movie1Button = (gcnew System::Windows::Forms::Button());
			this->Movie1Label = (gcnew System::Windows::Forms::Label());
			this->Movie1Pic = (gcnew System::Windows::Forms::PictureBox());
			this->Movie2Panel = (gcnew System::Windows::Forms::Panel());
			this->Movie2Button = (gcnew System::Windows::Forms::Button());
			this->Movie2Label = (gcnew System::Windows::Forms::Label());
			this->Movie2Pic = (gcnew System::Windows::Forms::PictureBox());
			this->Movie3Panel = (gcnew System::Windows::Forms::Panel());
			this->Movie3Button = (gcnew System::Windows::Forms::Button());
			this->Movie3Label = (gcnew System::Windows::Forms::Label());
			this->Movie3Pic = (gcnew System::Windows::Forms::PictureBox());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->noMoviesLabel = (gcnew System::Windows::Forms::Label());
			this->logoPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->Movie1Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Movie1Pic))->BeginInit();
			this->Movie2Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Movie2Pic))->BeginInit();
			this->Movie3Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Movie3Pic))->BeginInit();
			this->SuspendLayout();
			// 
			// QuitButton
			// 
			resources->ApplyResources(this->QuitButton, L"QuitButton");
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->UseVisualStyleBackColor = true;
			this->QuitButton->Click += gcnew System::EventHandler(this, &MovieWindow::QuitButton_Click);
			// 
			// BackButton
			// 
			resources->ApplyResources(this->BackButton, L"BackButton");
			this->BackButton->Name = L"BackButton";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &MovieWindow::BackButton_Click);
			// 
			// logoPanel
			// 
			this->logoPanel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->logoPanel->Controls->Add(this->MCinema);
			this->logoPanel->Controls->Add(this->Logo);
			resources->ApplyResources(this->logoPanel, L"logoPanel");
			this->logoPanel->Name = L"logoPanel";
			// 
			// MCinema
			// 
			resources->ApplyResources(this->MCinema, L"MCinema");
			this->MCinema->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MCinema->Name = L"MCinema";
			// 
			// Logo
			// 
			resources->ApplyResources(this->Logo, L"Logo");
			this->Logo->Name = L"Logo";
			this->Logo->TabStop = false;
			// 
			// ChooseMovieLabel
			// 
			resources->ApplyResources(this->ChooseMovieLabel, L"ChooseMovieLabel");
			this->ChooseMovieLabel->Name = L"ChooseMovieLabel";
			// 
			// Movie1Panel
			// 
			this->Movie1Panel->BackColor = System::Drawing::SystemColors::Window;
			this->Movie1Panel->Controls->Add(this->Movie1Button);
			this->Movie1Panel->Controls->Add(this->Movie1Label);
			this->Movie1Panel->Controls->Add(this->Movie1Pic);
			resources->ApplyResources(this->Movie1Panel, L"Movie1Panel");
			this->Movie1Panel->Name = L"Movie1Panel";
			// 
			// Movie1Button
			// 
			resources->ApplyResources(this->Movie1Button, L"Movie1Button");
			this->Movie1Button->Name = L"Movie1Button";
			this->Movie1Button->UseVisualStyleBackColor = true;
			this->Movie1Button->Click += gcnew System::EventHandler(this, &MovieWindow::Movie1Button_Click);
			// 
			// Movie1Label
			// 
			resources->ApplyResources(this->Movie1Label, L"Movie1Label");
			this->Movie1Label->Name = L"Movie1Label";
			// 
			// Movie1Pic
			// 
			this->Movie1Pic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			resources->ApplyResources(this->Movie1Pic, L"Movie1Pic");
			this->Movie1Pic->Name = L"Movie1Pic";
			this->Movie1Pic->TabStop = false;
			// 
			// Movie2Panel
			// 
			this->Movie2Panel->BackColor = System::Drawing::SystemColors::Window;
			this->Movie2Panel->Controls->Add(this->Movie2Button);
			this->Movie2Panel->Controls->Add(this->Movie2Label);
			this->Movie2Panel->Controls->Add(this->Movie2Pic);
			resources->ApplyResources(this->Movie2Panel, L"Movie2Panel");
			this->Movie2Panel->Name = L"Movie2Panel";
			// 
			// Movie2Button
			// 
			resources->ApplyResources(this->Movie2Button, L"Movie2Button");
			this->Movie2Button->Name = L"Movie2Button";
			this->Movie2Button->UseVisualStyleBackColor = true;
			this->Movie2Button->Click += gcnew System::EventHandler(this, &MovieWindow::Movie2Button_Click);
			// 
			// Movie2Label
			// 
			resources->ApplyResources(this->Movie2Label, L"Movie2Label");
			this->Movie2Label->Name = L"Movie2Label";
			// 
			// Movie2Pic
			// 
			this->Movie2Pic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			resources->ApplyResources(this->Movie2Pic, L"Movie2Pic");
			this->Movie2Pic->Name = L"Movie2Pic";
			this->Movie2Pic->TabStop = false;
			// 
			// Movie3Panel
			// 
			this->Movie3Panel->BackColor = System::Drawing::SystemColors::Window;
			this->Movie3Panel->Controls->Add(this->Movie3Button);
			this->Movie3Panel->Controls->Add(this->Movie3Label);
			this->Movie3Panel->Controls->Add(this->Movie3Pic);
			resources->ApplyResources(this->Movie3Panel, L"Movie3Panel");
			this->Movie3Panel->Name = L"Movie3Panel";
			// 
			// Movie3Button
			// 
			resources->ApplyResources(this->Movie3Button, L"Movie3Button");
			this->Movie3Button->Name = L"Movie3Button";
			this->Movie3Button->UseVisualStyleBackColor = true;
			this->Movie3Button->Click += gcnew System::EventHandler(this, &MovieWindow::Movie3Button_Click);
			// 
			// Movie3Label
			// 
			resources->ApplyResources(this->Movie3Label, L"Movie3Label");
			this->Movie3Label->Name = L"Movie3Label";
			// 
			// Movie3Pic
			// 
			this->Movie3Pic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			resources->ApplyResources(this->Movie3Pic, L"Movie3Pic");
			this->Movie3Pic->Name = L"Movie3Pic";
			this->Movie3Pic->TabStop = false;
			// 
			// dateLabel
			// 
			resources->ApplyResources(this->dateLabel, L"dateLabel");
			this->dateLabel->Name = L"dateLabel";
			// 
			// noMoviesLabel
			// 
			this->noMoviesLabel->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			resources->ApplyResources(this->noMoviesLabel, L"noMoviesLabel");
			this->noMoviesLabel->Name = L"noMoviesLabel";
			// 
			// MovieWindow
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->noMoviesLabel);
			this->Controls->Add(this->dateLabel);
			this->Controls->Add(this->Movie3Panel);
			this->Controls->Add(this->Movie2Panel);
			this->Controls->Add(this->Movie1Panel);
			this->Controls->Add(this->ChooseMovieLabel);
			this->Controls->Add(this->logoPanel);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->QuitButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MovieWindow";
			this->logoPanel->ResumeLayout(false);
			this->logoPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->Movie1Panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Movie1Pic))->EndInit();
			this->Movie2Panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Movie2Pic))->EndInit();
			this->Movie3Panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Movie3Pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void QuitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void BackButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		this->previousForm->Show();
	}

private: System::Void Movie1Button_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();

	std::string convertedTime = msclr::interop::marshal_as<std::string>(this->Movie1Button->Text);
	std::string convertedMovieName = msclr::interop::marshal_as<std::string>(this->Movie1Label->Text);
	this->reservation.setTime(convertedTime);
	this->reservation.setMovieName(convertedMovieName);

	CinemaHallWindow^ cinemaWindow = gcnew CinemaHallWindow(this->reservation, this, 1);
	cinemaWindow->ShowDialog();
}
private: System::Void Movie2Button_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();

	std::string convertedTime = msclr::interop::marshal_as<std::string>(this->Movie2Button->Text);
	std::string convertedMovieName = msclr::interop::marshal_as<std::string>(this->Movie2Label->Text);
	this->reservation.setTime(convertedTime);
	this->reservation.setMovieName(convertedMovieName);

	CinemaHallWindow^ cinemaWindow = gcnew CinemaHallWindow(this->reservation, this, 2);
	cinemaWindow->ShowDialog();
}
private: System::Void Movie3Button_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();

	std::string convertedTime = msclr::interop::marshal_as<std::string>(this->Movie3Button->Text);
	std::string convertedMovieName = msclr::interop::marshal_as<std::string>(this->Movie3Label->Text);
	this->reservation.setTime(convertedTime);
	this->reservation.setMovieName(convertedMovieName);

	CinemaHallWindow^ cinemaWindow = gcnew CinemaHallWindow(this->reservation, this, 3);
	cinemaWindow->ShowDialog();
}
};
}
