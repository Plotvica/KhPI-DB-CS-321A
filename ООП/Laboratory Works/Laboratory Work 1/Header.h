#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

#define  MAXSIZE 300

using namespace std;

class Abiturient {

	string FullName;
	string address;
	short int grade;
	

public:

	Abiturient* next, * prev;
	//Abiturient();

	// setters
	void setterAll(const string& FullName, const string& address, const short int& grade);
	void setterFullname(const string& FullName); void setterAddress(const string& address); void setterGrade(const short int& grade);
	//getters
	string getterFullname() const; string getterAddress() const; short int getterGrade() const;

	void show();


	//~Abiturient(){};

};



class Main
{
private:
	int size;
	


public:
	Main() : size(0) {};
	
	int GetSize() { return size; };
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


};


