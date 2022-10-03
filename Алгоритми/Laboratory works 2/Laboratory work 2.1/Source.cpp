#include "Header.h"


string pathData = "data.txt";


void test(float* test, int size) {
	cout << "\nTEST\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << test[i] << " ";
	} cout << "\n";
}


void Stack::PushStack(float& newData)
{

	Stack* newStack = new Stack;

	newStack->data = newData;
	newStack->next = this->root;
	this->root = newStack;
	size++;

}



float Stack::PopStack()
{

	Stack* deletedITM = this->root;

	float tempData = deletedITM->data;
	this->root = deletedITM->next;
	delete deletedITM; deletedITM = NULL;
	size--;

	return tempData;
}


void Stack::CreateStack(int amount)
{
	if (amount == 0) {
		cout << "\tStack size can`t be 0!\n\t Please try again.\n";
		return;
	}
	float tempData;
	for (size_t i = 0; i < amount; i++){
		cout << "Input you`r data --> "; cin >> tempData;
		PushStack(tempData);
	}

}


bool Stack::isNULL()
{
	if (size == 0)
		return true;
	else
		return false;
}


void Stack::show() 
{

	if (size == 0) 
		cout << "\tStack haven`t found!\n";
	
	else {
		cout << "Stack: ";
		Stack* current = this->root;
		while (current != NULL) {
			cout << current->data << " -> ";
			current = current->next;
		} cout << endl;
	}
}

void Stack::deleteStack()
{
	while (root) PopStack();
	size = 0;

	cout << "\tStack have been deleted!\n";
	
}

void Stack::replaceFirstandLast()
{
	float first = root->data, last;

	Stack* current = root;
	for (size_t i = 0; i < size - 1; i++)
		current = current->next;
	 last = current->data;
	
	swap(first, last);
	root->data = first;
	current->data = last;


}

void Stack::reverse()
{
	int tempSize = size;
	float* tempStack = new float[size];

	for ( int i = 0; root != NULL; i++) 
		tempStack[i] = PopStack();
	
	for (size_t i = 0; i < tempSize; i++)
		PushStack(tempStack[i]);
	

	delete[] tempStack;
	tempStack = NULL;

}





void Stack::deleteEverySecond()
{
	int newSize;
	int oldSize = this->size;
	float transformSize = float(oldSize) / 2;

	if (transformSize - (oldSize / 2) > 0)
		 newSize = int (transformSize + 1);
	else
		newSize = int(transformSize);
	
	float* tempFullStack = new float[oldSize]; 
	float* newStack = new float[newSize]; 

	for (int i = 0; root != NULL; i++) 
		tempFullStack[i] = PopStack();

	for (int i = 0, j = 0; j < newSize; j++, i += 2) 
		newStack[j] = tempFullStack[i];
	
 
	for (size_t i = 0; i < newSize; i++) 
		PushStack(newStack[newSize - i -1]);


	delete[] newStack; newStack = NULL;
	delete[] tempFullStack; tempFullStack = NULL;

}

void Stack::findMax0()
{
	int oldSize = this->size;
	float* tempFullStack = new float[oldSize];
	float* newStack = new float[oldSize + 1];

	for (int i = 0; root != NULL; i++)
		tempFullStack[i] = PopStack();

	int max = INT_MIN;
	for (size_t i = 0; i < oldSize; i++) {
		if (tempFullStack[i] > max) {
			max = tempFullStack[i];
		}
	}

	cout << "Maximum element is: " << max << endl;

	short int flag = 0;

	for (size_t j = 0, i = 0; j < oldSize + 1; j++) {
		if (max == tempFullStack[i] and flag == 0) {
			newStack[j] = 0;
			j++; flag = 1;
		}
		newStack[j] = tempFullStack[i]; i++;
		
	
	}

	for (size_t i = 0; i < oldSize + 1; i++)
		PushStack(newStack[oldSize - i]);

	delete[] newStack; newStack = nullptr;
	delete[] tempFullStack; tempFullStack = nullptr;
}

void Stack::deleteMin()
{

	int oldSize = this->size;
	float* tempFullStack = new float[oldSize];
	float* newStack = new float[oldSize - 1];

	for (int i = 0; root != NULL; i++)
		tempFullStack[i] = PopStack();

	int min = INT_MAX;
	for (size_t i = 0; i < oldSize; i++) {
		if (tempFullStack[i] < min) {
			min = tempFullStack[i];
		}
	}

	cout << "Manimum element is: " << min << endl;

	short int flag = 0;

	for (size_t j = 0, i = 0; j < oldSize - 1; j++) {
		if (min == tempFullStack[i] and flag == 0) {
			 i++; flag = 1;
		}
		newStack[j] = tempFullStack[i]; i++;


	}
	

	for (size_t i = 0; i < oldSize - 1; i++)
		PushStack(newStack[(oldSize - 1) - i - 1]);

	delete[] newStack; newStack = nullptr;
	delete[] tempFullStack; tempFullStack = nullptr;


}

void Stack::deletAllExpFrist()
{

	int oldSize = this->size;
	float* tempFullStack = new float[1];

	for (int i = 0; root != NULL; i++) {
		if (i == (oldSize - 1)) {
			tempFullStack[0] = PopStack();
		}
		else PopStack();
	}
	PushStack(tempFullStack[0]);


	delete[] tempFullStack; tempFullStack = nullptr;

}

void Stack::deletAllExpLast()
{

	int oldSize = this->size;
	float* tempFullStack = new float[1];

	for (int i = 0; root != NULL; i++) {
		if (i == 0) {
			tempFullStack[0] = PopStack();
		}
		else PopStack();
	}
	PushStack(tempFullStack[0]);
	
	delete[] tempFullStack; tempFullStack = nullptr;
}

void Stack::read()
{
	
	ifstream dataFile;

	dataFile.open(pathData);

	if (dataFile.is_open()) {
		cout << "\tReading from the file was successful!\n";
		float temp;
		while (!dataFile.eof()) {
			dataFile >> temp;
			PushStack(temp);
		}
	}
		
	else
		cout << "\tReading from the file was not successful!\n";


	dataFile.close();


}

void Stack::write()
{
	ofstream dataFile;

	dataFile.open(pathData);
	
	

	if (size == 0) {
		cout << "\tStack haven`t found!\n";
		cout << "\tWriting to the file was not successful!\n";
	}
		

	else {
		cout << "Stack: ";
		Stack* current = this->root;
		while (current != NULL) {
			dataFile << " " << current->data;
			current = current->next;
		} 


		if (dataFile.is_open())
			cout << "\tWriting to the file was successful!\n";
		else
			cout << "\tWriting to the file was not successful!\n";
	}

	dataFile.close();
}


