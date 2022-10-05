#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;




class Deque {

private:

	int size;
	float data;
	Deque* head;
	Deque* next;
	Deque* tail;
	Deque* prev;



public:

	void PushFront(const float& data);
	void PushBack(const float& data);
	void show();
	bool isNULL() {
		if (size == 0)
			return true;
		else
			return false;
		
	}
	float readLast(){ return tail->data; };
	void read();
	void write();

	void deleted() {
		while (head) {
			Deque* deletedITM = this->head;
			float tempData = deletedITM->data;
			this->head = deletedITM->next;
			delete deletedITM; deletedITM = NULL;
			size--;
		}
		cout << "\tDeque have been deleted!\n";
	}
	Deque() { head = NULL; tail = NULL; size = 0; }


};
