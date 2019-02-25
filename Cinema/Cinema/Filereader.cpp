#include "Filereader.h"
#include <fstream>

FileReader::FileReader(std::string path)
{
	std::fstream FILE;
	FILE.open(path);
	if (FILE.is_open())
	{
		getline(FILE, this->movieName);
		getline(FILE, this->movieTime);
	}

	FILE.close();
}
FileReader::~FileReader()
{

}

std::string FileReader::getMovieName() const
{
	return movieName;
}
std::string FileReader::getMovieTime() const
{
	return movieTime;
}