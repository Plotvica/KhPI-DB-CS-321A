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



