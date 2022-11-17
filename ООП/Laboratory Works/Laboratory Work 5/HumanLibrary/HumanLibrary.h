#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

#ifdef HUMANLIBRARY_EXPORTS

#define HUMANLIBRARY_API __declspec(dllexport)

#else

#define HUMANLIBRARY_API __declspec(dllimport)

#endif

#define  MAXSIZE 300

using namespace std;


extern "C++" HUMANLIBRARY_API class Human {
protected:
	string dataNames[32] = { "Ethan", "Josh", "Sam", "Tom", "Bruse", "Michael", "Diego", "Adrian", "Brian", "Carl", "Caleb", "Charles", "Daniel", "Derek", "Elliot", "Kuel",
						   "Sophia", "Amelia", "Ella", "Chloe", "Penelope", "Emma", "Ava", "Isabella", "Elizabath", "Ginna", "Layla", "Zoey", "Olivia", "Sarah", "Rachel", "Emily" };
	string dataSecondNames[50] = { "Smith", "Johnson", "Williams", "Jones", "Brown","Davis","Miller", "Wilson","Moore","Taylor", "Anderson","Thomas","Jackson", "White","Harris","Martin", "Thompson","Garcia","Martinez", "Robinson","Clark","Rodriguez", "Lewis","Lee","Walker", "Hall","Allen","Young", "Hernandez","King","Wright", "Lopez","Hill","Scott", "Green","Adams","Baker",
		"Gonzalez", "Nelson","Carter","Mitchell", "Perez","Roberts","Turner", "Phillips","Campbell","Parker", "Evans","Edwards","Collins" };


	string Name;
	string SecondName;
	string passID;

public:

	virtual string getName() const { return Name; }
	virtual string getpassID() const { return passID; }
	virtual string getSecond() const { return SecondName; }
	virtual void print() = 0;
	virtual void setterAll() = 0;

};

extern "C++" HUMANLIBRARY_API class Sutedent : public Human
{
protected:
	string address;
	string study;

};

extern "C++" HUMANLIBRARY_API class Extramural : public Sutedent
{
	long int studyCost;
public:
	void setterAll() override {

		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->address = Name + SecondName + "@khpi.edu.ua";
		this->study = "To pay for study";
		this->passID = "ETStudent";
		this->studyCost = (rand() % 90000 + 1000);
	}
	void print() override {
		cout << "|" << setw(10) << this->Name << setw(10) << this->SecondName << "|" << setw(33) << this->address;
		cout << "|" << setw(12) << this->passID << setw(4) << "|" << setw(11) << "Debt: " << setw(6) << this->studyCost << setw(10) << "|" << setw(23) << this->study << setw(4) << "|" << endl;
	}

};
extern "C++" HUMANLIBRARY_API class FullTime : public Sutedent
{
private:
	string department;
	string Crops[6] = { "Building 1", "Building 2", "Building 3", "Building 4", "Building 5", "Building 6" };
	string Grupe[6] = { "CS-321a", "CS-321b", "CS-321c", "PE-321a", "PE-321b", "PE-321c" };
public:
	void setterAll() override {

		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->department = Grupe[rand() % 6];
		if (this->department == Grupe[0] or this->department == Grupe[1] or this->department == Grupe[2])
			this->address = Name + SecondName + "@cs.khpi.edu.ua";
		else
			this->address = Name + SecondName + "@pe.khpi.edu.ua";
		this->passID = "FTStudent";
		this->study = Crops[rand() % 6];

	}
	void print() override {
		cout << "|" << setw(10) << this->Name << setw(10) << this->SecondName << "|" << setw(33) << this->address;
		cout << "|" << setw(12) << this->passID << setw(4) << "|" << setw(15) << this->department << setw(12) << "|" << setw(20) << this->study << setw(7) << "|" << endl;
	}

};

extern "C++" HUMANLIBRARY_API class Abiturient : public Sutedent {
	int grade;
public:
	void setterAll() override {

		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->address = Name + SecondName + "@gmail.com";
		this->passID = "Abiturient";
		this->grade = rand() % 81 + 120;
		this->study = "To apply the documents";

	}
	void print() override {
		cout << "|" << setw(10) << this->Name << setw(10) << this->SecondName << "|" << setw(33) << this->address;
		cout << "|" << setw(13) << this->passID << setw(3) << "|" << setw(12) << "EIE: " << grade << setw(12) << "|" << setw(24) << this->study << setw(3) << "|" << endl;
	}


};

extern "C++" HUMANLIBRARY_API class Staff : public Human
{
protected:
	string number = "+380";
	string work;

};
extern "C++" HUMANLIBRARY_API class Teacher : public Staff {
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
extern "C++" HUMANLIBRARY_API class Security : public Staff {

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