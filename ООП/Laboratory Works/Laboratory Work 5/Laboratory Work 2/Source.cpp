#include "Header.h"




void Main::main() const
{
	srand(time(NULL));

	int size = 10;
	Fraction arr[10], newarr[10], result;

	int button, fchoose, schoose;

	cout << "First array: \n";
	arr->print(arr, size);
	cout << endl;
	cout << "Second array: \n";
	newarr->print(newarr, size);
	cout << endl;

	while (true) {

		cout << "1 - Print and clear\n" <<
			"2 - Operator (+)\n" <<
			"3 - Operator (-)\n" <<
			"4 - Operator (/)\n" <<
			"5 - Operator (*)\n" <<
			"6 - Operator (=)\n" <<
			"7 - Comparison Operators\n" <<
			"8 - Add previous to every second element of array\n" <<
			"0 - Exit\n" <<
			"--> "; cin >> button;

		switch (button)
		{
		case 1:
			system("cls");
			cout << "First array: \n";
			arr->print(arr, size);
			cout << endl;
			cout << "Second array: \n";
			newarr->print(newarr, size);
			cout << endl;
		break;

		case 2:
			cout << "\nChoose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
			cout << "\nSecond array`s element-->"; cin >> schoose;
			if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) {
				cout << "Invalid input\n\n"; break;
			}
			result = arr[fchoose - 1] + newarr[schoose - 1];
				cout << "\nResult: \n" << arr[fchoose-1] << "\n + \n" << newarr[schoose-1] << endl << " ======= "<< endl << result << endl << endl;
		break;

		case 3:
			cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
			cout << "\nSecond array`s element-->"; cin >> schoose;
			if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) {
				cout << "Invalid input\n\n"; break;
			}
			result = arr[fchoose - 1] - newarr[schoose - 1];
			cout << "\nResult: \n" << arr[fchoose - 1] << "\n - \n" << newarr[schoose - 1] << endl << " ======= " << endl << result << endl << endl;
		break;

		case 4:
			cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
			cout << "\nSecond array`s element-->"; cin >> schoose;
			if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) {
				cout << "Invalid input\n\n"; break;
			}
			result = arr[fchoose - 1] / newarr[schoose - 1];
			cout << "\nResult: \n" << arr[fchoose - 1] << "\n ------------------- \n" << newarr[schoose - 1] << endl << " ======= " << endl << result << endl << endl;
		break;

		case 5:
			cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
			cout << "\nSecond array`s element-->"; cin >> schoose;
			if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) {
				cout << "Invalid input\n\n"; break;
			}
			result = arr[fchoose - 1] * newarr[schoose - 1];
			cout << "\nResult: \n" << arr[fchoose - 1] << "\n * \n" << newarr[schoose - 1] << endl << " ======= " << endl << result << endl << endl;
		break;

		case 6:
			cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
			cout << "\nSecond array`s element-->"; cin >> schoose;
			if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) {
				cout << "Invalid input\n\n"; break;
			}
			arr[fchoose - 1] = newarr[schoose - 1];
		break;

		case 7:
			system("cls");

			cout << "First array: \n";
			arr->print(arr, size);
			cout << endl;
			cout << "Second array: \n";
			newarr->print(newarr, size);
			cout << endl;

			while (button != 0) {
				cout << "Compere two items of arrays: \n"
					<< "1 - Print and clear\n"
					<< "2 - by == \n"
					<< "3 - by != \n"
					<< "4 - by > \n"
					<< "5 - by < \n"
					<< "6 - by >= \n"
					<< "7 - by <= \n"
					<< "0 - Back \n"
					<< "--> "; cin >> button;
				switch (button)
				{
				case 1:
					system("cls");
					cout << "First array: \n";
					arr->print(arr, size);
					cout << endl;
					cout << "Second array: \n";
					newarr->print(newarr, size);
					cout << endl;
				break;
				case 2:
					cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
					cout << "\nSecond array`s element-->"; cin >> schoose;
					if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) {cout << "\nInvalid input!\n\n"; break;}
					cout << "Your chosen comparison \"=\" \n";
					if (arr[fchoose - 1] == newarr[schoose - 1])
						cout << "\n\t True \t\n\n";
					else 
						cout << "\n\t False \t\n\n";
				break;
				case 3:
					cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
					cout << "\nSecond array`s element-->"; cin >> schoose;
					if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) { cout << "\nInvalid input!\n\n"; break; }
					cout << "\nYour chosen comparison \"!=\" \n";
					if (arr[fchoose - 1] != newarr[schoose - 1])
						cout << "\n\t True \t\n\n";
					else
						cout << "\n\t False \t\n\n";
					break;
				case 4:
					cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
					cout << "\nSecond array`s element-->"; cin >> schoose;
					if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) { cout << "\nInvalid input!\n\n"; break; }
					cout << "\nYour chosen comparison \">\" \n";
					if (arr[fchoose - 1] > newarr[schoose - 1])
						cout << "\n\t True \t\n\n";
					else
						cout << "\n\t False \t\n\n";
					break;
				case 5:
					cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
					cout << "\nSecond array`s element-->"; cin >> schoose;
					if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) { cout << "\nInvalid input!\n\n"; break; }
					cout << "\nYour chosen comparison \"<\" \n";
					if (arr[fchoose - 1] < newarr[schoose - 1])
						cout << "\n\t True \t\n\n";
					else
						cout << "\n\t False \t\n\n";
					break;
				case 6:
					cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
					cout << "\nSecond array`s element-->"; cin >> schoose;
					if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) { cout << "\nInvalid input!\n\n"; break; }
					cout << "\nYour chosen comparison \">=\" \n";
					if (arr[fchoose - 1] >= newarr[schoose - 1])
						cout << "\n\t True \t\n\n";
					else
						cout << "\n\t False \t\n\n";
					break;
				case 7:
					cout << "Choose one lemenet from first array and than from second \n\nFirst array`s element -->"; cin >> fchoose;
					cout << "\nSecond array`s element-->"; cin >> schoose;
					if (fchoose - 1 > size or fchoose - 1 < 0 or schoose - 1 > size or schoose - 1 < 0) { cout << "\nInvalid input!\n\n"; break; }
					cout << "\nYour chosen comparison \"<=\" \n";
					if (arr[fchoose - 1] <= newarr[schoose - 1])
						cout << "\n\t True \t\n\n";
					else
						cout << "\n\t False \t\n\n";
					break;
				case 0:
					system("cls");
				break;
				default:
					break;
				}

			}

		break;

		case 8:
			cout << "\nSelect the array to which this operation will be applied \n1 - First array \n2 - Second array \n--> "; cin >> button;
			if (button != 1 and button != 2) { cout << "\nInvalid input!\n\n"; break;}

			if (button == 1)
				arr->task(arr, size);
			else if (button == 2)
				newarr->task(newarr, size);

			cout << "First array: \n";
			arr->print(arr, size);
			cout << endl;
			cout << "Second array: \n";
			newarr->print(newarr, size);
			cout << endl;

		break;

		case 0:
			system("cls");
			exit(0);
		break;

		default:
			break;
		}
	}
	
}



void Fraction::print(Fraction arr[], int size)
{
	for (size_t i = 0; i < size; i++)
		cout << i+1 << ") " << arr[i] << endl;
}




Fraction& operator+(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result( (ob1.denominator * ob2.numerator) + (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
	return result;
}

Fraction& operator-(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result((ob1.denominator * ob2.numerator) - (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
	return result;
}

Fraction& operator/(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result(ob2.numerator * ob1.denominator, ob2.denominator * ob1.numerator);
	return result;
}

Fraction& operator*(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result(ob1.denominator * ob2.denominator, ob1.numerator * ob2.numerator);
	return result;
}

Fraction& Fraction::operator=(const Fraction& ob)
{
	denominator = ob.denominator; numerator = ob.numerator;
	return *this;
}

void Fraction::task(Fraction arr[], int& size)
{
	for (int i = 0; i < size; i++)
		if ((i+1) % 2 == 0 and i - 1 >= 0) 
			arr[i] = arr[i] + arr[i - 1];
}









