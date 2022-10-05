#include "Header.h"


string dataPath = "data.txt";


void Queue::Push(const float& data)
{
		
	Queue* temp = new Queue;
	temp->next = 0;
	temp->data = data;
	if (tail != NULL)
		tail->next = temp;
	if (size == 0)
		head = tail = temp;
	else
		tail = temp;
	size++;


}

void Queue::show()
{

	if (size != 0) {

		Queue* temp = head;

		while (temp->next != 0)
		{
			cout << temp->data << " --> ";
			temp = temp->next;
		}

		cout << temp->data << endl;
	}
	else
		cout << "\tQueue dose not exist!\n";

}

void Queue::ArithmeticMean()
{
	float* tempQueu = new float[size];

	if (size != 0) {

		Queue* temp = head;

		for (size_t i = 0; i < size; i++) {
			tempQueu[i] = temp->data;
			temp = temp->next;
		}

		float arithmeticMean = 0;
		for (size_t i = 0; i < size; i++) {
			//cout << tempQueu[i] << " --> ";
			arithmeticMean += tempQueu[i];
		} //cout << endl;
		cout << "Arithmetic mean is: " << arithmeticMean / size << endl;
		
	}
	else 
		cout << "\tQueue dose not exist!\n";

	



	delete[] tempQueu; tempQueu = NULL;
}

void Queue::MinandMax()
{

	float* tempQueu = new float[size];

	if (size != 0) {

		Queue* temp = head;

		for (size_t i = 0; i < size; i++) {
			tempQueu[i] = temp->data;
			temp = temp->next;
		}

		int max = INT_MIN, min = INT_MAX;

		for (size_t i = 0; i < size; i++) {

			if (tempQueu[i] > max)
				max = tempQueu[i];
			if (tempQueu[i] < min)
				min = tempQueu[i];

		} cout << "Maximum: " << max << " Minimum: " << min << endl;

	}
	else
		cout << "\tQueue dose not exist!\n";


	delete[] tempQueu; tempQueu = NULL;


}

void Queue::beforeMIN()
{

	float* tempQueu = new float[size];

	if (size != 0) {

		Queue* temp = head;

		for (size_t i = 0; i < size; i++) {
			tempQueu[i] = temp->data;
			temp = temp->next;
		}

		int flag, min = INT_MAX;

		for (size_t i = 0; i < size; i++) {

			if (tempQueu[i] < min) {
				min = tempQueu[i]; flag = i;
			}
				

		} 
		if ( flag == 0)
			cout << "This element dose not exit yet.\n";
		else
			cout << "Next to min element: " << tempQueu[flag - 1] << endl;

	}
	else
		cout << "\tQueue dose not exist!\n";


	delete[] tempQueu; tempQueu = NULL;




}




void Queue::read()
{

	ifstream dataFile;

	dataFile.open(dataPath);

	if (dataFile.is_open()) {
		cout << "\tReading from the file was successful!\n";
		float temp;
		while (!dataFile.eof()) {
			dataFile >> temp;
			Push(temp);
		}
		
	}

	else
		cout << "\tReading from the file was not successful!\n";


	dataFile.close();


}

void Queue::write()
{
	ofstream dataFile;

	dataFile.open(dataPath);



	if (size == 0) {
		cout << "\tQueue haven`t found!\n";
		cout << "\tWriting to the file was not successful!\n";
	}


	else {
		Queue* current = this->head;
		while (current != NULL) {
			dataFile << " ";
			dataFile << current->data;
			current = current->next;
		}


		//if (dataFile.is_open())
		//	cout << "\tWriting to the file was successful!\n";
		//else
		//	cout << "\tWriting to the file was not successful!\n";
	}

	dataFile.close();
}


