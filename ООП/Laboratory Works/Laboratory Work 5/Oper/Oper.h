#pragma once

#ifdef OPER_EXPORTS
#define OPER_API __declspec(dllexport)
#else
#define OPER_API __declspec(dllimport)
#endif

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

extern "C++" OPER_API class Fraction
{

	float denominator;
	float numerator;

public:

	Fraction() noexcept { (this->denominator = rand() % 50 + 1) / (this->numerator = rand() % 50 + 1); };
	Fraction(const float denominator, const float numerator) noexcept {
		if (numerator != 0)
			(this->denominator = denominator) / (this->numerator = numerator);
		else
			cout << "\tYou whant to brake the math rules? -_-\n";
	};

	// stream operators 
	friend ostream& operator << (ostream& out, const Fraction& ob) { out << ob.denominator << " / " << ob.numerator << " = " << setprecision(10) << ob.denominator / ob.numerator; return out; };
	friend istream& operator >> (istream& in, Fraction& ob) { cout << "Denominator --> "; in >> ob.denominator; cout << "Numerator --> "; in >> ob.numerator; return in; };

	// ar operation 
	friend Fraction& operator +  (const Fraction& ob1, const Fraction& ob2) noexcept;
	friend Fraction& operator -  (const Fraction& ob1, const Fraction& ob2) noexcept;
	friend Fraction& operator /  (const Fraction& ob1, const Fraction& ob2) noexcept;
	friend Fraction& operator *  (const Fraction& ob1, const Fraction& ob2) noexcept;

	Fraction& operator = (const Fraction& ob) noexcept;

	//compering operations
	bool operator == (const Fraction& ob) noexcept { return (denominator / numerator == ob.denominator / ob.numerator); }
	bool operator != (const Fraction& ob) noexcept { return !(denominator / numerator == ob.denominator / ob.numerator); }
	bool operator > (const Fraction& ob) noexcept { return (denominator / numerator > ob.denominator / ob.numerator); };
	bool operator < (const Fraction& ob) noexcept { return (denominator / numerator < ob.denominator / ob.numerator); };
	bool operator >= (const Fraction& ob) noexcept { return (denominator / numerator >= ob.denominator / ob.numerator); };
	bool operator <= (const Fraction& ob) noexcept { return (denominator / numerator <= ob.denominator / ob.numerator); };


	// tt function
	void task(Fraction arr[], int& size) const;
	float operator[](const int i) noexcept { return denominator / numerator; };
	void print(Fraction arr[], int size) const;
};

