
// Tim Mills, 6/11/24, ClockType lab

#include "clocktype.h"

int main() {

	clockType myClock;

	myClock.setTime(10, 20, 30); //the pre-defined time

	myClock.printTime();

	int HR, MIN, SEC; // this is for the "getTime" function

	myClock.getTime(HR, MIN, SEC);

	cout << HR << ":" << MIN << ":" << SEC << endl;

	clockType yrClock;

	cout << "\nEnter hour, minute, second" << endl;

	int H, M, S;

	cin >> H >> M >> S; // User inputs their own time

	void incrementSeconds(); // you only need to run this function since it nests the other two functions for incrementing minutes and hours

	yrClock.setTime(H, M, S);

	yrClock.printTime(); //time is sorted and displayed

	if (myClock.equalTime(yrClock)) //this function will display if the input time is equal to the pre-defined time

		cout << "\nThe same" << endl;

	else

		cout << "\nNot the same" << endl;

	int getHour(int& hours);

	int getMin(int& minutes);

	int getSec(int& seconds);
}

//this is the output!
//
//10:20 : 30
//10 : 20 : 30
//
//Enter hour, minute, second
//1
//67
//23
//01:00 : 23
//
//Not the same