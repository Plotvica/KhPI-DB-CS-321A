#pragma once
#include "pch.h"
#include "HumanLibrary.h"

#ifdef STUDENTLIBRARY_EXPORTS

#define STUDENTLIBRARY_API __declspec(dllexport)

#else

#define STUDENTLIBRARY_API __declspec(dllimport)

#endif



extern "C++" STUDENTLIBRARY_API class Sutedent : public Human
{
protected:
	string address;
	string study;

};

extern "C++" STUDENTLIBRARY_API class Extramural : public Sutedent
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
extern "C++" STUDENTLIBRARY_API class FullTime : public Sutedent
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

extern "C++" STUDENTLIBRARY_API class Abiturient : public Sutedent {
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