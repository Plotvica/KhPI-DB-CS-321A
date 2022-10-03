#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;




class Dack {

private:

	int size;
	float data;
	Dack* head;
	Dack* next;
	Dack* tail;
	Dack* prev;



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
			Dack* deletedITM = this->head;
			float tempData = deletedITM->data;
			this->head = deletedITM->next;
			delete deletedITM; deletedITM = NULL;
			size--;
		}
		cout << "\tStack have been deleted!\n";
	}
	Dack() { head = NULL; tail = NULL; size = 0; }


};
