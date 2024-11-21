#pragma once

#include <iostream>
using namespace std;
class clockType {
public:

	void setTime(int hr, int min, int sec); //a function that establishes the time in a proper format that doesn't exceed a sensible value

	void printTime() const; //a function that prints the time that had been established prior

	void getTime(int& hours, int& minutes, int& seconds) const; //a function that gets the time

	int getHour(int& hours); //a function that only gets the hour

	int getMin(int& minutes); //a function that only gets the minutes

	int getSec(int& seconds); //a function that only gets the seconds

	bool equalTime(const clockType& otherClock) const; //a function that will inform the user if the input time and pre-defined time are the same

	void incrementHours(); //a function that starts a new day if the hour exceeds 23

	void incrementMinutes(); //a function that starts a new hour if the minute exceeds 59

	void incrementSeconds(); //a function that starts a new minute if the second exceeds 59

private:

	int hr;

	int min;

	int sec;
};