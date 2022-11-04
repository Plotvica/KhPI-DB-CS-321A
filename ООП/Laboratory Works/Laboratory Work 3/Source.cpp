#include "Header.h"

void Main::main() {

	int size = 1000;
	Abiturient** List = new  Abiturient * [size];

	cout << "How long you list could be? \n---> "; cin >> size;
	create(List, size);

	int button = -1;
	while (button != 0)
	{
		system("cls");
		cout << "\t\t\t\tTest results:";
		printList(List, size); cout << endl;
		cout << "Find students with unsatisfactory grades - 1\n" <<
			"Find students by grades - 2\n" <<
			"Find students whith highest grades and almost satisfactory - 3\n" <<
			"Sort - 4\n" <<
			"Exit - 0\n" <<
			"-->"; cin >> button;
		switch (button)
		{
		case 1:
			unsatisfactory(List, size);
			system("pause");
		break;
		case 2:
			cout << "Enter the minimum grade to been found --> "; cin >> button;
			byGrade(List, size, button);
			system("pause");
		break;
		case 3:
			hightesGradeandHalf(List, size);
			system("pause");
		break;
		case 4:
			system("cls");
			cout << "Sort by: \nBy First Name - 1 \nBy Second Name - 2 \nBy Address - 3 \nBy Grade - 4 \nBy Grupe - 5 \n-->"; cin >> button;
			Sort(List, size, button);
		break;
		default:
			break;
		}

	}
	
	system("cls");
	delete[] List; List = NULL;

}


void Main::create(Abiturient** List, int size)
{
	for (size_t i = 0; i < size; i++) {
		int Nrand = rand() % 6 + 1;
		if(Nrand == 1)
			List[i] = new CSgrupeA;
		else if(Nrand == 2)
			List[i] = new CSgrupeB;
		else if (Nrand == 3)
			List[i] = new CSgrupeC;
		else if (Nrand == 4)
			List[i] = new ENGgrupeA;
		else if (Nrand == 5)
			List[i] = new ENGgrupeB;
		else if (Nrand == 6)
			List[i] = new ENGgrupeC;
	}
	for (size_t i = 0; i < size; i++) List[i]->setterAll();
}


void Main::printList(Abiturient** List, int size)
{
	cout << right;
	cout << "\n -------------------------------------------------------------------------\n";
	cout << "|" << setw(15) << "Full Name" << setw(6) << "|" << setw(16) << "Email" << setw(15) << "|" << setw(6) << "Grade" << setw(3) << "|" << setw(8) << "Grupe" << setw(5) << "|";
	cout << "\n -------------------------------------------------------------------------\n";
	for (size_t i = 0; i < size; i++) List[i]->print();
}


void Main::unsatisfactory(Abiturient** List, int size)
{
	int count = 0;

	for (size_t i = 0; i < size; i++) {
		if (List[i]->getGrade() < 60)
			count++;
	}

	Abiturient** unsatisfactoryList = new Abiturient * [1000];

	for (size_t i = 0, j = 0; i < size; i++){
		if (List[i]->getGrade() < 60) {
			unsatisfactoryList[j] = List[i]; j++;
		}
	}

	if (count != 0) {
		cout << "\t Students with unsatisfactory grades: " << count << endl;
		Sort(unsatisfactoryList, count, 4);
		printList(unsatisfactoryList, count);
	}
	else
		cout << "\tStudents haven`t been found!\n";


	delete[] unsatisfactoryList; unsatisfactoryList = NULL;

}

void Main::byGrade(Abiturient** List, int size, int setted)
{

	int count = 0;

	for (size_t i = 0; i < size; i++) {
		if (List[i]->getGrade() >= setted)
			count++;
	}

	Abiturient** unsatisfactoryList = new Abiturient * [1000];

	for (size_t i = 0, j = 0; i < size; i++) {
		if (List[i]->getGrade() >= setted) {
			unsatisfactoryList[j] = List[i]; j++;
		}
	}

	if (count != 0) {
		cout << "\t Students with grades higher " << setted << ": " << count << endl;
		Sort(unsatisfactoryList, count, 4);
		printList(unsatisfactoryList, count);
	}
	else
		cout << "\tStudents haven`t been found!\n";


	delete[] unsatisfactoryList; unsatisfactoryList = NULL;



}
void Main::hightesGradeandHalf(Abiturient** List, int size)
{
	int count = 0;

	for (size_t i = 0; i < size; i++) {
		if (List[i]->getGrade() > 89 or (List[i]->getGrade() > 34 and List[i]->getGrade() < 60))
			count++;
	}

	Abiturient** unsatisfactoryList = new Abiturient * [1000];

	for (size_t i = 0, j = 0; i < size; i++) {
		if (List[i]->getGrade() > 89 or (List[i]->getGrade() > 34 and  List[i]->getGrade() < 60)) {
			unsatisfactoryList[j] = List[i]; j++;
		}
	}

	if (count != 0) {
		cout << "\t Students with hightes grade and almost satisfactory" << ": " << count << endl;
		Sort(unsatisfactoryList, count, 5);
		printList(unsatisfactoryList, count);
	}
	else
		cout << "\tStudents haven`t been found!\n";


	delete[] unsatisfactoryList; unsatisfactoryList = NULL;

}

void Main::Sort(Abiturient** List, int size, int button)
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
				if (List[j]->getAddress() > List[j - 1]->getAddress()) {
					swap(List[j], List[j - 1]);
					changeFlag = true;
				}
			i++;
		}
	}
	else if (button == 4) {
		bool changeFlag = true;
		int i = 1;
		while (changeFlag) {
			changeFlag = false;
			for (int j = size - 1; j >= i; j--)
				if (List[j]->getGrade() > List[j - 1]->getGrade()) {
					swap(List[j], List[j - 1]);
					changeFlag = true;
				}
			i++;
		}
	}
	else if (button == 5) {
		bool changeFlag = true;
		int i = 1;
		while (changeFlag) {
			changeFlag = false;
			for (int j = size - 1; j >= i; j--)
				if (List[j]->getGrupe() < List[j - 1]->getGrupe()) {
					swap(List[j], List[j - 1]);
					changeFlag = true;
				}
			i++;
		}
	}
	else
		cout << "\n\t ERROR! Incorrect input! \n";
	
	
}
