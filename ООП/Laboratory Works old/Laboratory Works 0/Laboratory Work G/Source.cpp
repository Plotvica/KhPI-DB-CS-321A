#include "Header.h"


TIMER::TIMER(int seconds, int minutes) {
	this->seconds = float(seconds) + (60*float(minutes));
}


TIMER::TIMER(int seconds) {
	this->seconds = float(seconds);
}


TIMER::TIMER(const TIMER& t) {
	seconds = t.seconds;
}


void TIMER::print()const {
	cout << "Seconds: " << seconds << endl;
}

