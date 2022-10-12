#pragma once
#include <iostream>

using namespace std;


class TIMER {

	float seconds;

public:

	TIMER(int seconds, int minutes);
	TIMER(int seconds);
	TIMER(const TIMER &t);


	void print() const;

	//~TIMER();
};