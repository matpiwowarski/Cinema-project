#pragma once
#include "Reservation.h"
#include "CodeGenerator.h"

namespace Cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// </summary>
	public ref class ConfirmationWindow : public System::Windows::Forms::Form
	{
	public:
		// constructor
		ConfirmationWindow(Reservation & reservation) : reservation(reservation)
		{
			InitializeComponent();
			this->CinemaCityLabel->Text = gcnew String(reservation.getCityName().c_str());
			std::string bookingTime = std::to_string(reservation.getYear());
			bookingTime += "/" + std::to_string(reservation.getMonth()) + "/" + std::to_string(reservation.getDay());
			bookingTime += "   " + reservation.getTime();
			this->BookingTimeLabel->Text = gcnew String(bookingTime.c_str());
			this->MovieName->Text = gcnew String(reservation.getMovieName().c_str());
			this->PriceLabel->Text = reservation.getBill().ToString() + "$";

			// seats
			this->SeatsLabel->Text = gcnew String(reservation.getSeatsString().c_str());

			// CODE
			CodeGenerator codeGenerator(this->reservation);
			this->CodeLabel->Text = gcnew String(codeGenerator.getCode().c_str());
		}
	protected:
		/// <summary>
		/// </summary>
		~ConfirmationWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  LogoPanel;
	protected:
	private: System::Windows::Forms::Label^  MCinema;
	private: System::Windows::Forms::PictureBox^  Logo;
	private: System::Windows::Forms::Label^  ConfirmationLabel;
	private: System::Windows::Forms::Label^  CinemaCityLabel;
	private: System::Windows::Forms::Label^  BookingTimeLabel;
	private: System::Windows::Forms::Label^  MovieName;
	private: System::Windows::Forms::Label^  YourSeatsLabel;
	private: System::Windows::Forms::Label^  SeatsLabel;
	private: System::Windows::Forms::Label^  ToPayLabel;
	private: System::Windows::Forms::Label^  PriceLabel;
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Panel^  ConfirmPanel;
	private: System::Windows::Forms::Label^  SeatsLabelPlus;

	private:
		/// <summary>
		// our variables
		Reservation & reservation;
	private: System::Windows::Forms::Label^  CodeTextLabel;
	private: System::Windows::Forms::Label^  CodeLabel;



		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ConfirmationWindow::typeid));
			this->LogoPanel = (gcnew System::Windows::Forms::Panel());
			this->MCinema = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->ConfirmationLabel = (gcnew System::Windows::Forms::Label());
			this->CinemaCityLabel = (gcnew System::Windows::Forms::Label());
			this->BookingTimeLabel = (gcnew System::Windows::Forms::Label());
			this->MovieName = (gcnew System::Windows::Forms::Label());
			this->YourSeatsLabel = (gcnew System::Windows::Forms::Label());
			this->SeatsLabel = (gcnew System::Windows::Forms::Label());
			this->ToPayLabel = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->ConfirmPanel = (gcnew System::Windows::Forms::Panel());
			this->CodeTextLabel = (gcnew System::Windows::Forms::Label());
			this->CodeLabel = (gcnew System::Windows::Forms::Label());
			this->SeatsLabelPlus = (gcnew System::Windows::Forms::Label());
			this->LogoPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->ConfirmPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// LogoPanel
			// 
			this->LogoPanel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->LogoPanel->Controls->Add(this->MCinema);
			this->LogoPanel->Controls->Add(this->Logo);
			resources->ApplyResources(this->LogoPanel, L"LogoPanel");
			this->LogoPanel->Name = L"LogoPanel";
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
			// ConfirmationLabel
			// 
			resources->ApplyResources(this->ConfirmationLabel, L"ConfirmationLabel");
			this->ConfirmationLabel->Name = L"ConfirmationLabel";
			// 
			// CinemaCityLabel
			// 
			resources->ApplyResources(this->CinemaCityLabel, L"CinemaCityLabel");
			this->CinemaCityLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CinemaCityLabel->Name = L"CinemaCityLabel";
			// 
			// BookingTimeLabel
			// 
			resources->ApplyResources(this->BookingTimeLabel, L"BookingTimeLabel");
			this->BookingTimeLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BookingTimeLabel->Name = L"BookingTimeLabel";
			// 
			// MovieName
			// 
			resources->ApplyResources(this->MovieName, L"MovieName");
			this->MovieName->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MovieName->Name = L"MovieName";
			// 
			// YourSeatsLabel
			// 
			resources->ApplyResources(this->YourSeatsLabel, L"YourSeatsLabel");
			this->YourSeatsLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->YourSeatsLabel->Name = L"YourSeatsLabel";
			// 
			// SeatsLabel
			// 
			this->SeatsLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->SeatsLabel, L"SeatsLabel");
			this->SeatsLabel->Name = L"SeatsLabel";
			// 
			// ToPayLabel
			// 
			resources->ApplyResources(this->ToPayLabel, L"ToPayLabel");
			this->ToPayLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ToPayLabel->Name = L"ToPayLabel";
			// 
			// PriceLabel
			// 
			this->PriceLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->PriceLabel, L"PriceLabel");
			this->PriceLabel->Name = L"PriceLabel";
			// 
			// QuitButton
			// 
			resources->ApplyResources(this->QuitButton, L"QuitButton");
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->UseVisualStyleBackColor = true;
			this->QuitButton->Click += gcnew System::EventHandler(this, &ConfirmationWindow::QuitButton_Click);
			// 
			// ConfirmPanel
			// 
			this->ConfirmPanel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ConfirmPanel->Controls->Add(this->CodeTextLabel);
			this->ConfirmPanel->Controls->Add(this->CodeLabel);
			this->ConfirmPanel->Controls->Add(this->SeatsLabelPlus);
			this->ConfirmPanel->Controls->Add(this->PriceLabel);
			resources->ApplyResources(this->ConfirmPanel, L"ConfirmPanel");
			this->ConfirmPanel->Name = L"ConfirmPanel";
			// 
			// CodeTextLabel
			// 
			resources->ApplyResources(this->CodeTextLabel, L"CodeTextLabel");
			this->CodeTextLabel->Name = L"CodeTextLabel";
			this->CodeTextLabel->Click += gcnew System::EventHandler(this, &ConfirmationWindow::label2_Click);
			// 
			// CodeLabel
			// 
			resources->ApplyResources(this->CodeLabel, L"CodeLabel");
			this->CodeLabel->Name = L"CodeLabel";
			this->CodeLabel->Click += gcnew System::EventHandler(this, &ConfirmationWindow::CodeLabel_Click);
			// 
			// SeatsLabelPlus
			// 
			this->SeatsLabelPlus->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->SeatsLabelPlus, L"SeatsLabelPlus");
			this->SeatsLabelPlus->Name = L"SeatsLabelPlus";
			// 
			// ConfirmationWindow
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->ToPayLabel);
			this->Controls->Add(this->SeatsLabel);
			this->Controls->Add(this->YourSeatsLabel);
			this->Controls->Add(this->MovieName);
			this->Controls->Add(this->BookingTimeLabel);
			this->Controls->Add(this->CinemaCityLabel);
			this->Controls->Add(this->ConfirmationLabel);
			this->Controls->Add(this->LogoPanel);
			this->Controls->Add(this->ConfirmPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ConfirmationWindow";
			this->LogoPanel->ResumeLayout(false);
			this->LogoPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ConfirmPanel->ResumeLayout(false);
			this->ConfirmPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void QuitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CodeLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
