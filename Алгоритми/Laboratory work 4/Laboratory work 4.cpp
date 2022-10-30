#include "Header.h"



int main()
{

	srand(time(0));
	int opcnt;
	constexpr int size = 10000;
	int array[size];


	readСhaotically(array, size);
	printArray(array, size);
	BubbleSort(array, size, opcnt);
	printArray(array, size);

	cout << "\nOperations --> " << opcnt << endl;



	cout << " \n//////////////////////////////////////////////////////////////////////////////////////// \n";

	readСhaotically(array, size);
	printArray(array, size);
	ShekerSort(array, size, opcnt);
	printArray(array, size);

	cout << "\nOperations --> " << opcnt << endl;


	cout << " \n//////////////////////////////////////////////////////////////////////////////////////// \n";
	readСhaotically(array, size);
	printArray(array, size);
	BucketSort(array, size, opcnt);
	printArray(array, size);

	cout << "\nOperations --> " << opcnt << endl;



}


