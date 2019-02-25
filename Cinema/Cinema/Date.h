#pragma once
#include <string>

enum Months { January = 1, February, March, April, May, June, July, August, September, October, November, December};

class Date
{
private:
	int year = 1;
	int month = January;
	int numberOfDays = 1;

	// private functions
	friend void ShowWarning();

public:
	// constuctors
	Date();
	Date(int year, int month);
	// destructors
	~Date();
	// setters
	void SetMonth(int month);
	void SetYear(int year);
	// getters
	int GetNumberOfDays() const;
	std::string Date::GetMonthName() const;
	int GetMonth() const;
	int GetYear() const;

	// operators
	Date& operator++ ();
	Date operator++ (int);
	Date& operator-- ();
	Date operator-- (int);
	Date& operator= (const Date& date);

	// other functions
	bool isCorrect() const;
};