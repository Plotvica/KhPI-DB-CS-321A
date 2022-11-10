#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Main {
public:
	void main();
};

class Rectangle {
	int a;
	int b;
public:

	Rectangle(int a = 0, int b = 0) { this->a = a; this->b = b; }

	friend Rectangle& operator + (const Rectangle& ob1, const Rectangle& ob2) {
		Rectangle result(ob1.a + ob2.a, ob1.b + ob2.b);
		return result;
	};
	friend Rectangle& operator - (const Rectangle& ob1, const Rectangle& ob2) {
		Rectangle result(ob1.a - ob2.a, ob1.b - ob2.b);
		return result;
	};
	friend Rectangle& operator / (const Rectangle& ob1, const Rectangle& ob2) {
		Rectangle result(ob1.a / ob2.a, ob1.b / ob2.b);
		return result;
	};
	friend Rectangle& operator / (const Rectangle& ob1, int number) {
		Rectangle result(ob1.a / number, ob1.b / number);
		return result;
	};
	friend Rectangle& operator * (const Rectangle& ob1, const Rectangle& ob2) {
		Rectangle result(ob1.a * ob2.a, ob1.b * ob2.b);
		return result;
	};

	bool operator == (const Rectangle& ob) { return ((a * b) == (ob.a * ob.b)); }
	bool operator != (const Rectangle& ob) { return !((a * b) == (ob.a * ob.b)); }
	bool operator > (const Rectangle& ob) { return ((a * b) > (ob.a * ob.b)); };
	bool operator < (const Rectangle& ob) { return ((a * b) < (ob.a * ob.b)); };
	bool operator >= (const Rectangle& ob) { return ((a * b) >= (ob.a * ob.b)); };
	bool operator <= (const Rectangle& ob) { return ((a * b) <= (ob.a * ob.b)); };

	Rectangle& operator = (const Rectangle& ob)
	{
		a = ob.a; b = ob.b;
		return *this;
	}

	

	void squrt()
	{
		this->a = sqrt(this->a);
		this->b = sqrt(this->b);
	}

	friend ostream& operator <<(ostream& out, const Rectangle& ob) {
		out << "A = " << ob.a << " || B = " << ob.b;
		return out;
	}
};

class Parallelepiped {
	float a;
	float b;
	float c;
public:
	Parallelepiped(float a = 0, float b = 0, float ñ = 0) { this->a = a; this->b = b; this->c = ñ;}

	friend Parallelepiped& operator + (const Parallelepiped& ob1, const Parallelepiped& ob2) {
		Parallelepiped result(ob1.a + ob2.a, ob1.b + ob2.b, ob1.c + ob2.c);
		return result;
	};
	friend Parallelepiped& operator - (const Parallelepiped& ob1, const Parallelepiped& ob2) {
		Parallelepiped result(ob1.a - ob2.a, ob1.b - ob2.b, ob1.c - ob2.c);
		return result;
	};
	friend Parallelepiped& operator / (const Parallelepiped& ob1, const Parallelepiped& ob2) {
		Parallelepiped result(ob1.a / ob2.a, ob1.b / ob2.b, ob1.c / ob2.c);
		return result;
	};
	friend Parallelepiped& operator / (const Parallelepiped& ob1, int number) {
		Parallelepiped result(ob1.a / number, ob1.b / number, ob1.c / number);
		return result;
	};
	friend Parallelepiped& operator * (const Parallelepiped& ob1, const Parallelepiped& ob2) {
		Parallelepiped result(ob1.a * ob2.a, ob1.b * ob2.b, ob1.c * ob2.c);
		return result;
	};

	/*Parallelepiped& operator = (const Parallelepiped& ob)
	{
		a = ob.a; b = ob.b; c = ob.c;
		return *this;
	}*/

	bool operator == (const Parallelepiped& ob) { return ((a * b * c) == (ob.a * ob.b * ob.c)); }
	bool operator != (const Parallelepiped& ob) { return !((a * b * c) == (ob.a * ob.b * ob.c)); }
	bool operator > (const Parallelepiped& ob) { return ((a * b * c) > (ob.a * ob.b * ob.c)); };
	bool operator < (const Parallelepiped& ob) { return ((a * b * c) < (ob.a * ob.b * ob.c)); };
	bool operator >= (const Parallelepiped& ob) { return ((a * b * c) >= (ob.a * ob.b * ob.c)); };
	bool operator <= (const Parallelepiped& ob) { return ((a * b * c) <= (ob.a * ob.b * ob.c)); };
	

	void squrt()
	{
		this->a = sqrt(this->a);
		this->b = sqrt(this->b);
		this->c = sqrt(this->c);
	}

	friend ostream& operator <<(ostream& out, const Parallelepiped& ob) {
		out << "a = " << ob.a << " || b = " << ob.b << " || c = " << ob.c << " || v = " << ob.a * ob.b * ob.c;
		return out;
	}

};


class Fraction {
	float numerator;
	float denominator;
public:
	Fraction() { (this->denominator = rand() % 50 + 1) / (this->numerator = rand() % 50 + 1); };
	Fraction(const float denominator, const float numerator) {
		if (numerator != 0)
			(this->denominator = denominator) / (this->numerator = numerator);
		else
			cout << "\tYou whant to brake the math rules? -_-\n";
	};
	// stream operators 
	friend ostream& operator << (ostream& out, const Fraction& ob) { out << ob.denominator << " / " << ob.numerator << " = " << setprecision(10) << ob.denominator / ob.numerator; return out; };
	//friend istream& operator >> (istream& in, Fraction& ob) { cout << "Denominator --> "; in >> ob.denominator; cout << "Numerator --> "; in >> ob.numerator; return in; };

	// ar operation 
	friend Fraction& operator+(const Fraction& ob1, const Fraction& ob2)
	{
		Fraction result((ob1.denominator * ob2.numerator) + (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
		return result;
	}

	friend Fraction& operator-(const Fraction& ob1, const Fraction& ob2)
	{
		Fraction result((ob1.denominator * ob2.numerator) - (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
		return result;
	}

	friend Fraction& operator/(const Fraction& ob1, const Fraction& ob2)
	{
		Fraction result(ob2.numerator * ob1.denominator, ob2.denominator * ob1.numerator);
		return result;
	}

	friend Fraction& operator / (Fraction& ob1, int number)
	{
		Fraction result(ob1.denominator, ob1.numerator*3);
		return result;
	}
	

	friend Fraction& operator*(const Fraction& ob1, const Fraction& ob2)
	{
		Fraction result(ob1.denominator * ob2.denominator, ob1.numerator * ob2.numerator);
		return result;
	}

	Fraction& operator = (const Fraction& ob)
	{
		denominator = ob.denominator; numerator = ob.numerator;
		return *this;
	}


	void squrt()
	{
		this->numerator = sqrt(this->numerator);
		this->denominator = sqrt(this->denominator);
	}

	//compering operations
	bool operator == (const Fraction& ob) { return (denominator / numerator == ob.denominator / ob.numerator); }
	bool operator != (const Fraction& ob) { return !(denominator / numerator == ob.denominator / ob.numerator); }
	bool operator > (const Fraction& ob) { return (denominator / numerator > ob.denominator / ob.numerator); };
	bool operator < (const Fraction& ob) { return (denominator / numerator < ob.denominator / ob.numerator); };
	bool operator >= (const Fraction& ob) { return (denominator / numerator >= ob.denominator / ob.numerator); };
	bool operator <= (const Fraction& ob) { return (denominator / numerator <= ob.denominator / ob.numerator); };

};


template <class T>
class Task1
{
	T ob1, ob2, ob3;
public:
	Task1(){}

	Task1(T a, T b, T c)
	{
		this->ob1 = a;
		this->ob2 = b;
		this->ob3 = c;
	}
	void maxim()
	{
		T arry[3] = { ob1, ob2, ob3 };
		T max = arry[0];
		for (int j = 0; j < 3; j++)
			if (arry[j] > arry[j - 1])
				max = arry[j];

		cout << "The maximal is: " << max << endl;
	}
	void minim()
	{
		T arry[3] = { ob1, ob2, ob3 };
		T min = arry[0];
		for (int j = 0; j < 3; j++)
			if (arry[j] < arry[j - 1])
				min = arry[j];
		
		cout << "The minimal is: " << min << endl;
	}
	void arith_mean()
	{
		T temp = ob1 + ob2;
		temp = temp + ob3;
		temp = temp / 3;
		cout << "Arithmetical mean: " << temp << endl;
	}
	void sqrt_mean()
	{
		T t1 = ob1 * ob1;
		T t2 = ob2 * ob2;
		T t3 = ob3 * ob3;
		T t4 = t1 + t2;
		T t5 = t4 + t3;
		T temp = t5 / 3;
		temp.squrt();
		cout << "Medium-square mean: " << temp << endl;
	}
	void summary()
	{
		T t1 = ob1 + ob2;
		t1 = t1 + ob3;
		cout << "The summary is: " << t1 << endl;
	}
	void multipliance()
	{
		T t1 = ob1 * ob2;
		t1 = t1 * ob3;
		cout << "The multipliance is: " << t1 << endl;
	}

};

template <class T>
class Task2
{
	int size;
	T* ob;
public:
	Task2()
	{
		this->ob = nullptr;
		this->size = 0;
	}
	Task2(T* obj, int size)
	{
		this->size = size;
		this->ob = obj;
	}
	void maxim()
	{
		T max = ob[0];
		for (int i = 0; i < size; i++)
		{
			if (max <= ob[i])
				max = ob[i];
		}
		cout << "The maximal element:\n";
		cout << max << endl;
	}
	void minim()
	{
		T min = ob[0];
		for (int i = 0; i < size; i++)
		{
			if (min >= ob[i])
				min = ob[i];
		}
		cout << "The minimal element:\n";
		cout << min << endl;
	}
	void sum()
	{
		T sum = ob[0];
		for (int i = 1; i < size; i++)
			sum = sum + ob[i];
	
		cout << "The summary is:\n";
		cout << sum << endl;
	}
	void mult()
	{
		T mult = ob[0];
		for (int i = 1; i < size; i++)
			mult = mult * ob[i];
		
		cout << "The multipliance is:\n";
		cout << mult << endl;
	}
	void mean()
	{
		T sum = ob[0];
		for (int i = 1; i < size; i++)
			sum = sum + ob[i];

		sum = sum / this->size;
		cout << "The mean is:\n";
		cout << sum << endl;
	}
	void sq_mean()
	{
		T sum = ob[0] * ob[0];
		for (int i = 1; i < size; i++){
			T mult = ob[i] * ob[i];
			sum = sum + mult;
		}
		sum = sum / this->size;
		sum.squrt();
		cout << "The  square mean is:\n";
		cout << sum << endl;
	}
	void filter(T criteria)
	{
		int cnt = 0;
		for (int i = 0; i < size; i++)
			if (criteria == ob[i]) {
				cnt++;
				cout << i + 1 << ") " << ob[i] << endl;
			}
	
		if (cnt != 0)
			cout << "There are " << cnt << " coincidenses\n";
		else
			cout << "Coincidenses hasn`t found!\n";
	}
};