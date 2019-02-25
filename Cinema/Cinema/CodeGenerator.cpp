#include "CodeGenerator.h"

CodeGenerator::CodeGenerator(const Reservation & r)
{
	int yearCode = r.getYear() - 2000;
	code += yearCode + 'A';					// YEAR	 NUMBER
	code += r.getMonth() + 'A';				// MONTH NUMBER
	code += r.getDay() + 'A';				// DAY   NUMBER
	code += r.getCityName()[0];				// CITY  NUMBER
	code += r.getMovieName()[0];			// MOVIE NUMBER
	code += r.getSelectedSeats()[0] + 'A';	// SEATS NUMBER
}

std::string CodeGenerator::getCode() const
{
	return code;
}

CodeGenerator & CodeGenerator::operator+= (const char c)
{
	code += c;
	return *this;
}

CodeGenerator & CodeGenerator::operator+= (const int i)
{
	code += i;
	return *this;
}