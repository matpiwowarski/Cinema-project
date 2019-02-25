#include <charconv> // int(11) to string "11" [to_chars]
#include "Reservation.h"
 
Reservation::Reservation()
{

}

Reservation::~Reservation()
{

}

// getters 
std::string Reservation::getCityName() const
{
	return cityName;
}
int Reservation::getYear() const
{
	return this->bookingTime.year;
}
int Reservation::getMonth() const
{
	return this->bookingTime.month;
}
int Reservation::getDay() const
{
	return this->bookingTime.day;
}
std::string Reservation::getTime() const
{
	return this->bookingTime.time;
}
int Reservation::getBill() const
{
	return bill;
}
std::vector <int> Reservation::getSelectedSeats() const
{
	return selectedSeats;
}
std::string Reservation::getMovieName() const
{
	return movieName;
}

void checkSeatsChar(std::vector <int> selectedSeats, std::string & seats, int i);
void checkSeatsNumber(std::vector <int> seatsNumbers, std::string & seats, int i);

std::string Reservation::getSeatsString() const
{
	std::string seats;
	std::vector <int> seatsNumbers = this->selectedSeats; 

	for (int i = 0; i < seatsNumbers.size(); i++)
	{
		checkSeatsChar(seatsNumbers, seats, i);
		checkSeatsNumber(seatsNumbers, seats, i);
		seats += " ";
	}

	return seats;
}
// setters
void Reservation::setCityName(const std::string & cityName)
{
	this->cityName = cityName;
}
void Reservation::setYear(int year)
{
	this->bookingTime.year = year;
}
void Reservation::setMonth(int month)
{
	this->bookingTime.month = month;
}
void Reservation::setDay(int day)
{
	this->bookingTime.day = day;
}
void Reservation::setTime(std::string time)
{
	this->bookingTime.time = time;
}

void Reservation::setBill(int bill)
{
	this->bill = bill;
}
void Reservation::setSelectedSeats(std::vector <int> selectedSeats)
{
	this->selectedSeats = selectedSeats;
}
void Reservation::setMovieName(std::string movieName)
{
	this->movieName = movieName;
}

void Reservation::addSelectedSeat(int seat)
{
	this->selectedSeats.push_back(seat);
}
void Reservation::deleteSelectedSeat(int seat)
{
	this->selectedSeats.erase(std::remove(selectedSeats.begin(), selectedSeats.end(), seat));
}

void checkSeatsChar(std::vector <int> selectedSeats, std::string & seats, int i)
{
	if (selectedSeats[i] >= 0 && selectedSeats[i] <= 11)
		seats += 'A';
	else if (selectedSeats[i] >= 12 && selectedSeats[i] <= 23)
		seats += 'B';
	else if (selectedSeats[i] >= 24 && selectedSeats[i] <= 35)
		seats += 'C';
	else if (selectedSeats[i] >= 36 && selectedSeats[i] <= 47)
		seats += 'D';
	else if (selectedSeats[i] >= 48 && selectedSeats[i] <= 59)
		seats += 'E';
	else if (selectedSeats[i] >= 60 && selectedSeats[i] <= 71)
		seats += 'F';
	else if (selectedSeats[i] >= 72 && selectedSeats[i] <= 86)
		seats += 'G';
}

void checkSeatsNumber(std::vector <int> seatsNumbers, std::string & seats, int i)
{
	if (seatsNumbers[i] >= 0 && seatsNumbers[i] <= 11)
	{
		seatsNumbers[i] += 1;
	}
	else if (seatsNumbers[i] >= 12 && seatsNumbers[i] <= 23)
	{
		seatsNumbers[i] -= 11;
	}
	else if (seatsNumbers[i] >= 24 && seatsNumbers[i] <= 35)
	{
		seatsNumbers[i] -= 23;
	}
	else if (seatsNumbers[i] >= 36 && seatsNumbers[i] <= 47)
	{
		seatsNumbers[i] -= 35;
	}
	else if (seatsNumbers[i] >= 48 && seatsNumbers[i] <= 59)
	{
		seatsNumbers[i] -= 47;
	}
	else if (seatsNumbers[i] >= 60 && seatsNumbers[i] <= 71)
	{
		seatsNumbers[i] -= 59;
	}
	else if (seatsNumbers[i] >= 72 && seatsNumbers[i] <= 86)
	{
		seatsNumbers[i] -= 71;
	}
	// add
	seats += std::to_string(seatsNumbers[i]);

}