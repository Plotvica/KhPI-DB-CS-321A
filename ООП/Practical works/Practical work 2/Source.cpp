#include "Header.h"

Vector::Vector()
{
}

Vector::Vector(const float x, const float y, const float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector& Vector::operator+=(const Vector& ob)
{
	Vector unarplus(this->x += ob.x, this->y += ob.y, this->z += ob.z );
	return unarplus;
}


Vector& operator+(const Vector& ob1, const Vector& ob2)
{
	Vector summedVector(ob1.x + ob2.x, ob1.y + ob2.y, ob1.z + ob2.z);
	return summedVector;
}



float operator*(Vector& ob1, Vector& ob2) {
	float resualt = ob1.getterX() * ob2.getterX() + ob1.getterY() * ob2.getterY() + ob1.getterZ() * ob2.getterZ();
	return resualt;
}