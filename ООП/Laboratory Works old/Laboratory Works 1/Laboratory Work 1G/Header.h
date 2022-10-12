#pragma once

#include <iostream>
#include <string>


using namespace std;

class DOG {

	string pet_name;
	short int pet_age;
	float pet_weight;
public:
	void set(const string& pet_name, const int& pet_age, const float& pet_weight);
	string get_pet_name() const { return this->pet_name; };
	short int get_pet_age() const { return this->pet_age; };
	float get_pet_weight() const { return this->pet_weight; };
	DOG();
	DOG(const string& pet_name, const int& pet_age, const float& pet_weight);
	

	
};

class MASTER {

	string full_name;
	const short int ID_of_club = 6995;
	short int count_of_dog = 0;
	DOG* pet;
	static short int count;
	

public:
	
	void show() const;
	void freemem() const { delete[] pet; };

	MASTER();
	MASTER(const short int count_of_dog);
	MASTER(const string& full_name, const short int& count_of_dog);
	
}; 

