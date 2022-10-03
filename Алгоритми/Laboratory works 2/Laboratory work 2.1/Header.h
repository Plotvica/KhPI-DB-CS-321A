#pragma once

#include <iostream>
#include <fstream>
#include <string>



using namespace std;



class Stack
{

private:

	float data;
	Stack* next;
	Stack* root;
	int size;

public:
	
	void PushStack(float &newData);
	float PopStack();
	void CreateStack(int amount);
	bool isNULL();
	void show();

	void deleteStack();
	//task mathods
	void replaceFirstandLast();
	void reverse();
	void deleteEverySecond();
	void findMax0();
	void deleteMin();
	void deletAllExpFrist();
	void deletAllExpLast();

	//filework
	void read();
	void write();

	
	Stack() { root = NULL; size = 0; }

};

