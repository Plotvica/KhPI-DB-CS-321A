#include "Header.h"



int main()
{



	Deque deque;
	float data;
	short int button;
	int sizeofQueue;



	while (true) {
		cout << "\nInput deque - 1 \nData file deque - 2 \nReset - 3 \nExit - 0 \n-->"; cin >> button;
		switch (button)
		{
		case 1:

			if (deque.isNULL()) {
				cout << "Size of deque: "; cin >> sizeofQueue;
				for (size_t i = 0; i < sizeofQueue; i++) {
					cout << "Input your data --> "; cin >> data;
					deque.PushBack(data);
				}
			}

			cout << endl; deque.show(); cout << endl;
			deque.write();

			while (button != 0) {
				// menu
				cout << "Add an element to the beginning - 1\n" <<
					"Add an element to the end - 2\n" <<
					"Read the last element - 3\n" <<
					"Back - 0\n"
					"--> ";
				cin >> button;


				switch (button)
				{
				case 1:
					cout << "Input your data --> "; cin >> data;
					deque.PushFront(data);
					cout << endl; deque.show(); cout << endl;
					deque.write();
					break;
				case 2:
					cout << "Input your data --> "; cin >> data;
					deque.PushBack(data);
					cout << endl; deque.show(); cout << endl;
					deque.write();
					break;
				case 3:
					cout << "Last element is: " << deque.readLast() << endl;
					break;
				case 0:
					break;
				default:
					cout << " \t\t\tIncorrect input! ERROR! " << endl;
					break;
				}
			}
			break;

		case 2:

			if (!deque.isNULL()) {
				deque.deleted();
			}


			deque.read();
			cout << endl; deque.show(); cout << endl;

			while (button != 0) {
				// menu
				cout << "Add an element to the beginning - 1\n" <<
					"Add an element to the end - 2\n" <<
					"Read the last element - 3\n" <<
					"Back - 0\n"
					"--> ";
				cin >> button;


				switch (button)
				{
				case 1:
					cout << "Input your data --> "; cin >> data;
					deque.PushFront(data);
					cout << endl; deque.show(); cout << endl;
					deque.write();
					break;
				case 2:
					cout << "Input your data --> "; cin >> data;
					deque.PushBack(data);
					cout << endl; deque.show(); cout << endl;
					deque.write();
					break;
				case 3:
					cout << "Last element is: " << deque.readLast() << endl;
					break;
				case 0:
					break;
				default:
					cout << " \t\t\tIncorrect input! ERROR! " << endl;
					break;
				}
			}

		case 3:
			system("cls");
			deque.deleted();
			break;
		case 0:
			system("cls");
			deque.deleted();
			exit(0);
			break;
		default:
			cout << " \t\t\tIncorrect input! ERROR! " << endl;
			break;
			break;
		}


	}










}
