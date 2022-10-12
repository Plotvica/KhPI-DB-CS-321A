#include "Header.h"



Figure::Figure(const float& a, const float& b, const float& c, const float& r) {
		
	this->a = a;
	this->b = b;
	this->c = c;
	this->r = r;

	if (this->a > 0 and this->b > 0 and this->c > 0 ) {
		float p = (this->a + this->b + this->c) / 2;
		cout << "Triangle S -> " << sqrt(p * (p - this->a) * (p - this->b) * (p - this->c)) << endl;
	}
	else
		cout << "This triangle cannot exist." << endl;
	

	if (this->r > 0) {
		cout << "Circle S -> " << PI * pow(this->r,2) << endl;
	}
	else
		cout << "This circle cannot exist." << endl;
	

}