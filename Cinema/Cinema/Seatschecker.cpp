#include "Seatschecker.h"

SeatsChecker::SeatsChecker(std::string path)
{
	std::fstream FILE;
	FILE.open(path);
	if (FILE.is_open())
	{
		std::string line;
		getline(FILE, line);
		getline(FILE, line);
		while (!FILE.eof())
		{
			getline(FILE, line);
			if (line != "")
			{
				this->bookedSeats.push_back(std::stoi(line));
			}
		}
	}

	FILE.close();
}
SeatsChecker::~SeatsChecker()
{

}

std::vector <int> SeatsChecker::getBookedSeats() const
{
	return bookedSeats;
}