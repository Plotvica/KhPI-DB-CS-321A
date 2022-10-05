#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Queue {

private:

	int size;
	float data;
	Queue* head;
	Queue* next;
	Queue* tail;



public:

	void Push(const float& data);
	void show();
	int amount() { return size; }
	void ArithmeticMean();
	void MinandMax();
	void beforeMIN();
	void write();
	void read();

	void deleteq() {
		while (head) {
			Queue* deletedITM = this->head;
			float tempData = deletedITM->data;
			this->head = deletedITM->next;
			delete deletedITM; deletedITM = NULL;
			size--;
		}
		cout << "\tQueue have been deleted!\n";
	}

	Queue() { head = NULL; tail = NULL; size = 0; }


};