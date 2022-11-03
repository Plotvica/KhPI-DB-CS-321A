#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#define  MAXSIZE 300

using namespace std;





class Abiturient {
protected:
	string dataNames[32] = { "Ethan", "Josh", "Sam", "Tom", "Bruse", "Michael", "Diego", "Adrian", "Brian", "Carl", "Caleb", "Charles", "Daniel", "Derek", "Elliot", "Kuel", 
	                       "Sophia", "Amelia", "Ella", "Chloe", "Penelope", "Emma", "Ava", "Isabella", "Elizabath", "Ginna", "Layla", "Zoey", "Olivia", "Sarah", "Rachel", "Emily"};
	string dataSecondNames[50] = { "Smith", "Johnson", "Williams", "Jones", "Brown","Davis","Miller", "Wilson","Moore","Taylor", "Anderson","Thomas","Jackson", "White","Harris","Martin", "Thompson","Garcia","Martinez", "Robinson","Clark","Rodriguez", "Lewis","Lee","Walker", "Hall","Allen","Young", "Hernandez","King","Wright", "Lopez","Hill","Scott", "Green","Adams","Baker", 
		"Gonzalez", "Nelson","Carter","Mitchell", "Perez","Roberts","Turner", "Phillips","Campbell","Parker", "Evans","Edwards","Collins"};
	string Name;
	string SecondName;
	int grade;
public:
	virtual int getGrade() const { return grade; };
	virtual string getName() const { return Name; }
	virtual string getSecond() const { return SecondName; }
	virtual string getAddress() = 0;
	virtual string getGrupe() = 0;
	virtual void print() = 0;
	virtual void setterAll() = 0;

};

class CSgrupe: public Abiturient
{
protected:
	string address;
	string grupe = "CS-321";
public:
	string getAddress() override { return address; }
};

class CSgrupeA: public CSgrupe
{
public:
	void setterAll() override {

		this->Name = dataNames[rand()%32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->address = Name + SecondName + "@cs.edu.ua";
		this->grade = rand() % 90 + 10;

		this->grupe = grupe + 'A';
	}
	void print() override {
		cout << "|" << setw(10) << left << this->Name << setw(10) << left << this->SecondName << "|" << setw(30) << this->address;
		cout << "|" << setw(3) << " " << this->grade << "   " << setw(4) << "|" << setw(6) << this->grupe << "  |" << endl;
	}
	string getGrupe() override { return grupe; }
};
class CSgrupeB : public CSgrupe
{
public:
	void setterAll() override {

		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->address = Name + SecondName + "@cs.edu.ua";
		this->grade = rand() % 90 + 10;

		this->grupe = grupe + 'B';
	}
	void print() override {
		cout << "|" << setw(10) << left << this->Name << setw(10) << left << this->SecondName << "|" << setw(30) << this->address;
		cout << "|" << setw(3) << " " << this->grade << "   " << setw(4) << "|" << setw(6) << this->grupe << "  |" << endl;
	}
	string getGrupe() override { return grupe; }
};
class CSgrupeC : public CSgrupe
{
public:
	void setterAll() override {
		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->address = Name + SecondName + "@cs.edu.ua";
		this->grade = rand() % 90 + 10;


		this->grupe = grupe + 'C';
	}
	void print() override {
		cout << "|" << setw(10) << left << this->Name << setw(10) << left << this->SecondName << "|" << setw(30) << this->address;
		cout << "|" << setw(3) << " " << this->grade << "   " << setw(4) << "|" << setw(6) << this->grupe << "  |" << endl;
	}
	string getGrupe() override { return grupe; }
};




class ENGgrupe : public Abiturient
{
protected:
	string address;
	string grupe = "PE-321";
public:
	string getAddress() override { return address; }
};

class ENGgrupeA : public ENGgrupe
{
public:
	void setterAll() override {
		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->address = Name + SecondName + "@pe.edu.ua";
		this->grade = rand() % 90 + 10;

		this->grupe = grupe + 'A';
	}
	void print() override {
		cout << "|" << setw(10) << left << this->Name << setw(10) << left << this->SecondName << "|" << setw(30) << this->address;
		cout << "|" << setw(3) << " " << this->grade << "   " << setw(4) << "|" << setw(6) << this->grupe << "  |" << endl;
	}
	string getGrupe() override { return grupe; }
};
class ENGgrupeB : public ENGgrupe
{
public:
	void setterAll() override {
		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->address = Name + SecondName + "@pe.edu.ua";
		this->grade = rand() % 90 + 10;

		this->grupe = grupe + 'B';
	}
	void print() override {
		cout << "|" << setw(10) << left << this->Name << setw(10) << left << this->SecondName << "|" << setw(30) << this->address;
		cout << "|" << setw(3) << " " << this->grade << "   " << setw(4) << "|" << setw(6) << this->grupe << "  |" << endl;
	}
	string getGrupe() override { return grupe; }
};
class ENGgrupeC : public ENGgrupe
{
public:
	void setterAll() override {
		this->Name = dataNames[rand() % 32];
		this->SecondName = dataSecondNames[rand() % 50];
		this->address = Name + SecondName + "@pe.edu.ua";
		this->grade = rand() % 90 + 10;


		this->grupe = grupe + 'C';
	}
	void print() override {
		cout << "|" << setw(10) << left << this->Name << setw(10) << left << this->SecondName << "|" << setw(30) << this->address;
		cout << "|" << setw(3) << " " << this->grade << "   " << setw(4) << "|" << setw(6) << this->grupe << "  |" << endl;
	}
	string getGrupe() override { return grupe; }
};


class Main {

private:
	int size;


	// main tasks
	void unsatisfactory(Abiturient** List, int size);
	void byGrade(Abiturient** List, int size, int setted);
	void hightesGradeandHalf(Abiturient** List, int size);


	// working method
	void Sort(Abiturient** List, int size, int button);
	void create(Abiturient** List, int size);
	void printList(Abiturient** List, int size);

public:
	void main();


	~Main() {};
};