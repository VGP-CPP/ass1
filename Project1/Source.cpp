/*
Assignment
Write a program to convert the time from 24-hour notation to 12-hour notation and vice versa.

Your program must be menu driven, giving the user the choice of converting the time between the two notations.
Furthermore, your program must contain at least the following function: a function to convert the time from 24-hour notation to 12-hour notation,
a function to convert the time from 12-hour notation to 24-hour notation, a function to display the choices, function(s) to get the input, and function(s) to display the results.
(For 12-hour time notation, your program must display AM or PM.)
*/
#include <iostream>
#include <string>

void getHr();
void getMinute();
void getSeconds();

int choose();
int to24(int a);
int to12(int b);

int hr = 100;
int minutes = 100;
int seconds = 100;
int choice;
std::string charSec = "";

void main()
{
	int valid = 0;
	//std::cout << "Hi Class!" << std::endl;
	choose();
	getHr();
	getMinute();
	getSeconds();
	if (choice == 1) //24hr
	{
		to24(hr);
	}
		else if (choice == 2) //12hr
	{
		to12(hr);
	}

	system("Pause");
}



int choose()
{
	int valid = 0;
	while (valid == 0)
	{
		std::cout << "[1] 24hr notation" << std::endl;
		std::cout << "[2] 12hr notation" << std::endl;
		std::cin >> choice;
		if (choice == 1 || choice == 2)
		{
			valid = 1;
		}
		else
		{
			valid = 0;
			system("cls");
			std::cout << "Invalid choice, must be 1 or 2, please try again." << std::endl;
		}
	}
	std::cout << "Your choice is: " << choice << std::endl;
	return 0;
}





void getHr()
{
	int valid = 0;
	while (valid == 0)
	{
		std::cout << "Please enter hour:" << std::endl;
		std::cin >> hr;
		if (hr < 0 || hr > 24)
		{
			system("cls");
			std::cout << "Invalid hour, must be between 0 - 24, please try again." << std::endl;
		}
		else
		{
			valid = 1;
		}
	}
}
void getMinute()
{
	int valid = 0;
	while (valid == 0)
	{
		std::cout << "Please enter minute:" << std::endl;
		std::cin >> minutes;
		if (minutes < 0 || minutes > 60)
		{
			system("cls");
			std::cout << "Invalid minutes, must be between 0 - 60, please try again." << std::endl;
		}
		else
		{
			valid = 1;
		}
	}
}
void getSeconds()
{
	int valid = 0;
	while (valid == 0)
	{
		std::cout << "Please enter seconds:" << std::endl;
		std::cin >> seconds;
		if (seconds < 0 || seconds > 60)
		{
			system("cls");
			std::cout << "Invalid seconds, must be between 0 - 60, please try again." << std::endl;
		}
		else
		{
			valid = 1;
		}
	}
	if (seconds > 9)
	{
		charSec = ":" + std::to_string(seconds);
	}
	else
	{
		charSec = ":0" + std::to_string(seconds);
	}
}



int to24(int a)
{
	if (minutes > 9)
	{
		std::cout << a << ":" << minutes << charSec << std::endl;
	}
	else
	{
		std::cout << a << ":" << "0" << minutes << charSec << std::endl;
	}
	return 0;
}

int to12(int a)
{
	if ((a < 12 || a == 24) && minutes >= 10) //AM
	{
		if (a == 24)
		{
			std::cout << "00" << ":" << minutes << charSec <<" AM" << std::endl;
		}
		else
		{
			std::cout << a << ":" << minutes << charSec << " AM" << std::endl;
		}
	}
	else if (a >= 12 && minutes >= 10) //PM
	{
		std::cout << (a - 12) << ":" << minutes << charSec << " PM" << std::endl;
	}
	else if ((a < 12 || a == 24) && minutes < 10) //AM
	{
		if (a == 24)
		{
			std::cout << "00" << ":" << "0" << minutes << charSec << " AM" << std::endl;
		}
		else
		{
			std::cout << a << ":" << "0" << minutes  << charSec << " AM" << std::endl;
		}
	}
	else if (a >= 12 && minutes < 10) //PM
	{
		std::cout << (a - 12) << ":" << "0" << minutes << charSec<< " PM" << std::endl;
	}
	return 0;
}