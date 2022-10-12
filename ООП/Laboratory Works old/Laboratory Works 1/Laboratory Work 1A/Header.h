#pragma once

#include <iostream>

using namespace std;



class Point {

	int x, y;

public:

	void set( const int x, const int y);
	void show() const;
	void back(int& summ, int &mult) const;


	Point() :x(0),y(0) {};
	Point(const int &a, const int &b) :x(a), y(b) {};
	Point(const Point& ob) :x(ob.x),y(ob.y) {};


};

