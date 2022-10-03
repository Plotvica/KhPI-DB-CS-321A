#include "Header.h"



int main()
{



	Dack dack;

	float data;
	int size = 5;
	/*for (size_t i = 0; i < size; i++)
	{
		cout << "Input you`r data \n-->"; cin >> data; dack.PushBack(data);
	} dack.show();*/

	dack.read();

	dack.PushFront(10);
	dack.show();
	//cout << dack.readLast() << endl;

	dack.write();






}
