#include "Header.h"


void inputCheker() {
	if (cin.fail()) {
		system("cls");
		cin.clear();
		cin.ignore(32767, '\n');
		cout << " \t\t\tIncorrect input! ERROR! " << endl;
	} 
}



SUMM::SUMM(const float& x0, const float& y0):x(x0), y(y0) { }

void SUMM::set(const float& x0, const float&y0) {
	x = x0;
	y = y0;
}

void SUMM::summa(){
	s = x + y;
}

void SUMM::print() const{
	cout << "x: " << x << " y: " << y << " s: " << s << endl;
}