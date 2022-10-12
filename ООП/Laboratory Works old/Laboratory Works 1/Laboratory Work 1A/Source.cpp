#include "Header.h"

void Point::set(const int x, const int y) {
	this->x = x; this->y = y;
}

void Point::show() const {
	cout << "x -> " << x << " y -> " << y;
}

void Point::back(int& summ, int& mult) const {
	summ = x + y;
	mult = x * y;
}