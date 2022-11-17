#include "pch.h"
#include "cumtrol.h"

void Main::main() {

	int size = 1000;
	Human** List = new  Human * [size];

	cout << "How long you list could be? \n---> "; cin >> size;
	create(List, size);

	int button = -1;
	int choose;
	while (button != 0)
	{
		system("cls");
		cout << "\t\t\t\t\t\t\tList of visitors";
		printList(List, size); cout << endl;
		cout << "Delete data - 1\n" <<
			"Add data - 2\n" <<
			"Rewrite data - 3\n" <<
			"Sort - 4\n" <<
			"Exit - 0\n" <<
			"-->"; cin >> button;
		switch (button)
		{
		case 1:
			cout << "Choose the number of data which will bee deleted --> "; cin >> choose;
			deleteOneElement(List, size, choose);
			system("pause");
			break;
		case 2:
			cout << "Choose the number of data which will bee added --> "; cin >> choose;
			addOneElement(List, size, choose);
			system("pause");
			break;
		case 3:
			cout << "Choose the number of data which will bee rewrited --> "; cin >> choose;
			rewriteOneElement(List, size, choose);
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "Sort by: \nBy First Name - 1 \nBy Second Name - 2 \nBy PassID - 3 \n-->"; cin >> button;
			Sort(List, size, button);
			break;
		default:
			break;
		}

	}

	system("cls");
	delete[] List; List = NULL;

}


void Main::create(Human** List, int size)
{
	for (size_t i = 0; i < size; i++) {
		int Nrand = rand() % 5 + 1;
		if (Nrand == 1)
			List[i] = new FullTime;
		else if (Nrand == 2)
			List[i] = new Extramural;
		else if (Nrand == 3)
			List[i] = new Abiturient;
		else if (Nrand == 4)
			List[i] = new Teacher;
		else if (Nrand == 5)
			List[i] = new Security;
	}
	for (size_t i = 0; i < size; i++) List[i]->setterAll();
}


void Main::printList(Human** List, int size)
{

	cout << "\n --------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "| N " << "|" << setw(15) << "Full Name" << setw(6) << "|" << setw(20) << "Contacts" << setw(14) << "|" << setw(13) << "Access ID" << setw(4) << "  |  " << setw(15) << "Additional information" << setw(3) << "  |  " << setw(11) << "Reason for visiting " << setw(5) << "  |";
	cout << "\n --------------------------------------------------------------------------------------------------------------------------------\n";
	for (size_t i = 0; i < size; i++) {
		cout << "|" << setw(3) << i + 1 << setw(1);
		List[i]->print();
	}

}
void Main::rewriteOneElement(Human** List, int& size, int check)
{
	if (check - 1 < 0 or check - 1 > size) {
		cout << "\t\t\tError!\n"; return;
	}
	Human** NewList = new Human * [1000];
	int Nrand = rand() % 5 + 1;

	for (size_t i = 0; i < size; i++) {
		if (check - 1 != i) {
			NewList[i] = List[i];
		}
		else
		{
			if (Nrand == 1)
				NewList[i] = new FullTime;
			else if (Nrand == 2)
				NewList[i] = new Extramural;
			else if (Nrand == 3)
				NewList[i] = new Abiturient;
			else if (Nrand == 4)
				NewList[i] = new Teacher;
			else if (Nrand == 5)
				NewList[i] = new Security;

			NewList[i]->setterAll();
		}
	}

	for (size_t i = 0; i < size; i++) List[i] = NewList[i];

	delete[] NewList; NewList = NULL;
}

void Main::addOneElement(Human** List, int& size, int check)
{
	if (check - 1 < 0 or check - 1 > size) {
		cout << "\t\t\tError!\n"; return;
	}
	Human** NewList = new Human * [1000];
	int Nrand = rand() % 5 + 1;

	for (size_t i = 0, j = 0; i < size;) {
		if (check - 1 != j) {
			NewList[j] = List[i]; j++;
			i++;
		}
		else
		{
			if (Nrand == 1)
				NewList[j] = new FullTime;
			else if (Nrand == 2)
				NewList[j] = new Extramural;
			else if (Nrand == 3)
				NewList[j] = new Abiturient;
			else if (Nrand == 4)
				NewList[j] = new Teacher;
			else if (Nrand == 5)
				NewList[j] = new Security;

			NewList[j]->setterAll();
			j++;
		}
	}

	size++;
	for (size_t i = 0; i < size; i++) List[i] = NewList[i];

	delete[] NewList; NewList = NULL;

}

void Main::deleteOneElement(Human** List, int& size, int check)
{
	if (check - 1 < 0 or check - 1 > size) {
		cout << "\t\t\tError!\n"; return;
	}
	Human** NewList = new Human * [1000];

	for (size_t i = 0, j = 0; i < size; i++)
		if (check - 1 != i) {
			NewList[j] = List[i]; j++;
		}

	size--;
	for (size_t i = 0; i < size; i++) List[i] = NewList[i];

	delete[] NewList; NewList = NULL;

}


void Main::Sort(Human** List, int size, int button)
{
	if (button == 1) {
		bool changeFlag = true;
		int i = 1;
		while (changeFlag) {
			changeFlag = false;
			for (int j = size - 1; j >= i; j--)
				if (List[j]->getName() > List[j - 1]->getName()) {
					swap(List[j], List[j - 1]);
					changeFlag = true;
				}
			i++;
		}
	}
	else if (button == 2) {
		bool changeFlag = true;
		int i = 1;
		while (changeFlag) {
			changeFlag = false;
			for (int j = size - 1; j >= i; j--)
				if (List[j]->getSecond() > List[j - 1]->getSecond()) {
					swap(List[j], List[j - 1]);
					changeFlag = true;
				}
			i++;
		}
	}
	else if (button == 3) {
		bool changeFlag = true;
		int i = 1;
		while (changeFlag) {
			changeFlag = false;
			for (int j = size - 1; j >= i; j--)
				if (List[j]->getpassID() > List[j - 1]->getpassID()) {
					swap(List[j], List[j - 1]);
					changeFlag = true;
				}
			i++;
		}
	}
	else
		cout << "\n\t ERROR! Incorrect input! \n";


}

CUMTROL_API void cumtrol() { srand(time(NULL));	Main main; main.main(); }
