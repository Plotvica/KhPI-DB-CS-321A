#include "Header.h"




void Main::main() const
{
	srand(time(NULL));

	int size = 10;
	Fraction mass[10];

	for (size_t i = 0; i < size; i++)
	{
		cout << mass[i];
	}

	cout << " \n\n////////////////////////////////////// \n \n";
	mass->task(mass, size);

	for (size_t i = 0; i < size; i++)
	{
		cout << mass[i];
	}
}






Fraction& operator+(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result( (ob1.denominator * ob2.numerator) + (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
	return result;
}

Fraction& operator-(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result((ob1.denominator * ob2.numerator) - (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
	return result;
}

Fraction& operator/(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result(ob2.numerator * ob1.denominator, ob2.denominator * ob1.numerator);
	return result;
}

Fraction& operator*(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result(ob1.denominator * ob2.denominator, ob1.numerator * ob2.numerator);
	return result;
}

Fraction& Fraction::operator=(const Fraction& ob)
{
	denominator = ob.denominator; numerator = ob.numerator;
	return *this;
}

void Fraction::task(Fraction mass[], int& size)
{
	for (int i = 0; i < size; i++)
		if ((i+1) % 2 == 0 and i - 1 >= 0) 
			mass[i] = mass[i] + mass[i - 1];
}









