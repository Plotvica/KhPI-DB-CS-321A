#include "Header.h"






int main(){


	srand(time(NULL));
	short int button, x, y;



	SUMM ob, *p =&ob;
	
	
	while (true)
	{
		cout << "Choose the method:" << endl << "By object - 1 \nBy pointer - 2 \nExit - 0" << "\n--->"; cin >> button;
		inputCheker();
		switch (button) {

				case 1:
					system("cls");
					cout << "Input x value: \n--->"; cin >> x;
					cout << "Input y value: \n--->"; cin >> y;
					ob.set(x, y);
					ob.summa();
					cout << "All values: \n"; ob.print(); cout << endl;
				break;

				case 2:
					system("cls");
					cout << "Input x value: \n--->"; cin >> x;
					cout << "Input y value: \n--->"; cin >> y;
					p->set(x, y);
					p->summa();
					cout << "All values: \n"; p->print(); cout << endl;
				break;

				case 0:
					system("cls");
					exit(0);
					delete p;
				break;

				default:
					system("cls");
					cout << " \t\t\tIncorrect input! ERROR! " << endl;
				break;
		}
	}
	
	return 0;
}