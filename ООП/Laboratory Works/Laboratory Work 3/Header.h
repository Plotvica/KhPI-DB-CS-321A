#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

class Abiturient {
protected:
	string FullName;
	short int grade;
};

class CSgrupe: public Abiturient
{
protected:
	string address;
	string grupe = "CS-321";
};

class CSgrupeA: public CSgrupe
{

};
class CSgrupeB : public CSgrupe
{

};
class CSgrupeC : public CSgrupe
{

};




class ENGgrupe : public Abiturient
{
protected:
	string address;
	string grupe = "PE-321";
};

class ENGgrupeA : public ENGgrupe
{
		
};
class ENGgrupeB : public ENGgrupe
{

};
class ENGgrupeC : public ENGgrupe
{

};


