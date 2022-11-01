#include "Header.h"



int main()
{

	srand(time(0));
	int operationCounter, button;
	constexpr int size10 = 10;
	constexpr int size100 = 100;
	constexpr int size1000 = 1000;
	constexpr int size10000 = 10000;
	int array10[size10];
	int array100[size100];
	int array1000[size1000];
	int array10000[size10000];


	while (true){

		cout << "Buble sort - 1\n"
			<< "Sheker sort - 2\n"
			<< "Bucket sort - 3\n"
			<< "Exit - 0\n"
			<< "-->"; cin >> button;
		switch (button)
		{
		case 1: 
			while (button != 0){
				cout << "Choose the size of array:\n"
					<< "10 - 1\n"
					<< "100 - 2\n"
					<< "1 000 - 3\n"
					<< "10 000 - 4\n"
					<< "Back - 0\n"
					<< "-->"; cin >> button;
				switch (button){

				case 1:

					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl <<"/////////////////////////////////////////////////" << endl;
						readСhaotically(array10, size10);
						printArray(array10, size10);
						BubbleSort(array10, size10, operationCounter);
						printArray(array10, size10);
						cout << "\nOperations of Bubble sort 10 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
					break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array10, size10);
						printArray(array10, size10);
						BubbleSort(array10, size10, operationCounter);
						printArray(array10, size10);
						cout << "\nOperations of Bubble sort 10 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
					break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array10, size10);
						printArray(array10, size10);
						BubbleSort(array10, size10, operationCounter);
						printArray(array10, size10);
						cout << "\nOperations of Bubble sort 10 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
					break;

					case 0:
						break;
					default:
					break;
					}
				break;

				case 2:
					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array100, size100);
						printArray(array100, size100);
						BubbleSort(array100, size100, operationCounter);
						printArray(array100, size100);
						cout << "\nOperations of Bubble sort 100 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array100, size100);
						printArray(array100, size100);
						BubbleSort(array100, size100, operationCounter);
						printArray(array100, size100);
						cout << "\nOperations of Bubble sort 100 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array100, size100);
						printArray(array100, size100);
						BubbleSort(array100, size100, operationCounter);
						printArray(array100, size100);
						cout << "\nOperations of Bubble sort 100 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
				break;

				case 3:
					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array1000, size1000);
						printArray(array1000, size1000);
						BubbleSort(array1000, size1000, operationCounter);
						printArray(array1000, size1000);
						cout << "\nOperations of Bubble sort 1000 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array1000, size1000);
						printArray(array1000, size1000);
						BubbleSort(array1000, size1000, operationCounter);
						printArray(array1000, size1000);
						cout << "\nOperations of Bubble sort 1000 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array1000, size1000);
						printArray(array1000, size1000);
						BubbleSort(array1000, size1000, operationCounter);
						printArray(array1000, size1000);
						cout << "\nOperations of Bubble sort 1000 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
				break;


				case 4:
					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array10000, size10000);
						printArray(array10000, size10000);
						BubbleSort(array10000, size10000, operationCounter);
						printArray(array10000, size10000);
						cout << "\nOperations of Bubble sort 10 000 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array10000, size10000);
						printArray(array10000, size10000);
						BubbleSort(array10000, size10000, operationCounter);
						printArray(array10000, size10000);
						cout << "\nOperations of Bubble sort 10 000 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array10000, size10000);
						printArray(array10000, size10000);
						BubbleSort(array10000, size10000, operationCounter);
						printArray(array10000, size10000);
						cout << "\nOperations of Bubble sort 10 000 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
				break;


				default:
				break;
				}
			}
		break;


		case 2:
			while (button != 0) {
				cout << "Choose the size of array:\n"
					<< "10 - 1\n"
					<< "100 - 2\n"
					<< "1 000 - 3\n"
					<< "10 000 - 4\n"
					<< "Back - 0\n"
					<< "-->"; cin >> button;
				switch (button) {

				case 1:

					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array10, size10);
						printArray(array10, size10);
						ShekerSort(array10, size10, operationCounter);
						printArray(array10, size10);
						cout << "\nOperations of Sheker sort 10 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array10, size10);
						printArray(array10, size10);
						ShekerSort(array10, size10, operationCounter);
						printArray(array10, size10);
						cout << "\nOperations of Sheker sort 10 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array10, size10);
						printArray(array10, size10);
						ShekerSort(array10, size10, operationCounter);
						printArray(array10, size10);
						cout << "\nOperations of Sheker sort 10 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
					break;

				case 2:
					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array100, size100);
						printArray(array100, size100);
						ShekerSort(array100, size100, operationCounter);
						printArray(array100, size100);
						cout << "\nOperations of Sheker sort 100 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array100, size100);
						printArray(array100, size100);
						ShekerSort(array100, size100, operationCounter);
						printArray(array100, size100);
						cout << "\nOperations of Sheker sort 100 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array100, size100);
						printArray(array100, size100);
						ShekerSort(array100, size100, operationCounter);
						printArray(array100, size100);
						cout << "\nOperations of Sheker sort 100 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
					break;

				case 3:
					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array1000, size1000);
						printArray(array1000, size1000);
						ShekerSort(array1000, size1000, operationCounter);
						printArray(array1000, size1000);
						cout << "\nOperations of Sheker sort 1000 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array1000, size1000);
						printArray(array1000, size1000);
						ShekerSort(array1000, size1000, operationCounter);
						printArray(array1000, size1000);
						cout << "\nOperations of Sheker sort 1000 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array1000, size1000);
						printArray(array1000, size1000);
						ShekerSort(array1000, size1000, operationCounter);
						printArray(array1000, size1000);
						cout << "\nOperations of Sheker sort 1000 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
					break;


				case 4:
					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array10000, size10000);
						printArray(array10000, size10000);
						ShekerSort(array10000, size10000, operationCounter);
						printArray(array10000, size10000);
						cout << "\nOperations of Sheker sort 10 000 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array10000, size10000);
						printArray(array10000, size10000);
						ShekerSort(array10000, size10000, operationCounter);
						printArray(array10000, size10000);
						cout << "\nOperations of Sheker sort 10 000 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array10000, size10000);
						printArray(array10000, size10000);
						ShekerSort(array10000, size10000, operationCounter);
						printArray(array10000, size10000);
						cout << "\nOperations of Sheker sort 10 000 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
					break;


				default:
					break;
				}
			}
		break;

		case 3:
			while (button != 0) {
				cout << "Choose the size of array:\n"
					<< "10 - 1\n"
					<< "100 - 2\n"
					<< "1 000 - 3\n"
					<< "10 000 - 4\n"
					<< "Back - 0\n"
					<< "-->"; cin >> button;
				switch (button) {

				case 1:

					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array10, size10);
						printArray(array10, size10);
						BucketSort(array10, size10, operationCounter);
						printArray(array10, size10);
						cout << "\nOperations of Bucket sort 10 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array10, size10);
						printArray(array10, size10);
						BucketSort(array10, size10, operationCounter);
						printArray(array10, size10);
						cout << "\nOperations of Bucket sort 10 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array10, size10);
						printArray(array10, size10);
						BucketSort(array10, size10, operationCounter);
						printArray(array10, size10);
						cout << "\nOperations of Bucket sort 10 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
					break;

				case 2:
					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array100, size100);
						printArray(array100, size100);
						BucketSort(array100, size100, operationCounter);
						printArray(array100, size100);
						cout << "\nOperations of Bucket sort 100 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array100, size100);
						printArray(array100, size100);
						BucketSort(array100, size100, operationCounter);
						printArray(array100, size100);
						cout << "\nOperations of Bucket sort 100 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array100, size100);
						printArray(array100, size100);
						BucketSort(array100, size100, operationCounter);
						printArray(array100, size100);
						cout << "\nOperations of Bucket sort 100 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
					break;

				case 3:
					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array1000, size1000);
						printArray(array1000, size1000);
						BucketSort(array1000, size1000, operationCounter);
						printArray(array1000, size1000);
						cout << "\nOperations of Bucket sort 1000 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array1000, size1000);
						printArray(array1000, size1000);
						BucketSort(array1000, size1000, operationCounter);
						printArray(array1000, size1000);
						cout << "\nOperations of Bucket sort 1000 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array1000, size1000);
						printArray(array1000, size1000);
						BucketSort(array1000, size1000, operationCounter);
						printArray(array1000, size1000);
						cout << "\nOperations of Bucket sort 1000 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
					break;


				case 4:
					cout << "Choose the type of array:\n"
						<< "Random array by data file - 1\n"
						<< "Ascending array - 2\n"
						<< "Descending array - 3\n"
						<< "Back - 0\n"
						<< "-->"; cin >> button;

					switch (button)
					{
					case 1:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						readСhaotically(array10000, size10000);
						printArray(array10000, size10000);
						BucketSort(array10000, size10000, operationCounter);
						printArray(array10000, size10000);
						cout << "\nOperations of Bucket sort 10 000 Random --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 2:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createAscending(array10000, size10000);
						printArray(array10000, size10000);
						BucketSort(array10000, size10000, operationCounter);
						printArray(array10000, size10000);
						cout << "\nOperations of Bucket sort 10 000 Ascending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;
					case 3:
						cout << endl << "/////////////////////////////////////////////////" << endl;
						createDescending(array10000, size10000);
						printArray(array10000, size10000);
						BucketSort(array10000, size10000, operationCounter);
						printArray(array10000, size10000);
						cout << "\nOperations of Bucket sort 10 000 Descending --> " << operationCounter << endl;
						cout << "/////////////////////////////////////////////////" << endl << endl;
						break;

					case 0:
						break;
					default:
						break;
					}
					break;


				default:
					break;
				}
			}
		break;


		case 0: 
			exit(0);
			break;
		default:
		break;
		}





	}


	/*readСhaotically(array, size);
	printArray(array, size);
	BubbleSort(array, size, operationCounter);
	printArray(array, size);

	cout << "\nOperations --> " << operationCounter << endl;



	cout << " \n//////////////////////////////////////////////////////////////////////////////////////// \n";

	readСhaotically(array, size);
	printArray(array, size);
	ShekerSort(array, size, operationCounter);
	printArray(array, size);

	cout << "\nOperations --> " << operationCounter << endl;


	cout << " \n//////////////////////////////////////////////////////////////////////////////////////// \n";
	readСhaotically(array, size);
	printArray(array, size);
	BucketSort(array, size, operationCounter);
	printArray(array, size);

	cout << "\nOperations --> " << operationCounter << endl;*/



}


