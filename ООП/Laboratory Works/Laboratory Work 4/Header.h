#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


template <class  T>
class Rectangle {
	T a;
	T b;

public:
	template <typename T>
	void search(button) {
		if (button == 1) {
			if (a > b)
				cout << a << " > " << b << " --> a is maximum \n";
			else if (a < b)
				cout << b << " > " << a << " --> b is maximum \n";
			else if (a == b)
				cout << "a = b \n";
			else
				cout << "\t\tError!\n";
		}
		else if (button == 2) {
			if (a > b)
				cout << "b < a \n";
			else if (a < b)
				cout << "a < b \n";
			else if (a == b)
				cout << "a = b \n";
			else
				cout << "\t\tError!\n";
		}
		

	}
};

template <class  T>
class Parallelepiped {
	T a;
	T b;
	T h;


};

template <class  T>
class Fraction {
	T numenator;
	T denominator;


};



