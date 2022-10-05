#include "Header.h"


string dataPath = "data.txt";

void Deque::PushBack(const float& data)
{

	Deque* temp = new Deque;
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

void Deque::PushFront(const float& data)
{

	Deque* temp = new Deque;
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

void Deque::show()
{

	if (size != 0) {

		Deque* temp = head;

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


void Deque::read()
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

void Deque::write()
{
	ofstream dataFile;

	dataFile.open(dataPath);



	if (size == 0) {
		cout << "\tDack haven`t found!\n";
		cout << "\tWriting to the file was not successful!\n";
	}


	else {
		Deque* current = this->head;
		while (current != NULL) {
			dataFile << " ";
			dataFile << current->data;
			current = current->next;
		}


		/*if (dataFile.is_open())
			cout << "\tWriting to the file was successful!\n";
		else
			cout << "\tWriting to the file was not successful!\n";*/
	}

	dataFile.close();
}





