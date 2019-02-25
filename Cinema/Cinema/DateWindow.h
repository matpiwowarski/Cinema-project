#pragma once
#include <ctime>
#include "Date.h"
#include "MovieWindow.h"
#include "Reservation.h"

namespace Cinema {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// </summary>
	public ref class DateWindow : public System::Windows::Forms::Form
	{
	public:
		DateWindow(System::Windows::Forms::Form ^previousForm, Reservation & reservation): reservation(reservation)
		{
			std::time_t t = std::time(0); // get time now
			this->presentDay = std::localtime(&t);

			this->currentDate = new Date(this->presentDay->tm_year + 1900, this->presentDay->tm_mon + 1);

			InitializeComponent();
			this->CityLabel->Text = gcnew String(reservation.getCityName().c_str()); // string to System::String^
			this->previousForm = previousForm;
			this->YearLabel->Text = System::Convert::ToString(currentDate->GetYear()); // int to System::String^
			this->MonthLabel->Text = gcnew String(currentDate->GetMonthName().c_str()); // string to System::String

			if (this->currentDate->GetNumberOfDays() < 31) // hide days if month has not 31 days
			{
				this->Day31->Hide();
				if (this->currentDate->GetNumberOfDays() < 30)
				{
					this->Day30->Hide();
					if (this->currentDate->GetNumberOfDays() < 29)
					{
						this->Day29->Hide();
					}
				}
			}

			this->PreviousMonthButton->Hide();
			this->blockPastDays(this->presentDay);
		}

		void blockPastDays(std::tm* now);
		void unblockAllDays();
		void CalculateSelectedDate(int & year, int & month);

	protected:
		/// <summary>
		/// </summary>
		~DateWindow()
		{
			delete currentDate;
			currentDate = nullptr;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Panel^  logoPanel;
	private: System::Windows::Forms::Label^  MCinema;
	private: System::Windows::Forms::PictureBox^  Logo;
	private: System::Windows::Forms::Label^  ChooseDateLabel;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  Day1;
	private: System::Windows::Forms::Label^  MonthLabel;
	private: System::Windows::Forms::Button^  Day7;
	private: System::Windows::Forms::Button^  Day6;
	private: System::Windows::Forms::Button^  Day4;
	private: System::Windows::Forms::Button^  Day3;
	private: System::Windows::Forms::Button^  Day5;
	private: System::Windows::Forms::Button^  Day2;
	private: System::Windows::Forms::Button^  NextMonthButton;
	private: System::Windows::Forms::Label^  YearLabel;
	private: System::Windows::Forms::Button^  Day31;
	private: System::Windows::Forms::Button^  Day30;
	private: System::Windows::Forms::Button^  Day29;
	private: System::Windows::Forms::Button^  Day28;
	private: System::Windows::Forms::Button^  Day27;
	private: System::Windows::Forms::Button^  Day26;
	private: System::Windows::Forms::Button^  Day25;
	private: System::Windows::Forms::Button^  Day24;
	private: System::Windows::Forms::Button^  Day23;
	private: System::Windows::Forms::Button^  Day22;
	private: System::Windows::Forms::Button^  Day21;
	private: System::Windows::Forms::Button^  Day20;
	private: System::Windows::Forms::Button^  Day19;
	private: System::Windows::Forms::Button^  Day17;
	private: System::Windows::Forms::Button^  Day18;
	private: System::Windows::Forms::Button^  Day16;
	private: System::Windows::Forms::Button^  Day15;
	private: System::Windows::Forms::Button^  Day14;
	private: System::Windows::Forms::Button^  Day13;
	private: System::Windows::Forms::Button^  Day12;
	private: System::Windows::Forms::Button^  Day11;
	private: System::Windows::Forms::Button^  Day10;
	private: System::Windows::Forms::Button^  Day9;
	private: System::Windows::Forms::Button^  Day8;
	private: System::Windows::Forms::Label^  CityLabel;
	private: System::Windows::Forms::Button^  BackButton;

	protected:

	private:
		/// <summary>
		// our variables
		System::Windows::Forms::Form ^previousForm;
		Date * currentDate;
		int monthIndex = 0;
		std::tm* presentDay;
		Reservation & reservation;

private: System::Windows::Forms::Button^  PreviousMonthButton;

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DateWindow::typeid));
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->logoPanel = (gcnew System::Windows::Forms::Panel());
			this->MCinema = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->ChooseDateLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Day31 = (gcnew System::Windows::Forms::Button());
			this->Day30 = (gcnew System::Windows::Forms::Button());
			this->Day29 = (gcnew System::Windows::Forms::Button());
			this->Day28 = (gcnew System::Windows::Forms::Button());
			this->Day27 = (gcnew System::Windows::Forms::Button());
			this->Day26 = (gcnew System::Windows::Forms::Button());
			this->Day25 = (gcnew System::Windows::Forms::Button());
			this->Day24 = (gcnew System::Windows::Forms::Button());
			this->Day23 = (gcnew System::Windows::Forms::Button());
			this->Day22 = (gcnew System::Windows::Forms::Button());
			this->Day21 = (gcnew System::Windows::Forms::Button());
			this->Day20 = (gcnew System::Windows::Forms::Button());
			this->Day19 = (gcnew System::Windows::Forms::Button());
			this->Day17 = (gcnew System::Windows::Forms::Button());
			this->Day18 = (gcnew System::Windows::Forms::Button());
			this->Day16 = (gcnew System::Windows::Forms::Button());
			this->Day15 = (gcnew System::Windows::Forms::Button());
			this->Day14 = (gcnew System::Windows::Forms::Button());
			this->Day13 = (gcnew System::Windows::Forms::Button());
			this->Day12 = (gcnew System::Windows::Forms::Button());
			this->Day11 = (gcnew System::Windows::Forms::Button());
			this->Day10 = (gcnew System::Windows::Forms::Button());
			this->Day9 = (gcnew System::Windows::Forms::Button());
			this->Day8 = (gcnew System::Windows::Forms::Button());
			this->PreviousMonthButton = (gcnew System::Windows::Forms::Button());
			this->NextMonthButton = (gcnew System::Windows::Forms::Button());
			this->YearLabel = (gcnew System::Windows::Forms::Label());
			this->Day7 = (gcnew System::Windows::Forms::Button());
			this->Day6 = (gcnew System::Windows::Forms::Button());
			this->Day4 = (gcnew System::Windows::Forms::Button());
			this->Day3 = (gcnew System::Windows::Forms::Button());
			this->Day5 = (gcnew System::Windows::Forms::Button());
			this->Day2 = (gcnew System::Windows::Forms::Button());
			this->Day1 = (gcnew System::Windows::Forms::Button());
			this->MonthLabel = (gcnew System::Windows::Forms::Label());
			this->CityLabel = (gcnew System::Windows::Forms::Label());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->logoPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// QuitButton
			// 
			resources->ApplyResources(this->QuitButton, L"QuitButton");
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->UseVisualStyleBackColor = true;
			this->QuitButton->Click += gcnew System::EventHandler(this, &DateWindow::QuitButton_Click);
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
			// ChooseDateLabel
			// 
			resources->ApplyResources(this->ChooseDateLabel, L"ChooseDateLabel");
			this->ChooseDateLabel->Name = L"ChooseDateLabel";
			this->ChooseDateLabel->Click += gcnew System::EventHandler(this, &DateWindow::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->Day31);
			this->panel1->Controls->Add(this->Day30);
			this->panel1->Controls->Add(this->Day29);
			this->panel1->Controls->Add(this->Day28);
			this->panel1->Controls->Add(this->Day27);
			this->panel1->Controls->Add(this->Day26);
			this->panel1->Controls->Add(this->Day25);
			this->panel1->Controls->Add(this->Day24);
			this->panel1->Controls->Add(this->Day23);
			this->panel1->Controls->Add(this->Day22);
			this->panel1->Controls->Add(this->Day21);
			this->panel1->Controls->Add(this->Day20);
			this->panel1->Controls->Add(this->Day19);
			this->panel1->Controls->Add(this->Day17);
			this->panel1->Controls->Add(this->Day18);
			this->panel1->Controls->Add(this->Day16);
			this->panel1->Controls->Add(this->Day15);
			this->panel1->Controls->Add(this->Day14);
			this->panel1->Controls->Add(this->Day13);
			this->panel1->Controls->Add(this->Day12);
			this->panel1->Controls->Add(this->Day11);
			this->panel1->Controls->Add(this->Day10);
			this->panel1->Controls->Add(this->Day9);
			this->panel1->Controls->Add(this->Day8);
			this->panel1->Controls->Add(this->PreviousMonthButton);
			this->panel1->Controls->Add(this->NextMonthButton);
			this->panel1->Controls->Add(this->YearLabel);
			this->panel1->Controls->Add(this->Day7);
			this->panel1->Controls->Add(this->Day6);
			this->panel1->Controls->Add(this->Day4);
			this->panel1->Controls->Add(this->Day3);
			this->panel1->Controls->Add(this->Day5);
			this->panel1->Controls->Add(this->Day2);
			this->panel1->Controls->Add(this->Day1);
			this->panel1->Controls->Add(this->MonthLabel);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DateWindow::panel1_Paint);
			// 
			// Day31
			// 
			resources->ApplyResources(this->Day31, L"Day31");
			this->Day31->Name = L"Day31";
			this->Day31->UseVisualStyleBackColor = true;
			this->Day31->Click += gcnew System::EventHandler(this, &DateWindow::Day31_Click);
			// 
			// Day30
			// 
			resources->ApplyResources(this->Day30, L"Day30");
			this->Day30->Name = L"Day30";
			this->Day30->UseVisualStyleBackColor = true;
			this->Day30->Click += gcnew System::EventHandler(this, &DateWindow::Day30_Click);
			// 
			// Day29
			// 
			resources->ApplyResources(this->Day29, L"Day29");
			this->Day29->Name = L"Day29";
			this->Day29->UseVisualStyleBackColor = true;
			this->Day29->Click += gcnew System::EventHandler(this, &DateWindow::Day29_Click);
			// 
			// Day28
			// 
			resources->ApplyResources(this->Day28, L"Day28");
			this->Day28->Name = L"Day28";
			this->Day28->UseVisualStyleBackColor = true;
			this->Day28->Click += gcnew System::EventHandler(this, &DateWindow::Day28_Click);
			// 
			// Day27
			// 
			resources->ApplyResources(this->Day27, L"Day27");
			this->Day27->Name = L"Day27";
			this->Day27->UseVisualStyleBackColor = true;
			this->Day27->Click += gcnew System::EventHandler(this, &DateWindow::Day27_Click);
			// 
			// Day26
			// 
			resources->ApplyResources(this->Day26, L"Day26");
			this->Day26->Name = L"Day26";
			this->Day26->UseVisualStyleBackColor = true;
			this->Day26->Click += gcnew System::EventHandler(this, &DateWindow::Day26_Click);
			// 
			// Day25
			// 
			resources->ApplyResources(this->Day25, L"Day25");
			this->Day25->Name = L"Day25";
			this->Day25->UseVisualStyleBackColor = true;
			this->Day25->Click += gcnew System::EventHandler(this, &DateWindow::Day25_Click);
			// 
			// Day24
			// 
			resources->ApplyResources(this->Day24, L"Day24");
			this->Day24->Name = L"Day24";
			this->Day24->UseVisualStyleBackColor = true;
			this->Day24->Click += gcnew System::EventHandler(this, &DateWindow::Day24_Click);
			// 
			// Day23
			// 
			resources->ApplyResources(this->Day23, L"Day23");
			this->Day23->Name = L"Day23";
			this->Day23->UseVisualStyleBackColor = true;
			this->Day23->Click += gcnew System::EventHandler(this, &DateWindow::Day23_Click);
			// 
			// Day22
			// 
			resources->ApplyResources(this->Day22, L"Day22");
			this->Day22->Name = L"Day22";
			this->Day22->UseVisualStyleBackColor = true;
			this->Day22->Click += gcnew System::EventHandler(this, &DateWindow::Day22_Click);
			// 
			// Day21
			// 
			resources->ApplyResources(this->Day21, L"Day21");
			this->Day21->Name = L"Day21";
			this->Day21->UseVisualStyleBackColor = true;
			this->Day21->Click += gcnew System::EventHandler(this, &DateWindow::Day21_Click);
			// 
			// Day20
			// 
			resources->ApplyResources(this->Day20, L"Day20");
			this->Day20->Name = L"Day20";
			this->Day20->UseVisualStyleBackColor = true;
			this->Day20->Click += gcnew System::EventHandler(this, &DateWindow::Day20_Click);
			// 
			// Day19
			// 
			resources->ApplyResources(this->Day19, L"Day19");
			this->Day19->Name = L"Day19";
			this->Day19->UseVisualStyleBackColor = true;
			this->Day19->Click += gcnew System::EventHandler(this, &DateWindow::Day19_Click);
			// 
			// Day17
			// 
			resources->ApplyResources(this->Day17, L"Day17");
			this->Day17->Name = L"Day17";
			this->Day17->UseVisualStyleBackColor = true;
			this->Day17->Click += gcnew System::EventHandler(this, &DateWindow::Day17_Click);
			// 
			// Day18
			// 
			resources->ApplyResources(this->Day18, L"Day18");
			this->Day18->Name = L"Day18";
			this->Day18->UseVisualStyleBackColor = true;
			this->Day18->Click += gcnew System::EventHandler(this, &DateWindow::Day18_Click);
			// 
			// Day16
			// 
			resources->ApplyResources(this->Day16, L"Day16");
			this->Day16->Name = L"Day16";
			this->Day16->UseVisualStyleBackColor = true;
			this->Day16->Click += gcnew System::EventHandler(this, &DateWindow::Day16_Click);
			// 
			// Day15
			// 
			resources->ApplyResources(this->Day15, L"Day15");
			this->Day15->Name = L"Day15";
			this->Day15->UseVisualStyleBackColor = true;
			this->Day15->Click += gcnew System::EventHandler(this, &DateWindow::Day15_Click);
			// 
			// Day14
			// 
			resources->ApplyResources(this->Day14, L"Day14");
			this->Day14->Name = L"Day14";
			this->Day14->UseVisualStyleBackColor = true;
			this->Day14->Click += gcnew System::EventHandler(this, &DateWindow::Day14_Click);
			// 
			// Day13
			// 
			resources->ApplyResources(this->Day13, L"Day13");
			this->Day13->Name = L"Day13";
			this->Day13->UseVisualStyleBackColor = true;
			this->Day13->Click += gcnew System::EventHandler(this, &DateWindow::Day13_Click);
			// 
			// Day12
			// 
			resources->ApplyResources(this->Day12, L"Day12");
			this->Day12->Name = L"Day12";
			this->Day12->UseVisualStyleBackColor = true;
			this->Day12->Click += gcnew System::EventHandler(this, &DateWindow::Day12_Click);
			// 
			// Day11
			// 
			resources->ApplyResources(this->Day11, L"Day11");
			this->Day11->Name = L"Day11";
			this->Day11->UseVisualStyleBackColor = true;
			this->Day11->Click += gcnew System::EventHandler(this, &DateWindow::Day11_Click);
			// 
			// Day10
			// 
			resources->ApplyResources(this->Day10, L"Day10");
			this->Day10->Name = L"Day10";
			this->Day10->UseVisualStyleBackColor = true;
			this->Day10->Click += gcnew System::EventHandler(this, &DateWindow::Day10_Click);
			// 
			// Day9
			// 
			resources->ApplyResources(this->Day9, L"Day9");
			this->Day9->Name = L"Day9";
			this->Day9->UseVisualStyleBackColor = true;
			this->Day9->Click += gcnew System::EventHandler(this, &DateWindow::Day9_Click);
			// 
			// Day8
			// 
			resources->ApplyResources(this->Day8, L"Day8");
			this->Day8->Name = L"Day8";
			this->Day8->UseVisualStyleBackColor = true;
			this->Day8->Click += gcnew System::EventHandler(this, &DateWindow::Day8_Click);
			// 
			// PreviousMonthButton
			// 
			resources->ApplyResources(this->PreviousMonthButton, L"PreviousMonthButton");
			this->PreviousMonthButton->Name = L"PreviousMonthButton";
			this->PreviousMonthButton->UseVisualStyleBackColor = true;
			this->PreviousMonthButton->Click += gcnew System::EventHandler(this, &DateWindow::PreviousMonthButton_Click);
			// 
			// NextMonthButton
			// 
			resources->ApplyResources(this->NextMonthButton, L"NextMonthButton");
			this->NextMonthButton->Name = L"NextMonthButton";
			this->NextMonthButton->UseVisualStyleBackColor = true;
			this->NextMonthButton->Click += gcnew System::EventHandler(this, &DateWindow::NextMonthButton_Click);
			// 
			// YearLabel
			// 
			resources->ApplyResources(this->YearLabel, L"YearLabel");
			this->YearLabel->Name = L"YearLabel";
			this->YearLabel->Click += gcnew System::EventHandler(this, &DateWindow::label1_Click_1);
			// 
			// Day7
			// 
			resources->ApplyResources(this->Day7, L"Day7");
			this->Day7->Name = L"Day7";
			this->Day7->UseVisualStyleBackColor = true;
			this->Day7->Click += gcnew System::EventHandler(this, &DateWindow::Day7_Click);
			// 
			// Day6
			// 
			resources->ApplyResources(this->Day6, L"Day6");
			this->Day6->Name = L"Day6";
			this->Day6->UseVisualStyleBackColor = true;
			this->Day6->Click += gcnew System::EventHandler(this, &DateWindow::Day6_Click);
			// 
			// Day4
			// 
			resources->ApplyResources(this->Day4, L"Day4");
			this->Day4->Name = L"Day4";
			this->Day4->UseVisualStyleBackColor = true;
			this->Day4->Click += gcnew System::EventHandler(this, &DateWindow::Day4_Click);
			// 
			// Day3
			// 
			resources->ApplyResources(this->Day3, L"Day3");
			this->Day3->Name = L"Day3";
			this->Day3->UseVisualStyleBackColor = true;
			this->Day3->Click += gcnew System::EventHandler(this, &DateWindow::Day3_Click);
			// 
			// Day5
			// 
			resources->ApplyResources(this->Day5, L"Day5");
			this->Day5->Name = L"Day5";
			this->Day5->UseVisualStyleBackColor = true;
			this->Day5->Click += gcnew System::EventHandler(this, &DateWindow::Day5_Click);
			// 
			// Day2
			// 
			resources->ApplyResources(this->Day2, L"Day2");
			this->Day2->Name = L"Day2";
			this->Day2->UseVisualStyleBackColor = true;
			this->Day2->Click += gcnew System::EventHandler(this, &DateWindow::Day2_Click);
			// 
			// Day1
			// 
			resources->ApplyResources(this->Day1, L"Day1");
			this->Day1->Name = L"Day1";
			this->Day1->UseVisualStyleBackColor = true;
			this->Day1->Click += gcnew System::EventHandler(this, &DateWindow::Day1_Click);
			// 
			// MonthLabel
			// 
			resources->ApplyResources(this->MonthLabel, L"MonthLabel");
			this->MonthLabel->Name = L"MonthLabel";
			// 
			// CityLabel
			// 
			resources->ApplyResources(this->CityLabel, L"CityLabel");
			this->CityLabel->BackColor = System::Drawing::Color::AliceBlue;
			this->CityLabel->Name = L"CityLabel";
			this->CityLabel->Click += gcnew System::EventHandler(this, &DateWindow::label1_Click_2);
			// 
			// BackButton
			// 
			resources->ApplyResources(this->BackButton, L"BackButton");
			this->BackButton->Name = L"BackButton";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &DateWindow::BackButton_Click);
			// 
			// DateWindow
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->CityLabel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ChooseDateLabel);
			this->Controls->Add(this->logoPanel);
			this->Controls->Add(this->QuitButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DateWindow";
			this->logoPanel->ResumeLayout(false);
			this->logoPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void label1_Click_2(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void NextMonthButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->currentDate->operator++();
	this->MonthLabel->Text = gcnew String(currentDate->GetMonthName().c_str()); // string to System::String
	this->YearLabel->Text = System::Convert::ToString(currentDate->GetYear());

	if (this->monthIndex == 0)
	{
		this->PreviousMonthButton->Show();
		this->unblockAllDays();
	}

	this->monthIndex++;

	if (this->currentDate->GetNumberOfDays() == 31)
	{
		this->Day28->Show();
		this->Day29->Show();
		this->Day30->Show();
		this->Day31->Show();
	}
	else if (this->currentDate->GetNumberOfDays() == 30)
	{
		this->Day31->Hide();
		this->Day28->Show();
		this->Day29->Show();
		this->Day30->Show();
	}
	else if (this->currentDate->GetNumberOfDays() == 29)
	{
		this->Day28->Show();
		this->Day29->Show();
		this->Day30->Hide();
		this->Day31->Hide();
	}
	else // 28
	{
		this->Day28->Show();
		this->Day29->Hide();
		this->Day30->Hide();
		this->Day31->Hide();
	}
}
private: System::Void PreviousMonthButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->currentDate->operator--();
	this->MonthLabel->Text = gcnew String(currentDate->GetMonthName().c_str()); // string to System::String
	this->YearLabel->Text = System::Convert::ToString(currentDate->GetYear());

	this->monthIndex--;
	if (this->monthIndex == 0)
	{
		this->blockPastDays(this->presentDay);
		this->PreviousMonthButton->Hide();
	}

	if (this->currentDate->GetNumberOfDays() == 31)
	{
		this->Day28->Show();
		this->Day29->Show();
		this->Day30->Show();
		this->Day31->Show();
	}
	else if (this->currentDate->GetNumberOfDays() == 30)
	{
		this->Day28->Show();
		this->Day29->Show();
		this->Day30->Show();
		this->Day31->Hide();
	}
	else if (this->currentDate->GetNumberOfDays() == 29)
	{
		this->Day28->Show();
		this->Day29->Show();
		this->Day30->Hide();
		this->Day31->Hide();
	}
	else // 28
	{
		this->Day28->Show();
		this->Day29->Hide();
		this->Day30->Hide();
		this->Day31->Hide();
	}
}
private: System::Void Day1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = {0};
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(1);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(2);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(3);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(4);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(5);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(6);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(7);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(8);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day9_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(9);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day10_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(10);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day11_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(11);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day12_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(12);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day13_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(13);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day14_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(14);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day15_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(15);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day16_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(16);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day17_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(17);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day18_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(18);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day19_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(19);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day20_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(20);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day21_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(21);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day22_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(22);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day23_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(23);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day24_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(24);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day25_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(25);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day26_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(26);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day27_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(27);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day28_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(28);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day29_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(29);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day30_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(30);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
private: System::Void Day31_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	int year, month = { 0 };
	CalculateSelectedDate(year, month);
	this->reservation.setYear(year);
	this->reservation.setMonth(month);
	this->reservation.setDay(31);

	MovieWindow^ movieWindow = gcnew MovieWindow(this->reservation, this);
	movieWindow->ShowDialog();
}
};
}
