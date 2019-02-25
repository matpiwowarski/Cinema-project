#include "CinemaHallWindow.h"

#define SEATSNUMBER 87

void Cinema::CinemaHallWindow::blockSeats(std::vector <int> seats)
{
	for (int i = 0; i < SEATSNUMBER; i++)
	{
		if (std::find(seats.begin(), seats.end(), i) != seats.end())
		{
			switch (i)
			{
			case 0:
				this->a1->Enabled = false;
				this->a1->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 1:
				this->a2->Enabled = false;
				this->a2->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 2:
				this->a3->Enabled = false;
				this->a3->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 3:
				this->a4->Enabled = false;
				this->a4->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 4:
				this->a5->Enabled = false;
				this->a5->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 5:
				this->a6->Enabled = false;
				this->a6->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 6:
				this->a7->Enabled = false;
				this->a7->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 7:
				this->a8->Enabled = false;
				this->a8->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 8:
				this->a9->Enabled = false;
				this->a9->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 9:
				this->a10->Enabled = false;
				this->a10->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 10:
				this->a11->Enabled = false;
				this->a11->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 11:
				this->a12->Enabled = false;
				this->a12->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 12:
				this->b1->Enabled = false;
				this->b1->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 13:
				this->b2->Enabled = false;
				this->b2->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 14:
				this->b3->Enabled = false;
				this->b3->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 15:
				this->b4->Enabled = false;
				this->b4->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 16:
				this->b5->Enabled = false;
				this->b5->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 17:
				this->b6->Enabled = false;
				this->b6->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 18:
				this->b7->Enabled = false;
				this->b7->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 19:
				this->b8->Enabled = false;
				this->b8->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 20:
				this->b9->Enabled = false;
				this->b9->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 21:
				this->b10->Enabled = false;
				this->b10->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 22:
				this->b11->Enabled = false;
				this->b11->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 23:
				this->b12->Enabled = false;
				this->b12->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 24:
				this->c1->Enabled = false;
				this->c1->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 25:
				this->c2->Enabled = false;
				this->c2->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 26:
				this->c3->Enabled = false;
				this->c3->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 27:
				this->c4->Enabled = false;
				this->c4->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 28:
				this->c5->Enabled = false;
				this->c5->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 29:
				this->c6->Enabled = false;
				this->c6->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 30:
				this->c7->Enabled = false;
				this->c7->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 31:
				this->c8->Enabled = false;
				this->c8->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 32:
				this->c9->Enabled = false;
				this->c9->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 33:
				this->c10->Enabled = false;
				this->c10->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 34:
				this->c11->Enabled = false;
				this->c11->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 35:
				this->c12->Enabled = false;
				this->c12->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 36:
				this->d1->Enabled = false;
				this->d1->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 37:
				this->d2->Enabled = false;
				this->d2->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 38:
				this->d3->Enabled = false;
				this->d3->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 39:
				this->d4->Enabled = false;
				this->d4->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 40:
				this->d5->Enabled = false;
				this->d5->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 41:
				this->d6->Enabled = false;
				this->d6->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 42:
				this->d7->Enabled = false;
				this->d7->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 43:
				this->d8->Enabled = false;
				this->d8->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 44:
				this->d9->Enabled = false;
				this->d9->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 45:
				this->d10->Enabled = false;
				this->d10->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 46:
				this->d11->Enabled = false;
				this->d11->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 47:
				this->d12->Enabled = false;
				this->d12->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 48:
				this->e1->Enabled = false;
				this->e1->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 49:
				this->e2->Enabled = false;
				this->e2->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 50:
				this->e3->Enabled = false;
				this->e3->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 51:
				this->e4->Enabled = false;
				this->e4->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 52:
				this->e5->Enabled = false;
				this->e5->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 53:
				this->e6->Enabled = false;
				this->e6->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 54:
				this->e7->Enabled = false;
				this->e7->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 55:
				this->e8->Enabled = false;
				this->e8->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 56:
				this->e9->Enabled = false;
				this->e9->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 57:
				this->e10->Enabled = false;
				this->e10->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 58:
				this->e11->Enabled = false;
				this->e11->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 59:
				this->e12->Enabled = false;
				this->e12->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 60:
				this->f1->Enabled = false;
				this->f1->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 61:
				this->f2->Enabled = false;
				this->f2->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 62:
				this->f3->Enabled = false;
				this->f3->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 63:
				this->f4->Enabled = false;
				this->f4->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 64:
				this->f5->Enabled = false;
				this->f5->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 65:
				this->f6->Enabled = false;
				this->f6->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 66:
				this->f7->Enabled = false;
				this->f7->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 67:
				this->f8->Enabled = false;
				this->f8->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 68:
				this->f9->Enabled = false;
				this->f9->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 69:
				this->f10->Enabled = false;
				this->f10->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 70:
				this->f11->Enabled = false;
				this->f11->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 71:
				this->f12->Enabled = false;
				this->f12->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 72:
				this->g1->Enabled = false;
				this->g1->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 73:
				this->g2->Enabled = false;
				this->g2->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 74:
				this->g3->Enabled = false;
				this->g3->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 75:
				this->g4->Enabled = false;
				this->g4->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 76:
				this->g5->Enabled = false;
				this->g5->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 77:
				this->g6->Enabled = false;
				this->g6->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 78:
				this->g7->Enabled = false;
				this->g7->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 79:
				this->g8->Enabled = false;
				this->g8->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 80:
				this->g9->Enabled = false;
				this->g9->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 81:
				this->g10->Enabled = false;
				this->g10->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 82:
				this->g11->Enabled = false;
				this->g11->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 83:
				this->g12->Enabled = false;
				this->g12->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 84:
				this->g13->Enabled = false;
				this->g13->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 85:
				this->g14->Enabled = false;
				this->g14->BackColor = System::Drawing::Color::DarkGray;
				break;
			case 86:
				this->g15->Enabled = false;
				this->g15->BackColor = System::Drawing::Color::DarkGray;
				break;

			}
		}
	}
}

void  Cinema::CinemaHallWindow::blockSeat(int seat)
{
	this->bill += 12;
	this->reservation.addSelectedSeat(seat);
	this->PriceLabel->Text = this->bill.ToString();
}
void  Cinema::CinemaHallWindow::unblockSeat(int seat)
{
	this->bill -= 12;
	this->reservation.deleteSelectedSeat(seat);
	this->PriceLabel->Text = this->bill.ToString();
}