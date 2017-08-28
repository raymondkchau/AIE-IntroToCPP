#include <iostream>;
#include "dtgreet.h";


void dayGreeting(int day, int month, int year)
{
	std::cout << "Today is the " << day << " day of the " << month << " of the " << year << "." << std::endl;
}

void timeGreeting(int hour, int min)
{
	std::cout << "It is " << hour << ":" << min << "." << std::endl;
}

bool isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}