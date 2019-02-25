#pragma once
#include <algorithm>
#include <vector>
#include "Reservation.h"
#include "Seatschecker.h"
#include "ReservationSaver.h"
#include "ConfirmationWindow.h"

namespace Cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// </summary>
	public ref class CinemaHallWindow : public System::Windows::Forms::Form
	{
	public:
		CinemaHallWindow(Reservation & reservation, System::Windows::Forms::Form ^previousForm, int cinemaNumber) : reservation(reservation)
		{
			this->cinemaNumber = cinemaNumber;
			this->previousForm = previousForm;
			InitializeComponent();

			// CHECK BOOKED SEATS FROM FILE

			std::string path = "../../booking/" + reservation.getCityName() + "/";
			path += std::to_string(reservation.getYear()) + "/" + std::to_string(reservation.getMonth())
				+ "/" + std::to_string(reservation.getDay()) + "/" + std::to_string(cinemaNumber) + ".txt";
			SeatsChecker seatschecker(path);
			std::vector <int> seats = seatschecker.getBookedSeats();

			// BLOCK BOOKED SEATS
			
			blockSeats(seats);
		
		}

		void blockSeats(std::vector <int> seats);
		void blockSeat(int seat);
		void unblockSeat(int seat);
	protected:
		/// <summary>
		/// </summary>
		~CinemaHallWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Button^  BackButton;
	private: System::Windows::Forms::Label^  ScreenLabel;
	private: System::Windows::Forms::Button^  a1;
	private: System::Windows::Forms::Button^  a2;
	private: System::Windows::Forms::Button^  a3;
	private: System::Windows::Forms::Button^  a4;
	private: System::Windows::Forms::Button^  a5;
	private: System::Windows::Forms::Button^  a6;
	private: System::Windows::Forms::Button^  a7;
	private: System::Windows::Forms::Button^  a8;
	private: System::Windows::Forms::Button^  a9;
	private: System::Windows::Forms::Button^  a10;
	private: System::Windows::Forms::Button^  a11;
	private: System::Windows::Forms::Button^  a12;
	private: System::Windows::Forms::Panel^  SeatsPanel;
	private: System::Windows::Forms::Button^  g9;
	private: System::Windows::Forms::Button^  g8;
	private: System::Windows::Forms::Button^  g7;
	private: System::Windows::Forms::Button^  g15;
	private: System::Windows::Forms::Button^  g14;
	private: System::Windows::Forms::Button^  g13;
	private: System::Windows::Forms::Button^  g12;
	private: System::Windows::Forms::Button^  g11;
	private: System::Windows::Forms::Button^  g10;
	private: System::Windows::Forms::Button^  f12;
	private: System::Windows::Forms::Button^  f11;
	private: System::Windows::Forms::Button^  f10;
	private: System::Windows::Forms::Button^  f9;
	private: System::Windows::Forms::Button^  f8;
	private: System::Windows::Forms::Button^  f7;
	private: System::Windows::Forms::Button^  e12;
	private: System::Windows::Forms::Button^  e11;
	private: System::Windows::Forms::Button^  e10;
	private: System::Windows::Forms::Button^  e9;
	private: System::Windows::Forms::Button^  e8;
	private: System::Windows::Forms::Button^  e7;
	private: System::Windows::Forms::Button^  d12;
	private: System::Windows::Forms::Button^  d11;
	private: System::Windows::Forms::Button^  d10;
	private: System::Windows::Forms::Button^  d9;
	private: System::Windows::Forms::Button^  d8;
	private: System::Windows::Forms::Button^  d7;
	private: System::Windows::Forms::Button^  c12;
	private: System::Windows::Forms::Button^  c11;
	private: System::Windows::Forms::Button^  c10;
	private: System::Windows::Forms::Button^  c9;
	private: System::Windows::Forms::Button^  c8;
	private: System::Windows::Forms::Button^  c7;
	private: System::Windows::Forms::Button^  b12;
	private: System::Windows::Forms::Button^  b11;
	private: System::Windows::Forms::Button^  b10;
	private: System::Windows::Forms::Button^  b9;
	private: System::Windows::Forms::Button^  b8;
	private: System::Windows::Forms::Button^  b7;
	private: System::Windows::Forms::Button^  g6;
	private: System::Windows::Forms::Button^  g5;
	private: System::Windows::Forms::Button^  g4;
	private: System::Windows::Forms::Button^  g3;
	private: System::Windows::Forms::Button^  g2;
	private: System::Windows::Forms::Button^  g1;
	private: System::Windows::Forms::Button^  f6;
	private: System::Windows::Forms::Button^  f5;
	private: System::Windows::Forms::Button^  f4;
	private: System::Windows::Forms::Button^  f3;
	private: System::Windows::Forms::Button^  f2;
	private: System::Windows::Forms::Button^  f1;
	private: System::Windows::Forms::Button^  e6;
	private: System::Windows::Forms::Button^  e5;
	private: System::Windows::Forms::Button^  e4;
	private: System::Windows::Forms::Button^  e3;
	private: System::Windows::Forms::Button^  e2;
	private: System::Windows::Forms::Button^  e1;
	private: System::Windows::Forms::Button^  d6;
	private: System::Windows::Forms::Button^  d5;
	private: System::Windows::Forms::Button^  d4;
	private: System::Windows::Forms::Button^  d3;
	private: System::Windows::Forms::Button^  d2;
	private: System::Windows::Forms::Button^  d1;
	private: System::Windows::Forms::Button^  c6;
	private: System::Windows::Forms::Button^  c5;
	private: System::Windows::Forms::Button^  c4;
	private: System::Windows::Forms::Button^  c3;
	private: System::Windows::Forms::Button^  c2;
	private: System::Windows::Forms::Button^  c1;
	private: System::Windows::Forms::Button^  b6;
	private: System::Windows::Forms::Button^  b5;
	private: System::Windows::Forms::Button^  b4;
	private: System::Windows::Forms::Button^  b3;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::Button^  b1;

	private: System::Windows::Forms::Button^  NextButton;
	private: System::Windows::Forms::Label^  BillLabel;
	private: System::Windows::Forms::Label^  PriceLabel;
	private: System::Windows::Forms::Label^  DollarLabel;


	private: System::Windows::Forms::Label^  ALabel;
	private: System::Windows::Forms::Label^  G;
	private: System::Windows::Forms::Label^  F;
	private: System::Windows::Forms::Label^  E;
	private: System::Windows::Forms::Label^  D;
	private: System::Windows::Forms::Label^  C;
	private: System::Windows::Forms::Label^  B;
	private: System::Windows::Forms::Label^  A;
	private: System::Windows::Forms::Label^  CLabel;
	private: System::Windows::Forms::Label^  BLabel;
	private: System::Windows::Forms::Label^  GLabel;
	private: System::Windows::Forms::Label^  FLabel;
	private: System::Windows::Forms::Label^  ELabel;
	private: System::Windows::Forms::Label^  DLabel;
	protected:

	private:
		/// <summary>
		// our variables
		Reservation & reservation;
		System::Windows::Forms::Form ^previousForm;
		int bill = 0;
		int cinemaNumber;

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CinemaHallWindow::typeid));
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->ScreenLabel = (gcnew System::Windows::Forms::Label());
			this->a1 = (gcnew System::Windows::Forms::Button());
			this->a2 = (gcnew System::Windows::Forms::Button());
			this->a3 = (gcnew System::Windows::Forms::Button());
			this->a4 = (gcnew System::Windows::Forms::Button());
			this->a5 = (gcnew System::Windows::Forms::Button());
			this->a6 = (gcnew System::Windows::Forms::Button());
			this->a7 = (gcnew System::Windows::Forms::Button());
			this->a8 = (gcnew System::Windows::Forms::Button());
			this->a9 = (gcnew System::Windows::Forms::Button());
			this->a10 = (gcnew System::Windows::Forms::Button());
			this->a11 = (gcnew System::Windows::Forms::Button());
			this->a12 = (gcnew System::Windows::Forms::Button());
			this->SeatsPanel = (gcnew System::Windows::Forms::Panel());
			this->CLabel = (gcnew System::Windows::Forms::Label());
			this->BLabel = (gcnew System::Windows::Forms::Label());
			this->ALabel = (gcnew System::Windows::Forms::Label());
			this->G = (gcnew System::Windows::Forms::Label());
			this->F = (gcnew System::Windows::Forms::Label());
			this->E = (gcnew System::Windows::Forms::Label());
			this->D = (gcnew System::Windows::Forms::Label());
			this->C = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::Label());
			this->A = (gcnew System::Windows::Forms::Label());
			this->g9 = (gcnew System::Windows::Forms::Button());
			this->g8 = (gcnew System::Windows::Forms::Button());
			this->g7 = (gcnew System::Windows::Forms::Button());
			this->g15 = (gcnew System::Windows::Forms::Button());
			this->g14 = (gcnew System::Windows::Forms::Button());
			this->g13 = (gcnew System::Windows::Forms::Button());
			this->g12 = (gcnew System::Windows::Forms::Button());
			this->g11 = (gcnew System::Windows::Forms::Button());
			this->g10 = (gcnew System::Windows::Forms::Button());
			this->f12 = (gcnew System::Windows::Forms::Button());
			this->f11 = (gcnew System::Windows::Forms::Button());
			this->f10 = (gcnew System::Windows::Forms::Button());
			this->f9 = (gcnew System::Windows::Forms::Button());
			this->f8 = (gcnew System::Windows::Forms::Button());
			this->f7 = (gcnew System::Windows::Forms::Button());
			this->e12 = (gcnew System::Windows::Forms::Button());
			this->e11 = (gcnew System::Windows::Forms::Button());
			this->e10 = (gcnew System::Windows::Forms::Button());
			this->e9 = (gcnew System::Windows::Forms::Button());
			this->e8 = (gcnew System::Windows::Forms::Button());
			this->e7 = (gcnew System::Windows::Forms::Button());
			this->d12 = (gcnew System::Windows::Forms::Button());
			this->d11 = (gcnew System::Windows::Forms::Button());
			this->d10 = (gcnew System::Windows::Forms::Button());
			this->d9 = (gcnew System::Windows::Forms::Button());
			this->d8 = (gcnew System::Windows::Forms::Button());
			this->d7 = (gcnew System::Windows::Forms::Button());
			this->c12 = (gcnew System::Windows::Forms::Button());
			this->c11 = (gcnew System::Windows::Forms::Button());
			this->c10 = (gcnew System::Windows::Forms::Button());
			this->c9 = (gcnew System::Windows::Forms::Button());
			this->c8 = (gcnew System::Windows::Forms::Button());
			this->c7 = (gcnew System::Windows::Forms::Button());
			this->b12 = (gcnew System::Windows::Forms::Button());
			this->b11 = (gcnew System::Windows::Forms::Button());
			this->b10 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->g6 = (gcnew System::Windows::Forms::Button());
			this->g5 = (gcnew System::Windows::Forms::Button());
			this->g4 = (gcnew System::Windows::Forms::Button());
			this->g3 = (gcnew System::Windows::Forms::Button());
			this->g2 = (gcnew System::Windows::Forms::Button());
			this->g1 = (gcnew System::Windows::Forms::Button());
			this->f6 = (gcnew System::Windows::Forms::Button());
			this->f5 = (gcnew System::Windows::Forms::Button());
			this->f4 = (gcnew System::Windows::Forms::Button());
			this->f3 = (gcnew System::Windows::Forms::Button());
			this->f2 = (gcnew System::Windows::Forms::Button());
			this->f1 = (gcnew System::Windows::Forms::Button());
			this->e6 = (gcnew System::Windows::Forms::Button());
			this->e5 = (gcnew System::Windows::Forms::Button());
			this->e4 = (gcnew System::Windows::Forms::Button());
			this->e3 = (gcnew System::Windows::Forms::Button());
			this->e2 = (gcnew System::Windows::Forms::Button());
			this->e1 = (gcnew System::Windows::Forms::Button());
			this->d6 = (gcnew System::Windows::Forms::Button());
			this->d5 = (gcnew System::Windows::Forms::Button());
			this->d4 = (gcnew System::Windows::Forms::Button());
			this->d3 = (gcnew System::Windows::Forms::Button());
			this->d2 = (gcnew System::Windows::Forms::Button());
			this->d1 = (gcnew System::Windows::Forms::Button());
			this->c6 = (gcnew System::Windows::Forms::Button());
			this->c5 = (gcnew System::Windows::Forms::Button());
			this->c4 = (gcnew System::Windows::Forms::Button());
			this->c3 = (gcnew System::Windows::Forms::Button());
			this->c2 = (gcnew System::Windows::Forms::Button());
			this->c1 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->BillLabel = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->DollarLabel = (gcnew System::Windows::Forms::Label());
			this->DLabel = (gcnew System::Windows::Forms::Label());
			this->ELabel = (gcnew System::Windows::Forms::Label());
			this->FLabel = (gcnew System::Windows::Forms::Label());
			this->GLabel = (gcnew System::Windows::Forms::Label());
			this->SeatsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// QuitButton
			// 
			resources->ApplyResources(this->QuitButton, L"QuitButton");
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->UseVisualStyleBackColor = true;
			this->QuitButton->Click += gcnew System::EventHandler(this, &CinemaHallWindow::QuitButton_Click);
			// 
			// BackButton
			// 
			resources->ApplyResources(this->BackButton, L"BackButton");
			this->BackButton->Name = L"BackButton";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &CinemaHallWindow::BackButton_Click);
			// 
			// ScreenLabel
			// 
			this->ScreenLabel->BackColor = System::Drawing::SystemColors::ScrollBar;
			resources->ApplyResources(this->ScreenLabel, L"ScreenLabel");
			this->ScreenLabel->Name = L"ScreenLabel";
			// 
			// a1
			// 
			resources->ApplyResources(this->a1, L"a1");
			this->a1->Name = L"a1";
			this->a1->UseVisualStyleBackColor = true;
			this->a1->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a1_Click);
			// 
			// a2
			// 
			resources->ApplyResources(this->a2, L"a2");
			this->a2->Name = L"a2";
			this->a2->UseVisualStyleBackColor = true;
			this->a2->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a2_Click);
			// 
			// a3
			// 
			resources->ApplyResources(this->a3, L"a3");
			this->a3->Name = L"a3";
			this->a3->UseVisualStyleBackColor = true;
			this->a3->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a3_Click);
			// 
			// a4
			// 
			resources->ApplyResources(this->a4, L"a4");
			this->a4->Name = L"a4";
			this->a4->UseVisualStyleBackColor = true;
			this->a4->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a4_Click);
			// 
			// a5
			// 
			resources->ApplyResources(this->a5, L"a5");
			this->a5->Name = L"a5";
			this->a5->UseVisualStyleBackColor = true;
			this->a5->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a5_Click);
			// 
			// a6
			// 
			resources->ApplyResources(this->a6, L"a6");
			this->a6->Name = L"a6";
			this->a6->UseVisualStyleBackColor = true;
			this->a6->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a6_Click);
			// 
			// a7
			// 
			resources->ApplyResources(this->a7, L"a7");
			this->a7->Name = L"a7";
			this->a7->UseVisualStyleBackColor = true;
			this->a7->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a7_Click);
			// 
			// a8
			// 
			resources->ApplyResources(this->a8, L"a8");
			this->a8->Name = L"a8";
			this->a8->UseVisualStyleBackColor = true;
			this->a8->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a8_Click);
			// 
			// a9
			// 
			resources->ApplyResources(this->a9, L"a9");
			this->a9->Name = L"a9";
			this->a9->UseVisualStyleBackColor = true;
			this->a9->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a9_Click);
			// 
			// a10
			// 
			resources->ApplyResources(this->a10, L"a10");
			this->a10->Name = L"a10";
			this->a10->UseVisualStyleBackColor = true;
			this->a10->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a10_Click);
			// 
			// a11
			// 
			resources->ApplyResources(this->a11, L"a11");
			this->a11->Name = L"a11";
			this->a11->UseVisualStyleBackColor = true;
			this->a11->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a11_Click);
			// 
			// a12
			// 
			resources->ApplyResources(this->a12, L"a12");
			this->a12->Name = L"a12";
			this->a12->UseVisualStyleBackColor = true;
			this->a12->Click += gcnew System::EventHandler(this, &CinemaHallWindow::a12_Click);
			// 
			// SeatsPanel
			// 
			this->SeatsPanel->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->SeatsPanel->Controls->Add(this->GLabel);
			this->SeatsPanel->Controls->Add(this->FLabel);
			this->SeatsPanel->Controls->Add(this->ELabel);
			this->SeatsPanel->Controls->Add(this->DLabel);
			this->SeatsPanel->Controls->Add(this->CLabel);
			this->SeatsPanel->Controls->Add(this->BLabel);
			this->SeatsPanel->Controls->Add(this->ALabel);
			this->SeatsPanel->Controls->Add(this->G);
			this->SeatsPanel->Controls->Add(this->F);
			this->SeatsPanel->Controls->Add(this->E);
			this->SeatsPanel->Controls->Add(this->D);
			this->SeatsPanel->Controls->Add(this->C);
			this->SeatsPanel->Controls->Add(this->B);
			this->SeatsPanel->Controls->Add(this->A);
			this->SeatsPanel->Controls->Add(this->g9);
			this->SeatsPanel->Controls->Add(this->g8);
			this->SeatsPanel->Controls->Add(this->g7);
			this->SeatsPanel->Controls->Add(this->g15);
			this->SeatsPanel->Controls->Add(this->g14);
			this->SeatsPanel->Controls->Add(this->g13);
			this->SeatsPanel->Controls->Add(this->g12);
			this->SeatsPanel->Controls->Add(this->g11);
			this->SeatsPanel->Controls->Add(this->g10);
			this->SeatsPanel->Controls->Add(this->f12);
			this->SeatsPanel->Controls->Add(this->f11);
			this->SeatsPanel->Controls->Add(this->f10);
			this->SeatsPanel->Controls->Add(this->f9);
			this->SeatsPanel->Controls->Add(this->f8);
			this->SeatsPanel->Controls->Add(this->f7);
			this->SeatsPanel->Controls->Add(this->e12);
			this->SeatsPanel->Controls->Add(this->e11);
			this->SeatsPanel->Controls->Add(this->e10);
			this->SeatsPanel->Controls->Add(this->e9);
			this->SeatsPanel->Controls->Add(this->e8);
			this->SeatsPanel->Controls->Add(this->e7);
			this->SeatsPanel->Controls->Add(this->d12);
			this->SeatsPanel->Controls->Add(this->d11);
			this->SeatsPanel->Controls->Add(this->d10);
			this->SeatsPanel->Controls->Add(this->d9);
			this->SeatsPanel->Controls->Add(this->d8);
			this->SeatsPanel->Controls->Add(this->d7);
			this->SeatsPanel->Controls->Add(this->c12);
			this->SeatsPanel->Controls->Add(this->c11);
			this->SeatsPanel->Controls->Add(this->c10);
			this->SeatsPanel->Controls->Add(this->c9);
			this->SeatsPanel->Controls->Add(this->c8);
			this->SeatsPanel->Controls->Add(this->c7);
			this->SeatsPanel->Controls->Add(this->b12);
			this->SeatsPanel->Controls->Add(this->b11);
			this->SeatsPanel->Controls->Add(this->b10);
			this->SeatsPanel->Controls->Add(this->b9);
			this->SeatsPanel->Controls->Add(this->b8);
			this->SeatsPanel->Controls->Add(this->b7);
			this->SeatsPanel->Controls->Add(this->g6);
			this->SeatsPanel->Controls->Add(this->g5);
			this->SeatsPanel->Controls->Add(this->g4);
			this->SeatsPanel->Controls->Add(this->g3);
			this->SeatsPanel->Controls->Add(this->g2);
			this->SeatsPanel->Controls->Add(this->g1);
			this->SeatsPanel->Controls->Add(this->f6);
			this->SeatsPanel->Controls->Add(this->f5);
			this->SeatsPanel->Controls->Add(this->f4);
			this->SeatsPanel->Controls->Add(this->f3);
			this->SeatsPanel->Controls->Add(this->f2);
			this->SeatsPanel->Controls->Add(this->f1);
			this->SeatsPanel->Controls->Add(this->e6);
			this->SeatsPanel->Controls->Add(this->e5);
			this->SeatsPanel->Controls->Add(this->e4);
			this->SeatsPanel->Controls->Add(this->e3);
			this->SeatsPanel->Controls->Add(this->e2);
			this->SeatsPanel->Controls->Add(this->e1);
			this->SeatsPanel->Controls->Add(this->d6);
			this->SeatsPanel->Controls->Add(this->d5);
			this->SeatsPanel->Controls->Add(this->d4);
			this->SeatsPanel->Controls->Add(this->d3);
			this->SeatsPanel->Controls->Add(this->d2);
			this->SeatsPanel->Controls->Add(this->d1);
			this->SeatsPanel->Controls->Add(this->c6);
			this->SeatsPanel->Controls->Add(this->c5);
			this->SeatsPanel->Controls->Add(this->c4);
			this->SeatsPanel->Controls->Add(this->c3);
			this->SeatsPanel->Controls->Add(this->c2);
			this->SeatsPanel->Controls->Add(this->c1);
			this->SeatsPanel->Controls->Add(this->b6);
			this->SeatsPanel->Controls->Add(this->b5);
			this->SeatsPanel->Controls->Add(this->b4);
			this->SeatsPanel->Controls->Add(this->b3);
			this->SeatsPanel->Controls->Add(this->b2);
			this->SeatsPanel->Controls->Add(this->b1);
			this->SeatsPanel->Controls->Add(this->a12);
			this->SeatsPanel->Controls->Add(this->a11);
			this->SeatsPanel->Controls->Add(this->a10);
			this->SeatsPanel->Controls->Add(this->a9);
			this->SeatsPanel->Controls->Add(this->a8);
			this->SeatsPanel->Controls->Add(this->a7);
			this->SeatsPanel->Controls->Add(this->a6);
			this->SeatsPanel->Controls->Add(this->a5);
			this->SeatsPanel->Controls->Add(this->a4);
			this->SeatsPanel->Controls->Add(this->a3);
			this->SeatsPanel->Controls->Add(this->a2);
			this->SeatsPanel->Controls->Add(this->a1);
			resources->ApplyResources(this->SeatsPanel, L"SeatsPanel");
			this->SeatsPanel->Name = L"SeatsPanel";
			// 
			// CLabel
			// 
			resources->ApplyResources(this->CLabel, L"CLabel");
			this->CLabel->Name = L"CLabel";
			// 
			// BLabel
			// 
			resources->ApplyResources(this->BLabel, L"BLabel");
			this->BLabel->Name = L"BLabel";
			// 
			// ALabel
			// 
			resources->ApplyResources(this->ALabel, L"ALabel");
			this->ALabel->Name = L"ALabel";
			// 
			// G
			// 
			resources->ApplyResources(this->G, L"G");
			this->G->Name = L"G";
			// 
			// F
			// 
			resources->ApplyResources(this->F, L"F");
			this->F->Name = L"F";
			// 
			// E
			// 
			resources->ApplyResources(this->E, L"E");
			this->E->Name = L"E";
			// 
			// D
			// 
			resources->ApplyResources(this->D, L"D");
			this->D->Name = L"D";
			// 
			// C
			// 
			resources->ApplyResources(this->C, L"C");
			this->C->Name = L"C";
			// 
			// B
			// 
			resources->ApplyResources(this->B, L"B");
			this->B->Name = L"B";
			// 
			// A
			// 
			resources->ApplyResources(this->A, L"A");
			this->A->Name = L"A";
			// 
			// g9
			// 
			resources->ApplyResources(this->g9, L"g9");
			this->g9->Name = L"g9";
			this->g9->UseVisualStyleBackColor = true;
			this->g9->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g9_Click);
			// 
			// g8
			// 
			resources->ApplyResources(this->g8, L"g8");
			this->g8->Name = L"g8";
			this->g8->UseVisualStyleBackColor = true;
			this->g8->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g8_Click);
			// 
			// g7
			// 
			resources->ApplyResources(this->g7, L"g7");
			this->g7->Name = L"g7";
			this->g7->UseVisualStyleBackColor = true;
			this->g7->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g7_Click);
			// 
			// g15
			// 
			resources->ApplyResources(this->g15, L"g15");
			this->g15->Name = L"g15";
			this->g15->UseVisualStyleBackColor = true;
			this->g15->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g15_Click);
			// 
			// g14
			// 
			resources->ApplyResources(this->g14, L"g14");
			this->g14->Name = L"g14";
			this->g14->UseVisualStyleBackColor = true;
			this->g14->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g14_Click);
			// 
			// g13
			// 
			resources->ApplyResources(this->g13, L"g13");
			this->g13->Name = L"g13";
			this->g13->UseVisualStyleBackColor = true;
			this->g13->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g13_Click);
			// 
			// g12
			// 
			resources->ApplyResources(this->g12, L"g12");
			this->g12->Name = L"g12";
			this->g12->UseVisualStyleBackColor = true;
			this->g12->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g12_Click);
			// 
			// g11
			// 
			resources->ApplyResources(this->g11, L"g11");
			this->g11->Name = L"g11";
			this->g11->UseVisualStyleBackColor = true;
			this->g11->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g11_Click);
			// 
			// g10
			// 
			resources->ApplyResources(this->g10, L"g10");
			this->g10->Name = L"g10";
			this->g10->UseVisualStyleBackColor = true;
			this->g10->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g10_Click);
			// 
			// f12
			// 
			resources->ApplyResources(this->f12, L"f12");
			this->f12->Name = L"f12";
			this->f12->UseVisualStyleBackColor = true;
			this->f12->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f12_Click);
			// 
			// f11
			// 
			resources->ApplyResources(this->f11, L"f11");
			this->f11->Name = L"f11";
			this->f11->UseVisualStyleBackColor = true;
			this->f11->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f11_Click);
			// 
			// f10
			// 
			resources->ApplyResources(this->f10, L"f10");
			this->f10->Name = L"f10";
			this->f10->UseVisualStyleBackColor = true;
			this->f10->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f10_Click);
			// 
			// f9
			// 
			resources->ApplyResources(this->f9, L"f9");
			this->f9->Name = L"f9";
			this->f9->UseVisualStyleBackColor = true;
			this->f9->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f9_Click);
			// 
			// f8
			// 
			resources->ApplyResources(this->f8, L"f8");
			this->f8->Name = L"f8";
			this->f8->UseVisualStyleBackColor = true;
			this->f8->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f8_Click);
			// 
			// f7
			// 
			resources->ApplyResources(this->f7, L"f7");
			this->f7->Name = L"f7";
			this->f7->UseVisualStyleBackColor = true;
			this->f7->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f7_Click);
			// 
			// e12
			// 
			resources->ApplyResources(this->e12, L"e12");
			this->e12->Name = L"e12";
			this->e12->UseVisualStyleBackColor = true;
			this->e12->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e12_Click);
			// 
			// e11
			// 
			resources->ApplyResources(this->e11, L"e11");
			this->e11->Name = L"e11";
			this->e11->UseVisualStyleBackColor = true;
			this->e11->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e11_Click);
			// 
			// e10
			// 
			resources->ApplyResources(this->e10, L"e10");
			this->e10->Name = L"e10";
			this->e10->UseVisualStyleBackColor = true;
			this->e10->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e10_Click);
			// 
			// e9
			// 
			resources->ApplyResources(this->e9, L"e9");
			this->e9->Name = L"e9";
			this->e9->UseVisualStyleBackColor = true;
			this->e9->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e9_Click);
			// 
			// e8
			// 
			resources->ApplyResources(this->e8, L"e8");
			this->e8->Name = L"e8";
			this->e8->UseVisualStyleBackColor = true;
			this->e8->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e8_Click);
			// 
			// e7
			// 
			resources->ApplyResources(this->e7, L"e7");
			this->e7->Name = L"e7";
			this->e7->UseVisualStyleBackColor = true;
			this->e7->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e7_Click);
			// 
			// d12
			// 
			resources->ApplyResources(this->d12, L"d12");
			this->d12->Name = L"d12";
			this->d12->UseVisualStyleBackColor = true;
			this->d12->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d12_Click);
			// 
			// d11
			// 
			resources->ApplyResources(this->d11, L"d11");
			this->d11->Name = L"d11";
			this->d11->UseVisualStyleBackColor = true;
			this->d11->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d11_Click);
			// 
			// d10
			// 
			resources->ApplyResources(this->d10, L"d10");
			this->d10->Name = L"d10";
			this->d10->UseVisualStyleBackColor = true;
			this->d10->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d10_Click);
			// 
			// d9
			// 
			resources->ApplyResources(this->d9, L"d9");
			this->d9->Name = L"d9";
			this->d9->UseVisualStyleBackColor = true;
			this->d9->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d9_Click);
			// 
			// d8
			// 
			resources->ApplyResources(this->d8, L"d8");
			this->d8->Name = L"d8";
			this->d8->UseVisualStyleBackColor = true;
			this->d8->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d8_Click);
			// 
			// d7
			// 
			resources->ApplyResources(this->d7, L"d7");
			this->d7->Name = L"d7";
			this->d7->UseVisualStyleBackColor = true;
			this->d7->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d7_Click);
			// 
			// c12
			// 
			resources->ApplyResources(this->c12, L"c12");
			this->c12->Name = L"c12";
			this->c12->UseVisualStyleBackColor = true;
			this->c12->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c12_Click);
			// 
			// c11
			// 
			resources->ApplyResources(this->c11, L"c11");
			this->c11->Name = L"c11";
			this->c11->UseVisualStyleBackColor = true;
			this->c11->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c11_Click);
			// 
			// c10
			// 
			resources->ApplyResources(this->c10, L"c10");
			this->c10->Name = L"c10";
			this->c10->UseVisualStyleBackColor = true;
			this->c10->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c10_Click);
			// 
			// c9
			// 
			resources->ApplyResources(this->c9, L"c9");
			this->c9->Name = L"c9";
			this->c9->UseVisualStyleBackColor = true;
			this->c9->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c9_Click);
			// 
			// c8
			// 
			resources->ApplyResources(this->c8, L"c8");
			this->c8->Name = L"c8";
			this->c8->UseVisualStyleBackColor = true;
			this->c8->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c8_Click);
			// 
			// c7
			// 
			resources->ApplyResources(this->c7, L"c7");
			this->c7->Name = L"c7";
			this->c7->UseVisualStyleBackColor = true;
			this->c7->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c7_Click);
			// 
			// b12
			// 
			resources->ApplyResources(this->b12, L"b12");
			this->b12->Name = L"b12";
			this->b12->UseVisualStyleBackColor = true;
			this->b12->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b12_Click);
			// 
			// b11
			// 
			resources->ApplyResources(this->b11, L"b11");
			this->b11->Name = L"b11";
			this->b11->UseVisualStyleBackColor = true;
			this->b11->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b11_Click);
			// 
			// b10
			// 
			resources->ApplyResources(this->b10, L"b10");
			this->b10->Name = L"b10";
			this->b10->UseVisualStyleBackColor = true;
			this->b10->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b10_Click);
			// 
			// b9
			// 
			resources->ApplyResources(this->b9, L"b9");
			this->b9->Name = L"b9";
			this->b9->UseVisualStyleBackColor = true;
			this->b9->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b9_Click);
			// 
			// b8
			// 
			resources->ApplyResources(this->b8, L"b8");
			this->b8->Name = L"b8";
			this->b8->UseVisualStyleBackColor = true;
			this->b8->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b8_Click);
			// 
			// b7
			// 
			resources->ApplyResources(this->b7, L"b7");
			this->b7->Name = L"b7";
			this->b7->UseVisualStyleBackColor = true;
			this->b7->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b7_Click);
			// 
			// g6
			// 
			resources->ApplyResources(this->g6, L"g6");
			this->g6->Name = L"g6";
			this->g6->UseVisualStyleBackColor = true;
			this->g6->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g6_Click);
			// 
			// g5
			// 
			resources->ApplyResources(this->g5, L"g5");
			this->g5->Name = L"g5";
			this->g5->UseVisualStyleBackColor = true;
			this->g5->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g5_Click);
			// 
			// g4
			// 
			resources->ApplyResources(this->g4, L"g4");
			this->g4->Name = L"g4";
			this->g4->UseVisualStyleBackColor = true;
			this->g4->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g4_Click);
			// 
			// g3
			// 
			resources->ApplyResources(this->g3, L"g3");
			this->g3->Name = L"g3";
			this->g3->UseVisualStyleBackColor = true;
			this->g3->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g3_Click);
			// 
			// g2
			// 
			resources->ApplyResources(this->g2, L"g2");
			this->g2->Name = L"g2";
			this->g2->UseVisualStyleBackColor = true;
			this->g2->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g2_Click);
			// 
			// g1
			// 
			resources->ApplyResources(this->g1, L"g1");
			this->g1->Name = L"g1";
			this->g1->UseVisualStyleBackColor = true;
			this->g1->Click += gcnew System::EventHandler(this, &CinemaHallWindow::g1_Click);
			// 
			// f6
			// 
			resources->ApplyResources(this->f6, L"f6");
			this->f6->Name = L"f6";
			this->f6->UseVisualStyleBackColor = true;
			this->f6->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f6_Click);
			// 
			// f5
			// 
			resources->ApplyResources(this->f5, L"f5");
			this->f5->Name = L"f5";
			this->f5->UseVisualStyleBackColor = true;
			this->f5->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f5_Click);
			// 
			// f4
			// 
			resources->ApplyResources(this->f4, L"f4");
			this->f4->Name = L"f4";
			this->f4->UseVisualStyleBackColor = true;
			this->f4->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f4_Click);
			// 
			// f3
			// 
			resources->ApplyResources(this->f3, L"f3");
			this->f3->Name = L"f3";
			this->f3->UseVisualStyleBackColor = true;
			this->f3->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f3_Click);
			// 
			// f2
			// 
			resources->ApplyResources(this->f2, L"f2");
			this->f2->Name = L"f2";
			this->f2->UseVisualStyleBackColor = true;
			this->f2->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f2_Click);
			// 
			// f1
			// 
			resources->ApplyResources(this->f1, L"f1");
			this->f1->Name = L"f1";
			this->f1->UseVisualStyleBackColor = true;
			this->f1->Click += gcnew System::EventHandler(this, &CinemaHallWindow::f1_Click);
			// 
			// e6
			// 
			resources->ApplyResources(this->e6, L"e6");
			this->e6->Name = L"e6";
			this->e6->UseVisualStyleBackColor = true;
			this->e6->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e6_Click);
			// 
			// e5
			// 
			resources->ApplyResources(this->e5, L"e5");
			this->e5->Name = L"e5";
			this->e5->UseVisualStyleBackColor = true;
			this->e5->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e5_Click);
			// 
			// e4
			// 
			resources->ApplyResources(this->e4, L"e4");
			this->e4->Name = L"e4";
			this->e4->UseVisualStyleBackColor = true;
			this->e4->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e4_Click);
			// 
			// e3
			// 
			resources->ApplyResources(this->e3, L"e3");
			this->e3->Name = L"e3";
			this->e3->UseVisualStyleBackColor = true;
			this->e3->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e3_Click);
			// 
			// e2
			// 
			resources->ApplyResources(this->e2, L"e2");
			this->e2->Name = L"e2";
			this->e2->UseVisualStyleBackColor = true;
			this->e2->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e2_Click);
			// 
			// e1
			// 
			resources->ApplyResources(this->e1, L"e1");
			this->e1->Name = L"e1";
			this->e1->UseVisualStyleBackColor = true;
			this->e1->Click += gcnew System::EventHandler(this, &CinemaHallWindow::e1_Click);
			// 
			// d6
			// 
			resources->ApplyResources(this->d6, L"d6");
			this->d6->Name = L"d6";
			this->d6->UseVisualStyleBackColor = true;
			this->d6->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d6_Click);
			// 
			// d5
			// 
			resources->ApplyResources(this->d5, L"d5");
			this->d5->Name = L"d5";
			this->d5->UseVisualStyleBackColor = true;
			this->d5->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d5_Click);
			// 
			// d4
			// 
			resources->ApplyResources(this->d4, L"d4");
			this->d4->Name = L"d4";
			this->d4->UseVisualStyleBackColor = true;
			this->d4->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d4_Click);
			// 
			// d3
			// 
			resources->ApplyResources(this->d3, L"d3");
			this->d3->Name = L"d3";
			this->d3->UseVisualStyleBackColor = true;
			this->d3->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d3_Click);
			// 
			// d2
			// 
			resources->ApplyResources(this->d2, L"d2");
			this->d2->Name = L"d2";
			this->d2->UseVisualStyleBackColor = true;
			this->d2->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d2_Click);
			// 
			// d1
			// 
			resources->ApplyResources(this->d1, L"d1");
			this->d1->Name = L"d1";
			this->d1->UseVisualStyleBackColor = true;
			this->d1->Click += gcnew System::EventHandler(this, &CinemaHallWindow::d1_Click);
			// 
			// c6
			// 
			resources->ApplyResources(this->c6, L"c6");
			this->c6->Name = L"c6";
			this->c6->UseVisualStyleBackColor = true;
			this->c6->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c6_Click);
			// 
			// c5
			// 
			resources->ApplyResources(this->c5, L"c5");
			this->c5->Name = L"c5";
			this->c5->UseVisualStyleBackColor = true;
			this->c5->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c5_Click);
			// 
			// c4
			// 
			resources->ApplyResources(this->c4, L"c4");
			this->c4->Name = L"c4";
			this->c4->UseVisualStyleBackColor = true;
			this->c4->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c4_Click);
			// 
			// c3
			// 
			resources->ApplyResources(this->c3, L"c3");
			this->c3->Name = L"c3";
			this->c3->UseVisualStyleBackColor = true;
			this->c3->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c3_Click);
			// 
			// c2
			// 
			resources->ApplyResources(this->c2, L"c2");
			this->c2->Name = L"c2";
			this->c2->UseVisualStyleBackColor = true;
			this->c2->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c2_Click);
			// 
			// c1
			// 
			resources->ApplyResources(this->c1, L"c1");
			this->c1->Name = L"c1";
			this->c1->UseVisualStyleBackColor = true;
			this->c1->Click += gcnew System::EventHandler(this, &CinemaHallWindow::c1_Click);
			// 
			// b6
			// 
			resources->ApplyResources(this->b6, L"b6");
			this->b6->Name = L"b6";
			this->b6->UseVisualStyleBackColor = true;
			this->b6->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b6_Click);
			// 
			// b5
			// 
			resources->ApplyResources(this->b5, L"b5");
			this->b5->Name = L"b5";
			this->b5->UseVisualStyleBackColor = true;
			this->b5->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b5_Click);
			// 
			// b4
			// 
			resources->ApplyResources(this->b4, L"b4");
			this->b4->Name = L"b4";
			this->b4->UseVisualStyleBackColor = true;
			this->b4->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b4_Click);
			// 
			// b3
			// 
			resources->ApplyResources(this->b3, L"b3");
			this->b3->Name = L"b3";
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b3_Click);
			// 
			// b2
			// 
			resources->ApplyResources(this->b2, L"b2");
			this->b2->Name = L"b2";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b2_Click);
			// 
			// b1
			// 
			resources->ApplyResources(this->b1, L"b1");
			this->b1->Name = L"b1";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &CinemaHallWindow::b1_Click);
			// 
			// NextButton
			// 
			this->NextButton->BackColor = System::Drawing::Color::MediumSeaGreen;
			resources->ApplyResources(this->NextButton, L"NextButton");
			this->NextButton->Name = L"NextButton";
			this->NextButton->UseVisualStyleBackColor = false;
			this->NextButton->Click += gcnew System::EventHandler(this, &CinemaHallWindow::NextButton_Click);
			// 
			// BillLabel
			// 
			resources->ApplyResources(this->BillLabel, L"BillLabel");
			this->BillLabel->Name = L"BillLabel";
			// 
			// PriceLabel
			// 
			resources->ApplyResources(this->PriceLabel, L"PriceLabel");
			this->PriceLabel->Name = L"PriceLabel";
			// 
			// DollarLabel
			// 
			resources->ApplyResources(this->DollarLabel, L"DollarLabel");
			this->DollarLabel->Name = L"DollarLabel";
			// 
			// DLabel
			// 
			resources->ApplyResources(this->DLabel, L"DLabel");
			this->DLabel->Name = L"DLabel";
			// 
			// ELabel
			// 
			resources->ApplyResources(this->ELabel, L"ELabel");
			this->ELabel->Name = L"ELabel";
			// 
			// FLabel
			// 
			resources->ApplyResources(this->FLabel, L"FLabel");
			this->FLabel->Name = L"FLabel";
			// 
			// GLabel
			// 
			resources->ApplyResources(this->GLabel, L"GLabel");
			this->GLabel->Name = L"GLabel";
			// 
			// CinemaHallWindow
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Controls->Add(this->DollarLabel);
			this->Controls->Add(this->PriceLabel);
			this->Controls->Add(this->BillLabel);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->ScreenLabel);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->SeatsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CinemaHallWindow";
			this->SeatsPanel->ResumeLayout(false);
			this->SeatsPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void a1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a1->BackColor != System::Drawing::Color::Orange)
	{
		this->a1->BackColor = System::Drawing::Color::Orange;
		blockSeat(0);
	}
	else
	{
		this->a1->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(0);
	}
}
private: System::Void a2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a2->BackColor != System::Drawing::Color::Orange)
	{
		this->a2->BackColor = System::Drawing::Color::Orange;
		blockSeat(1);
	}
	else
	{
		this->a2->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(1);
	}
}
private: System::Void a3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a3->BackColor != System::Drawing::Color::Orange)
	{
		this->a3->BackColor = System::Drawing::Color::Orange;
		blockSeat(2);
	}
	else
	{
		this->a3->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(2);
	}
}
private: System::Void a4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a4->BackColor != System::Drawing::Color::Orange)
	{
		this->a4->BackColor = System::Drawing::Color::Orange;
		blockSeat(3);
	}
	else
	{
		this->a4->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(3);
	}
}
private: System::Void a5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a5->BackColor != System::Drawing::Color::Orange)
	{
		this->a5->BackColor = System::Drawing::Color::Orange;
		blockSeat(4);
	}
	else
	{
		this->a5->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(4);
	}
}
private: System::Void a6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a6->BackColor != System::Drawing::Color::Orange)
	{
		this->a6->BackColor = System::Drawing::Color::Orange;
		blockSeat(5);
	}
	else
	{
		this->a6->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(5);
	}
}
private: System::Void a7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a7->BackColor != System::Drawing::Color::Orange)
	{
		this->a7->BackColor = System::Drawing::Color::Orange;
		blockSeat(6);
	}
	else
	{
		this->a7->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(6);
	}
}
private: System::Void a8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a8->BackColor != System::Drawing::Color::Orange)
	{
		this->a8->BackColor = System::Drawing::Color::Orange;
		blockSeat(7);
	}
	else
	{
		this->a8->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(7);
	}
}
private: System::Void a9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a9->BackColor != System::Drawing::Color::Orange)
	{
		this->a9->BackColor = System::Drawing::Color::Orange;
		blockSeat(8);
	}
	else
	{
		this->a9->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(8);
	}
}
private: System::Void a10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a10->BackColor != System::Drawing::Color::Orange)
	{
		this->a10->BackColor = System::Drawing::Color::Orange;
		blockSeat(9);
	}
	else
	{
		this->a10->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(9);
	}
}
private: System::Void a11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a11->BackColor != System::Drawing::Color::Orange)
	{
		this->a11->BackColor = System::Drawing::Color::Orange;
		blockSeat(10);
	}
	else
	{
		this->a11->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(10);
	}
}
private: System::Void a12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->a12->BackColor != System::Drawing::Color::Orange)
	{
		this->a12->BackColor = System::Drawing::Color::Orange;
		blockSeat(11);
	}
	else
	{
		this->a12->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(11);
	}
}
private: System::Void b1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b1->BackColor != System::Drawing::Color::Orange)
	{
		this->b1->BackColor = System::Drawing::Color::Orange;
		blockSeat(12);
	}
	else
	{
		this->b1->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(12);
	}
}
private: System::Void b2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b2->BackColor != System::Drawing::Color::Orange)
	{
		this->b2->BackColor = System::Drawing::Color::Orange;
		blockSeat(13);
	}
	else
	{
		this->b2->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(13);
	}
}
private: System::Void b3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b3->BackColor != System::Drawing::Color::Orange)
	{
		this->b3->BackColor = System::Drawing::Color::Orange;
		blockSeat(14);
	}
	else
	{
		this->b3->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(14);
	}
}
private: System::Void b4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b4->BackColor != System::Drawing::Color::Orange)
	{
		this->b4->BackColor = System::Drawing::Color::Orange;
		blockSeat(15);
	}
	else
	{
		this->b4->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(15);
	}
}
private: System::Void b5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b5->BackColor != System::Drawing::Color::Orange)
	{
		this->b5->BackColor = System::Drawing::Color::Orange;
		blockSeat(16);
	}
	else
	{
		this->b5->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(16);
	}
}
private: System::Void b6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b6->BackColor != System::Drawing::Color::Orange)
	{
		this->b6->BackColor = System::Drawing::Color::Orange;
		blockSeat(17);
	}
	else
	{
		this->b6->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(17);
	}
}
private: System::Void b7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b7->BackColor != System::Drawing::Color::Orange)
	{
		this->b7->BackColor = System::Drawing::Color::Orange;
		blockSeat(18);
	}
	else
	{
		this->b7->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(18);
	}
}
private: System::Void b8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b8->BackColor != System::Drawing::Color::Orange)
	{
		this->b8->BackColor = System::Drawing::Color::Orange;
		blockSeat(19);
	}
	else
	{
		this->b8->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(19);
	}
}
private: System::Void b9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b9->BackColor != System::Drawing::Color::Orange)
	{
		this->b9->BackColor = System::Drawing::Color::Orange;
		blockSeat(20);
	}
	else
	{
		this->b9->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(20);
	}
}
private: System::Void b10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b10->BackColor != System::Drawing::Color::Orange)
	{
		this->b10->BackColor = System::Drawing::Color::Orange;
		blockSeat(21);
	}
	else
	{
		this->b10->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(21);
	}
}
private: System::Void b11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b11->BackColor != System::Drawing::Color::Orange)
	{
		this->b11->BackColor = System::Drawing::Color::Orange;
		blockSeat(22);
	}
	else
	{
		this->b11->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(22);
	}
}
private: System::Void b12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->b12->BackColor != System::Drawing::Color::Orange)
	{
		this->b12->BackColor = System::Drawing::Color::Orange;
		blockSeat(23);
	}
	else
	{
		this->b12->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(23);
	}
}
private: System::Void c1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c1->BackColor != System::Drawing::Color::Orange)
	{
		this->c1->BackColor = System::Drawing::Color::Orange;
		blockSeat(24);
	}
	else
	{
		this->c1->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(24);
	}
}
private: System::Void c2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c2->BackColor != System::Drawing::Color::Orange)
	{
		this->c2->BackColor = System::Drawing::Color::Orange;
		blockSeat(25);
	}
	else
	{
		this->c2->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(25);
	}
}
private: System::Void c3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c3->BackColor != System::Drawing::Color::Orange)
	{
		this->c3->BackColor = System::Drawing::Color::Orange;
		blockSeat(26);
	}
	else
	{
		this->c3->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(26);
	}
}
private: System::Void c4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c4->BackColor != System::Drawing::Color::Orange)
	{
		this->c4->BackColor = System::Drawing::Color::Orange;
		blockSeat(27);
	}
	else
	{
		this->c4->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(27);
	}
}
private: System::Void c5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c5->BackColor != System::Drawing::Color::Orange)
	{
		this->c5->BackColor = System::Drawing::Color::Orange;
		blockSeat(28);
	}
	else
	{
		this->c5->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(28);
	}
}
private: System::Void c6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c6->BackColor != System::Drawing::Color::Orange)
	{
		this->c6->BackColor = System::Drawing::Color::Orange;
		blockSeat(29);
	}
	else
	{
		this->c6->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(29);
	}
}
private: System::Void c7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c7->BackColor != System::Drawing::Color::Orange)
	{
		this->c7->BackColor = System::Drawing::Color::Orange;
		blockSeat(30);
	}
	else
	{
		this->c7->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(30);
	}
}
private: System::Void c8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c8->BackColor != System::Drawing::Color::Orange)
	{
		this->c8->BackColor = System::Drawing::Color::Orange;
		blockSeat(31);
	}
	else
	{
		this->c8->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(31);
	}
}
private: System::Void c9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c9->BackColor != System::Drawing::Color::Orange)
	{
		this->c9->BackColor = System::Drawing::Color::Orange;
		blockSeat(32);
	}
	else
	{
		this->c9->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(32);
	}
}
private: System::Void c10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c10->BackColor != System::Drawing::Color::Orange)
	{
		this->c10->BackColor = System::Drawing::Color::Orange;
		blockSeat(33);
	}
	else
	{
		this->c10->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(33);
	}
}
private: System::Void c11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c11->BackColor != System::Drawing::Color::Orange)
	{
		this->c11->BackColor = System::Drawing::Color::Orange;
		blockSeat(34);
	}
	else
	{
		this->c11->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(34);
	}
}
private: System::Void c12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->c12->BackColor != System::Drawing::Color::Orange)
	{
		this->c12->BackColor = System::Drawing::Color::Orange;
		blockSeat(35);
	}
	else
	{
		this->c12->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(35);
	}
}
private: System::Void d12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d12->BackColor != System::Drawing::Color::Orange)
	{
		this->d12->BackColor = System::Drawing::Color::Orange;
		blockSeat(47);
	}
	else
	{
		this->d12->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(47);
	}
}
private: System::Void d11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d11->BackColor != System::Drawing::Color::Orange)
	{
		this->d11->BackColor = System::Drawing::Color::Orange;
		blockSeat(46);
	}
	else
	{
		this->d11->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(46);
	}
}
private: System::Void d10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d10->BackColor != System::Drawing::Color::Orange)
	{
		this->d10->BackColor = System::Drawing::Color::Orange;
		blockSeat(45);
	}
	else
	{
		this->d10->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(45);
	}
}
private: System::Void d9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d9->BackColor != System::Drawing::Color::Orange)
	{
		this->d9->BackColor = System::Drawing::Color::Orange;
		blockSeat(44);
	}
	else
	{
		this->d9->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(44);
	}
}
private: System::Void d8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d8->BackColor != System::Drawing::Color::Orange)
	{
		this->d8->BackColor = System::Drawing::Color::Orange;
		blockSeat(43);
	}
	else
	{
		this->d8->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(43);
	}
}
private: System::Void d7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d7->BackColor != System::Drawing::Color::Orange)
	{
		this->d7->BackColor = System::Drawing::Color::Orange;
		blockSeat(42);
	}
	else
	{
		this->d7->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(42);
	}
}
private: System::Void d6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d6->BackColor != System::Drawing::Color::Orange)
	{
		this->d6->BackColor = System::Drawing::Color::Orange;
		blockSeat(41);
	}
	else
	{
		this->d6->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(41);
	}
}
private: System::Void d5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d5->BackColor != System::Drawing::Color::Orange)
	{
		this->d5->BackColor = System::Drawing::Color::Orange;
		blockSeat(40);
	}
	else
	{
		this->d5->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(40);
	}
}
private: System::Void d4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d4->BackColor != System::Drawing::Color::Orange)
	{
		this->d4->BackColor = System::Drawing::Color::Orange;
		blockSeat(39);
	}
	else
	{
		this->d4->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(39);
	}
}
private: System::Void d3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d3->BackColor != System::Drawing::Color::Orange)
	{
		this->d3->BackColor = System::Drawing::Color::Orange;
		blockSeat(38);
	}
	else
	{
		this->d3->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(38);
	}
}
private: System::Void d2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d2->BackColor != System::Drawing::Color::Orange)
	{
		this->d2->BackColor = System::Drawing::Color::Orange;
		blockSeat(37);
	}
	else
	{
		this->d2->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(37);
	}
}
private: System::Void d1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->d1->BackColor != System::Drawing::Color::Orange)
	{
		this->d1->BackColor = System::Drawing::Color::Orange;
		blockSeat(36);
	}
	else
	{
		this->d1->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(36);
	}
}
private: System::Void e12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e12->BackColor != System::Drawing::Color::Orange)
	{
		this->e12->BackColor = System::Drawing::Color::Orange;
		blockSeat(59);
	}
	else
	{
		this->e12->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(59);
	}
}
private: System::Void e11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e11->BackColor != System::Drawing::Color::Orange)
	{
		this->e11->BackColor = System::Drawing::Color::Orange;
		blockSeat(58);
	}
	else
	{
		this->e11->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(58);
	}
}
private: System::Void e10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e10->BackColor != System::Drawing::Color::Orange)
	{
		this->e10->BackColor = System::Drawing::Color::Orange;
		blockSeat(57);
	}
	else
	{
		this->e10->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(57);
	}
}
private: System::Void e9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e9->BackColor != System::Drawing::Color::Orange)
	{
		this->e9->BackColor = System::Drawing::Color::Orange;
		blockSeat(56);
	}
	else
	{
		this->e9->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(56);
	}
}
private: System::Void e8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e8->BackColor != System::Drawing::Color::Orange)
	{
		this->e8->BackColor = System::Drawing::Color::Orange;
		blockSeat(55);
	}
	else
	{
		this->e8->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(55);
	}
}
private: System::Void e7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e7->BackColor != System::Drawing::Color::Orange)
	{
		this->e7->BackColor = System::Drawing::Color::Orange;
		blockSeat(54);
	}
	else
	{
		this->e7->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(54);
	}
}
private: System::Void e6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e6->BackColor != System::Drawing::Color::Orange)
	{
		this->e6->BackColor = System::Drawing::Color::Orange;
		blockSeat(53);
	}
	else
	{
		this->e6->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(53);
	}
}
private: System::Void e5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e5->BackColor != System::Drawing::Color::Orange)
	{
		this->e5->BackColor = System::Drawing::Color::Orange;
		blockSeat(52);
	}
	else
	{
		this->e5->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(52);
	}
}
private: System::Void e4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e4->BackColor != System::Drawing::Color::Orange)
	{
		this->e4->BackColor = System::Drawing::Color::Orange;
		blockSeat(51);
	}
	else
	{
		this->e4->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(51);
	}
}
private: System::Void e3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e3->BackColor != System::Drawing::Color::Orange)
	{
		this->e3->BackColor = System::Drawing::Color::Orange;
		blockSeat(50);
	}
	else
	{
		this->e3->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(50);
	}
}
private: System::Void e2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e2->BackColor != System::Drawing::Color::Orange)
	{
		this->e2->BackColor = System::Drawing::Color::Orange;
		blockSeat(49);
	}
	else
	{
		this->e2->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(49);
	}
}
private: System::Void e1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->e1->BackColor != System::Drawing::Color::Orange)
	{
		this->e1->BackColor = System::Drawing::Color::Orange;
		blockSeat(48);
	}
	else
	{
		this->e1->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(48);
	}
}
private: System::Void f12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f12->BackColor != System::Drawing::Color::Orange)
	{
		this->f12->BackColor = System::Drawing::Color::Orange;
		blockSeat(71);
	}
	else
	{
		this->f12->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(71);
	}
}
private: System::Void f11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f11->BackColor != System::Drawing::Color::Orange)
	{
		this->f11->BackColor = System::Drawing::Color::Orange;
		blockSeat(70);
	}
	else
	{
		this->f11->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(70);
	}
}
private: System::Void f10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f10->BackColor != System::Drawing::Color::Orange)
	{
		this->f10->BackColor = System::Drawing::Color::Orange;
		blockSeat(69);
	}
	else
	{
		this->f10->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(69);
	}
}
private: System::Void f9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f9->BackColor != System::Drawing::Color::Orange)
	{
		this->f9->BackColor = System::Drawing::Color::Orange;
		blockSeat(68);
	}
	else
	{
		this->f9->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(68);
	}
}
private: System::Void f8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f8->BackColor != System::Drawing::Color::Orange)
	{
		this->f8->BackColor = System::Drawing::Color::Orange;
		blockSeat(67);
	}
	else
	{
		this->f8->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(67);
	}
}
private: System::Void f7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f7->BackColor != System::Drawing::Color::Orange)
	{
		this->f7->BackColor = System::Drawing::Color::Orange;
		blockSeat(66);
	}
	else
	{
		this->f7->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(66);
	}
}
private: System::Void f6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f6->BackColor != System::Drawing::Color::Orange)
	{
		this->f6->BackColor = System::Drawing::Color::Orange;
		blockSeat(65);
	}
	else
	{
		this->f6->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(65);
	}
}
private: System::Void f5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f5->BackColor != System::Drawing::Color::Orange)
	{
		this->f5->BackColor = System::Drawing::Color::Orange;
		blockSeat(64);
	}
	else
	{
		this->f5->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(64);
	}
}
private: System::Void f4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f4->BackColor != System::Drawing::Color::Orange)
	{
		this->f4->BackColor = System::Drawing::Color::Orange;
		blockSeat(63);
	}
	else
	{
		this->f4->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(63);
	}
}
private: System::Void f3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f3->BackColor != System::Drawing::Color::Orange)
	{
		this->f3->BackColor = System::Drawing::Color::Orange;
		blockSeat(62);
	}
	else
	{
		this->f3->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(62);
	}
}
private: System::Void f2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f2->BackColor != System::Drawing::Color::Orange)
	{
		this->f2->BackColor = System::Drawing::Color::Orange;
		blockSeat(61);
	}
	else
	{
		this->f2->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(61);
	}
}
private: System::Void f1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->f1->BackColor != System::Drawing::Color::Orange)
	{
		this->f1->BackColor = System::Drawing::Color::Orange;
		blockSeat(60);
	}
	else
	{
		this->f1->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(60);
	}
}
private: System::Void g15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g15->BackColor != System::Drawing::Color::Orange)
	{
		this->g15->BackColor = System::Drawing::Color::Orange;
		blockSeat(86);
	}
	else
	{
		this->g15->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(86);
	}
}
private: System::Void g14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g14->BackColor != System::Drawing::Color::Orange)
	{
		this->g14->BackColor = System::Drawing::Color::Orange;
		blockSeat(85);
	}
	else
	{
		this->g14->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(85);
	}
}
private: System::Void g13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g13->BackColor != System::Drawing::Color::Orange)
	{
		this->g13->BackColor = System::Drawing::Color::Orange;
		blockSeat(84);
	}
	else
	{
		this->g13->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(84);
	}
}
private: System::Void g12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g12->BackColor != System::Drawing::Color::Orange)
	{
		this->g12->BackColor = System::Drawing::Color::Orange;
		blockSeat(83);
	}
	else
	{
		this->g12->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(83);
	}
}
private: System::Void g11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g11->BackColor != System::Drawing::Color::Orange)
	{
		this->g11->BackColor = System::Drawing::Color::Orange;
		blockSeat(82);
	}
	else
	{
		this->g11->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(82);
	}
}
private: System::Void g10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g10->BackColor != System::Drawing::Color::Orange)
	{
		this->g10->BackColor = System::Drawing::Color::Orange;
		blockSeat(81);
	}
	else
	{
		this->g10->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(81);
	}
}
private: System::Void g9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g9->BackColor != System::Drawing::Color::Orange)
	{
		this->g9->BackColor = System::Drawing::Color::Orange;
		blockSeat(80);
	}
	else
	{
		this->g9->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(80);
	}
}
private: System::Void g8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g8->BackColor != System::Drawing::Color::Orange)
	{
		this->g8->BackColor = System::Drawing::Color::Orange;
		blockSeat(79);
	}
	else
	{
		this->g8->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(79);
	}
}
private: System::Void g7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g7->BackColor != System::Drawing::Color::Orange)
	{
		this->g7->BackColor = System::Drawing::Color::Orange;
		blockSeat(78);
	}
	else
	{
		this->g7->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(78);
	}
}
private: System::Void g6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g6->BackColor != System::Drawing::Color::Orange)
	{
		this->g6->BackColor = System::Drawing::Color::Orange;
		blockSeat(77);
	}
	else
	{
		this->g6->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(77);
	}
}
private: System::Void g5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g5->BackColor != System::Drawing::Color::Orange)
	{
		this->g5->BackColor = System::Drawing::Color::Orange;
		blockSeat(76);
	}
	else
	{
		this->g5->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(76);
	}
}
private: System::Void g4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g4->BackColor != System::Drawing::Color::Orange)
	{
		this->g4->BackColor = System::Drawing::Color::Orange;
		blockSeat(75);
	}
	else
	{
		this->g4->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(75);
	}
}
private: System::Void g3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g3->BackColor != System::Drawing::Color::Orange)
	{
		this->g3->BackColor = System::Drawing::Color::Orange;
		blockSeat(74);
	}
	else
	{
		this->g3->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(74);
	}
}
private: System::Void g2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g2->BackColor != System::Drawing::Color::Orange)
	{
		this->g2->BackColor = System::Drawing::Color::Orange;
		blockSeat(73);
	}
	else
	{
		this->g2->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(73);
	}
}
private: System::Void g1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->g1->BackColor != System::Drawing::Color::Orange)
	{
		this->g1->BackColor = System::Drawing::Color::Orange;
		blockSeat(72);
	}
	else
	{
		this->g1->BackColor = System::Drawing::Color::Gainsboro;
		unblockSeat(72);
	}
}
private: System::Void QuitButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void BackButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->previousForm->Show();
}
private: System::Void NextButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->bill > 0)
	{
		this->Hide();
		this->reservation.setBill(this->bill);

		// save seats
		std::string path = "../../booking/" + reservation.getCityName() + "/";
		path += std::to_string(reservation.getYear()) + "/" + std::to_string(reservation.getMonth())
			+ "/" + std::to_string(reservation.getDay()) + "/" + std::to_string(cinemaNumber) + ".txt";

		ReservationSaver save(path, reservation.getSelectedSeats());

		// next window 
		ConfirmationWindow^ confirmWindow = gcnew ConfirmationWindow(this->reservation);
		confirmWindow->ShowDialog();
	}
}
};
}
