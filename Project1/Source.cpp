/*
Assignment
Write a program to convert the time from 24-hour notation to 12-hour notation and vice versa.

Your program must be menu driven, giving the user the choice of converting the time between the two notations.
Furthermore, your program must contain at least the following function: a function to convert the time from 24-hour notation to 12-hour notation,
a function to convert the time from 12-hour notation to 24-hour notation, a function to display the choices, function(s) to get the input, and function(s) to display the results.
(For 12-hour time notation, your program must display AM or PM.)
*/
#include <iostream>

void getHr();
int to24(int a);
int to12(int b);
int hr;

void main()
{
	std::cout << "Hi Class!" << std::endl;
	system("Pause");
}
void getHr()
{
	std::cout << "Please enter hour:" << std::endl;
	std::cin >> hr;
}
