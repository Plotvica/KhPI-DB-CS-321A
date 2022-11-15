#include <iostream>
#include <string>

using namespace std;

class Circle {

	float rad;

public:
	Circle(float rad = 0) noexcept {
		this->rad = rad;
	}
	float getLenth() noexcept {
		return this->rad * 2 * 3 * 3.14;
	}
	float getRad() noexcept {
		return this->rad;
	}
	float get_sqr() noexcept {
		return rad * rad * 3.14;
	}

	bool test() noexcept { if (rad > 0) return true; else return false; }
};

class Cylinder {

	float hight;
	Circle base;

public:
	Cylinder(Circle &base, float hight = 0) noexcept {
		this->base = base; this->hight = hight;
	}

	float get_v() noexcept { return base.test() ? base.get_sqr() * hight : 0; }
	float get_surface() noexcept { return base.test() ? base.getLenth() * hight + 2 * base.get_sqr() : 0; }
	void out() {
		if (base.getRad() > 0)
			cout << "Cylinder: " << hight << " " << base.getRad() << endl;
		else
			cout << "Error!\n";
	}
};



int main()
{
	Circle a(5), b(6), c(-5);

	Cylinder  figer1(a, 8), figer2(c, 4), figer3(c, 7);

	figer1.out();
	figer2.out();
	figer3.out();

}	

