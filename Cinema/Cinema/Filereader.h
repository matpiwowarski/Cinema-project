#pragma once
#include "string"

class FileReader // gets data about movies
{
private:
	std::string movieName;
	std::string movieTime;
public:
	FileReader(std::string path);
	~FileReader();
	
	std::string getMovieName() const;
	std::string getMovieTime() const;
};