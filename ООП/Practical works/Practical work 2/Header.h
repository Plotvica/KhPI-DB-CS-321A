#pragma once
#include <iostream>

using namespace std;


class Vector {

	float x, y, z;

public:
	// ---------------- Ñonstructors -------------
	Vector();
	Vector(const float x, const float y, const float z);

	// ---------------- Methods -------------
	
	void show() const {
		cout << x << " " << y << " " << z << endl;
	}

	// setters
	void setterX(const float x) { this->x = x; };
	void setterY(const float y) { this->y = y; };
	void setterZ(const float z) { this->z = z; };

	// getters
	const float getterX() { return x; };
	const float getterY() { return y; };
	const float getterZ() { return z; };

	//tasks
	friend Vector& operator + (const Vector& ob1, const Vector& ob2);
	Vector& operator += (const Vector& ob);
};


float operator*(Vector& ob1, Vector& ob2);