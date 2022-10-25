#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;



class Fraction
{

	float denominator;
	float numerator;

public:

	Fraction() { (this->denominator = rand() % 50 + 1) / (this->numerator = rand() % 50 + 1); };
	Fraction(const float denominator, const float numerator) {
		if (numerator != 0)
			(this->denominator = denominator) / (this->numerator = numerator);
		else
			cout << "\tYou whant to brake the math rules? -_-\n";
	};

	// stream operators 
	friend ostream& operator << (ostream& out, const Fraction& ob) { out << setprecision(10) << ob.denominator / ob.numerator << endl; return out; };
	friend istream& operator >> (istream& in, Fraction& ob) { cout << "Denominator --> "; in >> ob.denominator; cout << "Numerator --> "; in >> ob.numerator; return in; };

	// ar operation 
	friend Fraction& operator + (const Fraction& ob1, const Fraction& ob2);
	friend Fraction& operator - (const Fraction& ob1, const Fraction& ob2);
	friend Fraction& operator / (const Fraction& ob1, const Fraction& ob2);
	friend Fraction& operator * (const Fraction& ob1, const Fraction& ob2);

	Fraction& operator = (const Fraction& ob);

	//compering operations
	bool operator == (const Fraction& ob) { return (denominator / numerator == ob.denominator / ob.numerator);}
	bool operator != (const Fraction& ob) { return !(denominator / numerator == ob.denominator / ob.numerator); }
	bool operator > (const Fraction& ob) { return (denominator / numerator > ob.denominator / ob.numerator); };
	bool operator < (const Fraction& ob) { return (denominator / numerator < ob.denominator / ob.numerator); };
	bool operator >= (const Fraction& ob) { return (denominator / numerator >= ob.denominator / ob.numerator); };
	bool operator <= (const Fraction& ob) { return (denominator / numerator <= ob.denominator / ob.numerator); };


	// tt function
	void task(Fraction mass[], int& size);
	float operator[](const int i) { return denominator / numerator; };
};





class Main
{
public:
	 void main() const;
};


