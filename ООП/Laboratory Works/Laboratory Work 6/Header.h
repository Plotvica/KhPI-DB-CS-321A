#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

#define  MAXSIZE 300

using namespace std;

class Student {
	class Grade {
		short int grade;
		string subject;
	public:
		void setter(const short int& grade) noexcept { this->grade = grade; } ;
		short int getterGrade() noexcept { return grade; };
	};

	string FullName;
	string address;
	Grade grade;
	

public:

	Student* next, * prev;
	//Student();

	// setter
	void setterAll( string FullName,  string address, short int grade);

	//getters
	string getterFullname(); string getterAddress(); short int getterGrade();

	void show();

	~Student(){};
	friend void Sort(Student** head, short int set);
	
};



class Main
{
private:
	int size;
	
public:
	Main() : size(0) {};
	
	int GetSize() { return size; };
	void CreateList(short int count, Student** head, Student* tail);
	void PrintList(Student* head);
	void Insert(Student** head, Student** tail, int pos);
	void DeleteInList(Student** Dhead, Student** Dtail, int pos);
	bool DcheckNULL(Student* head);
	void FreeList(Student** head);
	void table_header();
	
	// main tasks
	void unsatisfactory(Student** head);
	void byGrade(Student** head, short int setted);
	void hightesGradeandHalf(Student** head);

	// working method
	void main();
	
	~Main() {};
};


