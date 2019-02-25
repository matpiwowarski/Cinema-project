#pragma once
#include <string>
#include <fstream>
#include <vector>
class ReservationSaver
{
public:
	ReservationSaver();
	ReservationSaver(std::string path, std::vector <int> seats);

	~ReservationSaver();
};

