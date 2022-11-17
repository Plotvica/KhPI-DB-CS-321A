#include "pch.h"
#include "HumanLibrary.h"

#ifdef STAFFLIBRARY_EXPORTS

#define STAFFLIBRARY_API __declspec(dllexport)

#else

#define STAFFLIBRARY_API __declspec(dllimport)

#endif




extern "C++" STAFFLIBRARY_API class Staff : public Human
{
protected:
	string number = "+380";
	string work;

};
extern "C++" STAFFLIBRARY_API class Teacher : public Staff {
	bool parkingPlace;
	string workOps[4] = { "Paper work", "Lection work", "Practical work", "Laboratory work" };
public:
	void setterAll() override {

		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->number += (to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10));
		this->work = workOps[rand() % 4];
		this->passID = "Teacher";
		this->parkingPlace = rand() % 2;
	}
	void print() override {
		cout << "|" << setw(10) << this->Name << setw(10) << this->SecondName << "|" << setw(33) << this->number;
		cout << "|" << setw(12) << this->passID << setw(4) << "|" << setw(12) << "Parking: " << boolalpha << setw(9) << this->parkingPlace << setw(6) << "|" << setw(23) << this->work << setw(4) << "|" << endl;
	}
};
extern "C++" STAFFLIBRARY_API class Security : public Staff {

	int shift;
public:
	void setterAll() override {

		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->number += (to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10));
		this->shift = rand() % 6 + 1;
		this->passID = "Security";
		this->work = "CHECKPOINT " + to_string(rand() % 8 + 1);
	}
	void print() override {
		cout << "|" << setw(10) << this->Name << setw(10) << this->SecondName << "|" << setw(33) << this->number;
		cout << "|" << setw(12) << this->passID << setw(4) << "|" << setw(12) << "Shift: " << this->shift << setw(14) << "|" << setw(20) << this->work << setw(7) << "|" << endl;
	}
};