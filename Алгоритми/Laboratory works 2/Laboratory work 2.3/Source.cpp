#include "Header.h"


string dataPath = "data.txt";

void Dack::PushBack(const float& data)
{

	Dack* temp = new Dack;
	temp->next = NULL;
	temp->data = data;
	temp->prev = tail;
	if (tail != NULL)
		tail->next = temp;
	if (size == 0)
		head = tail = temp;
	else
		tail = temp;
	size++;

}

void Dack::PushFront(const float& data)
{

	Dack* temp = new Dack;
	temp->data = data;
	temp->prev = NULL;
	if (size == 0)
		head = tail = temp;
	else {
		temp->next = head;
		head->prev = temp;
		head = temp;
	}

	size++;

}

void Dack::show()
{

	if (size != 0) {

		Dack* temp = head;

		while (temp->next != 0)
		{
			cout << temp->data << " --> ";
			temp = temp->next;
		}

		cout << temp->data << endl;
	}
	else
		cout << "\tDack dose not exist!\n";


}


void Dack::read()
{

	ifstream dataFile;

	dataFile.open(dataPath);

	if (dataFile.is_open()) {
		cout << "\tReading from the file was successful!\n";
		float temp;
		while (!dataFile.eof()) {
			dataFile >> temp;
			PushFront(temp);
		}

	}

	else
		cout << "\tReading from the file was not successful!\n";


	dataFile.close();


}

void Dack::write()
{
	ofstream dataFile;

	dataFile.open(dataPath);



	if (size == 0) {
		cout << "\tDack haven`t found!\n";
		cout << "\tWriting to the file was not successful!\n";
	}


	else {
		Dack* current = this->head;
		while (current != NULL) {
			dataFile << " ";
			dataFile << current->data;
			current = current->next;
		}


		if (dataFile.is_open())
			cout << "\tWriting to the file was successful!\n";
		else
			cout << "\tWriting to the file was not successful!\n";
	}

	dataFile.close();
}





