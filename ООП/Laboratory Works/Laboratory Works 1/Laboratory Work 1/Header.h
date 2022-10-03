#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;


class Data {

	string firm;
	short int product;
	long int as;
	float part;

public:
	void set (const string &firm, const short int &product, const long int &as, const float& part);
	void get (string& firm, short int& product, long int& as, float& part) const;
	void show() const;

};