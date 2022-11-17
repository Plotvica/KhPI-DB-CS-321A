#include "pch.h" 
#include "Oper.h"


Fraction& operator+(const Fraction& ob1, const Fraction& ob2) noexcept
{
	Fraction result((ob1.denominator * ob2.numerator) + (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
	return result;
}

Fraction& operator-(const Fraction& ob1, const Fraction& ob2) noexcept
{
	Fraction result((ob1.denominator * ob2.numerator) - (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
	return result;
}

Fraction& operator/(const Fraction& ob1, const Fraction& ob2) noexcept
{
	Fraction result(ob2.numerator * ob1.denominator, ob2.denominator * ob1.numerator);
	return result;
}

Fraction& operator*(const Fraction& ob1, const Fraction& ob2) noexcept
{
	Fraction result(ob1.denominator * ob2.denominator, ob1.numerator * ob2.numerator);
	return result;
}

Fraction& Fraction::operator=(const Fraction& ob) noexcept
{
	denominator = ob.denominator; numerator = ob.numerator;
	return *this;
}

