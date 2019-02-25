#pragma once
#include "Reservation.h"

class CodeGenerator
{
private:
	std::string code;
public:
	CodeGenerator(const Reservation & r);
	std::string getCode() const;
	CodeGenerator & operator += (const char c);
	CodeGenerator & operator += (const int i);
};