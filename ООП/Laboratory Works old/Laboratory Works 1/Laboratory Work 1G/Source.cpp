#include "Header.h"

short int MASTER::count = 0;

string DOGnames[] = { "Pedro", "Col.Gavs", "Chupapi", "Muninia", "Lucky" };

void DOG::set(const string& pet_name, const int& pet_age, const float& pet_weight) {

	this->pet_name = pet_name;
	this->pet_age = pet_age;
	this->pet_weight = pet_weight;

}

DOG::DOG() :pet_name("Tcutcuk"), pet_age(2), pet_weight(12) { }

DOG::DOG(const string& pet_name, const int& pet_age, const float& pet_weight) {

	this->pet_name = pet_name;
	this->pet_age = pet_age;
	this->pet_weight = pet_weight;

}



MASTER::MASTER() {

	count++;
	this->count_of_dog = 1;
	full_name = to_string(count) + ") " + "Ivanych";
	pet = new DOG[1];
	pet[0].set(DOGnames[rand() % 5], rand() % 20 + 5, rand() % 15 + 1);


}



MASTER::MASTER(const short int count_of_dog) {

	this->count_of_dog = count_of_dog;

	count++;

	pet = new DOG[count_of_dog];

	full_name = to_string(count) + ") " + "Petrowich";

	for (size_t i = 0; i < count_of_dog; i++) {
		pet[i].set(DOGnames[rand()%5], rand() % 20 + 5, rand() % 15 + 1);
	}
	
}

MASTER::MASTER(const string& full_name, const short int& count_of_dog) {
	
	string pet_name; int pet_age; float pet_weight;


	count++;
	this->full_name = to_string(count) + ") " + full_name;
	this->count_of_dog = count_of_dog;

	pet = new DOG[count_of_dog];

	for (size_t i = 0; i < count_of_dog; i++) {
		cout << i + 1 << ") Input the pet name, age and weight \n-->"; cin >> pet_name >> pet_age >> pet_weight;
		pet[i].set(pet_name, pet_age, pet_weight);
	}
	cout << endl;

}


void MASTER::show() const {

	cout << full_name << " " << ID_of_club << endl;
	if (count_of_dog > 1) {
		cout << "DOGS:\n";
	} 
	else if (count_of_dog == 1) {
		cout << "DOG information:\n";

	}
	else {
	cout << "\t\tThis owner dosen`t have a dog!\n";
	}

	for (size_t i = 0; i < count_of_dog; i++) {
		cout << " " << pet[i].get_pet_name() << " " << pet[i].get_pet_age() << " " << pet[i].get_pet_weight() << endl;
	}

	

}

