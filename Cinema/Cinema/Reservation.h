#pragma once
#include <string>
#include <vector>
#include <algorithm>

class Reservation
{
private:
	struct BookingTime
	{
		int year = 0;
		int month = 0;
		int day = 0;
		std::string time;
	};

	std::string cityName;
	BookingTime bookingTime;
	std::string movieName;
	std::vector <int> selectedSeats;
	int bill = 0;

public:
	Reservation();
	~Reservation();

	// getters 
	std::string getCityName() const;
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	std::string getTime() const;
	int getBill() const;
	std::vector <int> getSelectedSeats() const;
	std::string getMovieName() const;
	std::string getSeatsString() const;
	// setters
	void setCityName(const std::string & cityName);
	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);
	void setTime(std::string time);
	void setBill(int bill);
	void setSelectedSeats(std::vector <int> selectedSeats);
	void setMovieName(std::string movieName);
	// other functions
	void addSelectedSeat(int seat);
	void deleteSelectedSeat(int seat);

};