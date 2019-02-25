#pragma once
#include <string>
#include <vector>
#include <fstream>

class SeatsChecker
{
private:
	std::vector <int> bookedSeats;
public:
	SeatsChecker(std::string path);
	~SeatsChecker();

	std::vector <int> getBookedSeats() const;
};