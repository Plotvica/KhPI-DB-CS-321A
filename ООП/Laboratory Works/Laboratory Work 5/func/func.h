#pragma once
#define _CRT_SECURE_NO_WARNINGS
#ifdef FUNC_EXPORTS
#define FUNC_API __declspec(dllexport)
#else
#define FUNC_API __declspec(dllimport)
#endif

#define  MAXSIZE 300

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>



using namespace std;

class Abiturient {

	string FullName;
	string address;
	short int grade;


public:

	Abiturient* next, * prev;
	//Abiturient();

	// setter
	void setterAll(const string& FullName, const string& address, const short int& grade);

	//getters
	string getterFullname() const; string getterAddress() const; short int getterGrade() const;

	void show();

	//~Abiturient() {};
	friend void Sort(Abiturient** head, short int set);
};


 class Main
{
private:
	int size;

public:
	Main() noexcept : size(0) {};

	int GetSize() noexcept { return size; };
	void CreateList(short int count, Abiturient** head, Abiturient* tail);
	void PrintList(Abiturient* head);
	void Insert(Abiturient** head, Abiturient** tail, int pos);
	void DeleteInList(Abiturient** Dhead, Abiturient** Dtail, int pos);
	bool DcheckNULL(Abiturient* head);
	void FreeList(Abiturient** head);
	void table_header();

	// main tasks
	void unsatisfactory(Abiturient** head);
	void byGrade(Abiturient** head, short int setted);
	void hightesGradeandHalf(Abiturient** head);

	// working method
	void main();

	//~Main() {};
};

extern "C++" FUNC_API void complite();