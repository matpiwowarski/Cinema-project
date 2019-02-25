#include "ReservationSaver.h"

ReservationSaver::ReservationSaver()
{

}

ReservationSaver::ReservationSaver(std::string path, std::vector <int> seats)
{
	std::fstream FILE;
	FILE.open(path, std::ios_base::app);
	if (FILE.is_open())
	{
		FILE << std::endl;
		for (int i = 0; i < seats.size(); i++)
		{
			FILE << seats[i] << std::endl;
		}
	}

	FILE.close();
}

ReservationSaver::~ReservationSaver()
{

}
