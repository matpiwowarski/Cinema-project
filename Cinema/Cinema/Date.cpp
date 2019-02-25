#include "Date.h"
#include <iostream>

// constuctors
Date::Date()
{

}
Date::Date(int year, int month)
{
	this->year = year;
	this->month = month;
	switch (month)
	{
		case 1:
			this->numberOfDays = 31;
			break;
		case 2:
			if (year % 4 == 0)
			{
				this->numberOfDays = 29;
				break;
			}
			else
			{
				this->numberOfDays = 28;
				break;
			}
		case 3:
			this->numberOfDays = 31;
			break;
		case 4:
			this->numberOfDays = 30;
			break;
		case 5:
			this->numberOfDays = 31;
			break;
		case 6:
			this->numberOfDays = 30;
			break;
		case 7:
			this->numberOfDays = 31;
			break;
		case 8:
			this->numberOfDays = 31;
			break;
		case 9:
			this->numberOfDays = 30;
			break;
		case 10:
			this->numberOfDays = 31;
			break;
		case 11:
			this->numberOfDays = 30;
			break;
		case 12:
			this->numberOfDays = 31;
			break;
		default:
			break;
	}
	if (!this->isCorrect())
		ShowWarning();
}
// destructors
Date::~Date()
{

}

// setters

void Date::SetMonth(int month)
{
	this->month = month;
	switch (month)
	{
	case 1:
		this->numberOfDays = 31;
		break;
	case 2:
		if (year % 4 == 0)
		{
			this->numberOfDays = 29;
			break;
		}
		else
		{
			this->numberOfDays = 28;
			break;
		}
	case 3:
		this->numberOfDays = 31;
		break;
	case 4:
		this->numberOfDays = 30;
		break;
	case 5:
		this->numberOfDays = 31;
		break;
	case 6:
		this->numberOfDays = 30;
		break;
	case 7:
		this->numberOfDays = 31;
		break;
	case 8:
		this->numberOfDays = 31;
		break;
	case 9:
		this->numberOfDays = 30;
		break;
	case 10:
		this->numberOfDays = 31;
		break;
	case 11:
		this->numberOfDays = 30;
		break;
	case 12:
		this->numberOfDays = 31;
		break;
	default:
		break;
	}
	if (!this->isCorrect())
		ShowWarning();
}
void Date::SetYear(int year)
{
	this->year = year;
	if (!this->isCorrect())
		ShowWarning();
}
// getters
int Date::GetNumberOfDays() const
{
	return numberOfDays;
}
int Date::GetMonth() const
{
	return month;
}
std::string Date::GetMonthName() const
{
	std::string name;
	switch (month)
	{
	case(1):
		name = "January";
		break;
	case(2):
		name = "February";
		break;
	case(3):
		name = "March";
		break;
	case(4):
		name = "April";
		break;
	case(5):
		name = "May";
		break;
	case(6):
		name = "June";
		break;
	case(7):
		name = "July";
		break;
	case(8):
		name = "August";
		break;
	case(9):
		name = "September";
		break;
	case(10):
		name = "October";
		break;
	case(11):
		name = "November";
		break;
	case(12):
		name = "December";
		break;
	default:
		break;
	}
	return name;
}
int Date::GetYear() const
{
	return year;
}

// operators
Date& Date::operator++ () // +1 month
{
	if (month == December)
	{
		month = January;
		numberOfDays = 31;
		year++;
	}
	else
	{
		month++;
		switch (month)
		{
		case 1:
			numberOfDays = 31;
			break;
		case 2:
			if (year % 4 == 0)
				numberOfDays = 29;
			else numberOfDays = 28;
			break;
		case 3:
			numberOfDays = 31;
			break;
		case 4:
			numberOfDays = 30;
			break;
		case 5:
			numberOfDays = 31;
			break;
		case 6:
			numberOfDays = 30;
			break;
		case 7:
			numberOfDays = 31;
			break;
		case 8:
			numberOfDays = 31;
			break;
		case 9:
			numberOfDays = 30;
			break;
		case 10:
			numberOfDays = 31;
			break;
		case 11:
			numberOfDays = 30;
			break;
		case 12:
			numberOfDays = 31;
			break;
		default:
			break;
		}
	}
	return *this;
}
Date Date::operator++ (int) // +1 month
{
	Date result(*this); // copy for result
	++(*this); 
	return result;
}
Date& Date::operator-- () // -1 month
{
	if (month == January)
	{
		month = December;
		numberOfDays = 31;
		year--;
	}
	else
	{
		month--;
		switch (month)
		{
		case 1:
			numberOfDays = 31;
			break;
		case 2:
			if (year % 4 == 0)
				numberOfDays = 29;
			else numberOfDays = 28;
			break;
		case 3:
			numberOfDays = 31;
			break;
		case 4:
			numberOfDays = 30;
			break;
		case 5:
			numberOfDays = 31;
			break;
		case 6:
			numberOfDays = 30;
			break;
		case 7:
			numberOfDays = 31;
			break;
		case 8:
			numberOfDays = 31;
			break;
		case 9:
			numberOfDays = 30;
			break;
		case 10:
			numberOfDays = 31;
			break;
		case 11:
			numberOfDays = 30;
			break;
		case 12:
			numberOfDays = 31;
			break;
		default:
			break;
		}
	}
	return *this;
	
}
Date Date::operator-- (int) // -1 month
{
	Date result(*this); // copy for result
	--(*this);
	return result;
}
Date& Date::operator= (const Date& date)
{
	if (this != &date)
	{
		this->year = date.year;
		this->month = date.month;
		this->numberOfDays = date.numberOfDays;
	}
	return *this;
}


// other functions
bool Date::isCorrect() const
{
	if (year < 1900 || year > 2100) // check year
		return false;
	
	if (month < 1 || month > 12) // check month
		return false;

	// check day
	if (numberOfDays < 1 || numberOfDays > 31)
		return false;

	if (month == January || March || May || July || August || October || December) // max 31 days
	{
		if (numberOfDays < 1 || numberOfDays > 31)
			return false;
	}
	else if (month == April, June, September, November) // max 30 days
	{
		if (numberOfDays < 1 || numberOfDays > 30)
			return false;
	}
	else // February 28/29 max days
	{
		if (year % 4 == 0) // 29 days
		{
			if (numberOfDays < 1 || numberOfDays > 29)
				return false;
		}
		else // 28 days
		{
			if (numberOfDays < 1 || numberOfDays > 28)
				return false;
		}
	}
	return true; // correct date
}

void ShowWarning()
{
	std::cout << "Data of the month have been entered incorrectly.";
}