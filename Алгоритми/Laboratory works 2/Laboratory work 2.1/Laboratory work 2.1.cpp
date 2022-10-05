#include "Header.h"

int main()
{


	Stack stack;

	short int button;
	int sizeofStack;

	while (true) {
		cout << "\nInput stack - 1 \nData file stack - 2 \nReset - 3 \nExit - 0 \n-->"; cin >> button;
			switch (button)
			{
			case 1:
				
				if (stack.isNULL()) {
					cout << "Size of stack: "; cin >> sizeofStack;
					stack.CreateStack(sizeofStack);
				}
				
				cout << endl; stack.show(); cout << endl; stack.write();

				while (button != 0) {
					// menu
					cout << "Swap the first and last elements of the stack - 1\n" <<
						"Expand the stack - 2\n" <<
						"Remove every second element of the stack - 3\n" <<
						"Find the maximum element and insert 0 after it - 4\n" <<
						"Remove the minimal element - 5\n" <<
						"Remove all elements except the first - 6\n" <<
						"Delete all elements except the last one -7\n" <<
						"Back - 0\n"
						"--> ";
					cin >> button;


					switch (button)
					{
					case 1:
						stack.replaceFirstandLast();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 2:
						stack.reverse();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 3:
						stack.deleteEverySecond();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 4:
						stack.findMax0();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 5:
						stack.deleteMin();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 6:
						stack.deletAllExpFrist();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 7:
						stack.deletAllExpLast();
						cout << endl; stack.show(); cout << endl;
						stack.write();
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

				if (!stack.isNULL()) {
					stack.deleteStack();
				}


				stack.read();
				cout << endl; stack.show(); cout << endl;

				while (button != 0) {
					// menu
					cout << "Swap the first and last elements of the stack - 1\n" <<
						"Expand the stack - 2\n" <<
						"Remove every second element of the stack - 3\n" <<
						"Find the maximum element and insert 0 after it - 4\n" <<
						"Remove the minimal element - 5\n" <<
						"Remove all elements except the first - 6\n" <<
						"Delete all elements except the last one -7\n" <<
						"Back - 0\n"
						"--> ";
					cin >> button;


					switch (button)
					{
					case 1:
						stack.replaceFirstandLast();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 2:
						stack.reverse();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 3:
						stack.deleteEverySecond();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 4:
						stack.findMax0();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 5:
						stack.deleteMin();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 6:
						stack.deletAllExpFrist();
						cout << endl; stack.show(); cout << endl;
						stack.write();
						break;
					case 7:
						stack.deletAllExpLast();
						cout << endl; stack.show(); cout << endl;
						stack.write();
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
				stack.deleteStack();
				break;
			case 0:
				system("cls");
				stack.deleteStack();
				exit(0);
				break;
			default:
				cout << " \t\t\tIncorrect input! ERROR! " << endl;
				break;
			break;
			}
	}
	


}
