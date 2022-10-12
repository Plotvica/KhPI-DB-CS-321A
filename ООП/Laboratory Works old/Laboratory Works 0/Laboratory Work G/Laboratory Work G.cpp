
#include "Header.h"

int main()
{

	int	seconds, minutes, button;
	
	TIMER timer1{ 60 }, timer2{ 60, 1 }, timer3 = timer1;

	while (true) {

		cout << "Chose the task: \nBy one seconds value - 1 \nBy minutes and seconds - 2 \nCopy - 3 \n-->"; cin >> button;
		if (cin.fail()) {
			system("cls");
			cin.clear();
			cin.ignore(32767, '\n');
			cout << " \t\t\tIncorrect input! ERROR! " << endl;
		}
		
		switch (button)
		{
		case 1:
			system("cls");
			cout << "Input seconds: \n-->"; cin >> seconds;
			 timer1 = { seconds };
			 timer1.print();
			break;
		case 2:
			system("cls");
			cout << "Input seconds and minutes: \n-->"; cin >> seconds >> minutes;
			timer2 = { seconds, minutes };
			timer2.print();
			break;
		case 3:
			system("cls");
			cout << "Input second: \n-->";
			timer3 = timer1;
			timer3.print();
			timer3 = timer2;
			timer3.print();
			break;
		default:
			break;
		}
		
		
	}
	
	






}
