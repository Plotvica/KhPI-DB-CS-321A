#include "Header.h"



int main()
{

	Queue queue;
	float data;
	short int button;
	int sizeofQueue;





	while (true) {
		cout << "\nInput queue - 1 \nData file queue - 2 \nReset - 3 \nExit - 0 \n-->"; cin >> button;
		switch (button)
		{
		case 1:

			if (queue.amount() == 0) {
				cout << "Size of queue: "; cin >> sizeofQueue;
				for (size_t i = 0; i < sizeofQueue; i++) {
					cout << "Input your data --> "; cin >> data;
					queue.Push(data);
				}
			}

			cout << endl; queue.show(); cout << endl; queue.write();

			while (button != 0) {
				// menu
				cout << "Output the amount of queue - 1\n" <<
					"Arithmetic mean - 2\n" <<
					"Minimum and maximum element - 3\n" <<
					"Element that comes before the minimum element - 4\n" <<
					"Back - 0\n"
					"--> ";
				cin >> button;


				switch (button)
				{
				case 1:
					cout << "Amount of queue is: " << queue.amount() << endl;
					cout << endl; queue.show(); cout << endl;
					queue.write();
					break;
				case 2:
					queue.ArithmeticMean();
					queue.write();
					break;
				case 3:
					cout << endl; queue.show(); cout << endl;
					queue.MinandMax();
					queue.write();
					break;
				case 4:
					cout << endl; queue.show(); cout << endl;
					queue.beforeMIN();
					queue.write();
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

			if (queue.amount() > 0) {
				queue.deleteq();
			}


			queue.read();
			cout << endl; queue.show(); cout << endl;

			while (button != 0) {
				// menu
				cout << "Output the amount of queue - 1\n" <<
					"Arithmetic mean - 2\n" <<
					"Minimum and maximum element - 3\n" <<
					"Element that comes before the minimum element - 4\n" <<
					"Back - 0\n"
					"--> ";
				cin >> button;


				switch (button)
				{
				case 1:
					cout << "Amount of queue is: " << queue.amount() << endl;
					cout << endl; queue.show(); cout << endl;
					queue.write();
					break;
				case 2:
					queue.ArithmeticMean();
					queue.write();
					break;
				case 3:
					cout << endl; queue.show(); cout << endl;
					queue.MinandMax();
					queue.write();
					break;
				case 4:
					cout << endl; queue.show(); cout << endl;
					queue.beforeMIN();
					queue.write();
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
			queue.deleteq();
			break;
		case 0:
			system("cls");
			queue.deleteq();
			exit(0);
			break;
		default:
			cout << " \t\t\tIncorrect input! ERROR! " << endl;
			break;
			break;
		}


	}

}

