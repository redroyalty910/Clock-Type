#include "clocktype.h"
#include <iostream>
using namespace std;

void clockType::setTime(int H, int M, int S) {

	if (0 <= H && H < 24)

		hr = H;

	else

		hr = 0;

	if (0 <= M && M < 60)

		min = M;

	else

		min = 0;

	if (0 <= S && S < 60) 

		sec = S;

	else

		sec = 0;
}
void clockType::printTime() const {

	if (hr < 10)

		cout << "0";

	cout << hr << ":";

	if (min < 10)

		cout << "0";

	cout << min << ":";

	if (sec < 10)

		cout << "0";

	cout << sec;

	cout << endl;
}
void clockType::getTime(int& hours, int& minutes, int& seconds) const {

	hours = hr;

	minutes = min;

	seconds = sec;
}
int clockType::getHour(int& hours) {

	return hr;
}
int clockType::getMin(int& minutes) {

	return min;
}
int clockType::getSec(int& seconds) {

	return sec;
}
bool clockType::equalTime(const clockType& otherClock) const {

	if (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec)

		return true;

	else

		return false;
}
void clockType::incrementSeconds() {

	sec++;

	if (sec > 59)

		sec = 0;

	incrementMinutes();
}
void clockType::incrementMinutes() {

	min++;

	if (min > 59)

		min = 0;

	incrementHours();
}
void clockType::incrementHours() {

	hr++;

	if (hr > 23)

		hr = 0;
}