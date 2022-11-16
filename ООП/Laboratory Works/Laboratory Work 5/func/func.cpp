#include "pch.h" 
#include "func.h"

string dataNames[32] = { "Ethan", "Josh", "Sam", "Tom", "Bruse", "Michael", "Diego", "Adrian", "Brian", "Carl", "Caleb", "Charles", "Daniel", "Derek", "Elliot", "Kuel",
						   "Sophia", "Amelia", "Ella", "Chloe", "Penelope", "Emma", "Ava", "Isabella", "Elizabath", "Ginna", "Layla", "Zoey", "Olivia", "Sarah", "Rachel", "Emily" };
string dataSecondNames[50] = { "Smith", "Johnson", "Williams", "Jones", "Brown","Davis","Miller", "Wilson","Moore","Taylor", "Anderson","Thomas","Jackson", "White","Harris","Martin", "Thompson","Garcia","Martinez", "Robinson","Clark","Rodriguez", "Lewis","Lee","Walker", "Hall","Allen","Young", "Hernandez","King","Wright", "Lopez","Hill","Scott", "Green","Adams","Baker",
	"Gonzalez", "Nelson","Carter","Mitchell", "Perez","Roberts","Turner", "Phillips","Campbell","Parker", "Evans","Edwards","Collins" };

// main class


void Main::main()
{
	short int count, button, checker;
	Abiturient* head = NULL, * tail = NULL;

	while (true) {
		cout << "Work with data - 1 \nClear data - 4 \nExit - 0 \n-->"; cin >> button;
		if (cin.fail()) {
			system("cls");
			cin.clear();
			cin.ignore(32767, '\n');
			cout << " \t\t\tIncorrect input! ERROR! " << endl;
			continue;
		}
		switch (button)
		{
		case 1:
			while (button != 0) {
				system("cls");
				if (head == NULL) {
					cout << "How long you list could be? \n---> "; cin >> count;
					if (cin.fail()) {
						system("cls");
						cin.clear();
						cin.ignore(32767, '\n');
						cout << " \t\t\tIncorrect input! ERROR! " << endl;
						continue;
					}
					CreateList(count, &head, tail);
					system("cls");
				}

				table_header();
				PrintList(head);

				cout << "Find students with unsatisfactory grades - 1\n" <<
					"Find students by grades - 2\n" <<
					"Find students whith highest grades and almost satisfactory - 3\n" <<
					"Delete one data - 4\n" <<
					"Add new data - 5\n" <<
					"Sort - 6\n" <<
					"Back - 0\n" <<
					"-->";
				cin >> button;
				if (cin.fail()) {
					system("cls");
					cin.clear();
					cin.ignore(32767, '\n');
					cout << " \t\t\tIncorrect input! ERROR! " << endl;
					continue;
					system("pause");
				}

				switch (button)
				{
				case 1:
					system("cls");
					unsatisfactory(&head);
					system("pause");
					break;
				case 2:
					system("cls");
					cout << "Input grade limit \n-->"; cin >> checker;
					if (cin.fail()) {
						system("cls");
						cin.clear();
						cin.ignore(32767, '\n');
						cout << " \t\t\tIncorrect input! ERROR! " << endl;
						system("pause");
						continue;
					}
					byGrade(&head, checker);
					system("pause");
					break;
				case 3:
					system("cls");
					hightesGradeandHalf(&head);
					system("pause");
					break;
				case 4:
					system("cls");
					cout << "Input number data \n-->"; cin >> checker;
					if (cin.fail()) {
						system("cls");
						cin.clear();
						cin.ignore(32767, '\n');
						cout << " \t\t\tIncorrect input! ERROR! " << endl;
						system("pause");
						continue;
					}
					DeleteInList(&head, &tail, checker);
					break;
				case 5:
					system("cls");
					cout << "Input number data \n-->"; cin >> checker;
					if (cin.fail()) {
						system("cls");
						cin.clear();
						cin.ignore(32767, '\n');
						cout << " \t\t\tIncorrect input! ERROR! " << endl;
						system("pause");
						continue;
					}
					Insert(&head, &tail, checker);
					break;
				case 6:
					system("cls");
					cout << "Sort by name - 1 \nSort by grades - 2 \nBack - 0 \n-->"; cin >> button;
					if (cin.fail()) {
						system("cls");
						cin.clear();
						cin.ignore(32767, '\n');
						cout << " \t\t\tIncorrect input! ERROR! " << endl;
						system("pause");
						continue;
					}
					switch (button)
					{
					case 1:
						Sort(&head, button);
						table_header();
						PrintList(head);
						system("pause");
						break;
					case 2:
						Sort(&head, button);
						table_header();
						PrintList(head);
						system("pause");
						break;
					case 0:
						system("cls");
						break;
					default:
						break;
					}
					break;
				case 0:
					system("cls");
					break;
				default:
					break;
				}

			}
			break;
			/*case 2:
				system("cls");
				SaveInFileList(head);
				break;
			case 3:
				system("cls");
				LoadFromFileList(&head, &tail);
				break;*/
		case 4:
			system("cls");
			if (DcheckNULL(head) != 0)
				FreeList(&head);
			break;
		case 0:
			system("cls");
			FreeList(&head);
			exit(0);
			break;
		default:
			break;
		}

	}

}


//Abiturient::Abiturient()
//{
//	this->FullName = "User invalid";
//	this->address = "None";
//	this->grade = -1;
//
//}



//set methods
void Abiturient::setterAll(const string& FullName, const string& address, const short int& grade)
{
	this->FullName = FullName;
	this->address = address;
	this->grade = grade;

}


// get methods
string Abiturient::getterFullname() const { return this->FullName; }

string Abiturient::getterAddress() const { return this->address; }

short int Abiturient::getterGrade() const { return this->grade; }


// show method
void Abiturient::show()
{
	cout << "|" << setw(22) << this->FullName << setw(4) << "|" << setw(32) << this->address << setw(4) << "|" << setw(4) << this->grade << setw(4) << "|";
	cout << "\n ---------------------------------------------------------------------\n";
}

///////////////////////////////////////////////////////////////////////
/////////////////////  Main tasks  ///////////////////////////////////
/////////////////////////////////////////////////////////////////////

void Main::unsatisfactory(Abiturient** head)
{
	int count = 0;
	Abiturient* current = *head;
	Abiturient* unsatisfactoryGrade = new Abiturient[MAXSIZE];


	if (DcheckNULL((*head)) == 0) { return; }
	else {
		while (current) {
			if (current->getterGrade() < 60) {
				unsatisfactoryGrade[count].setterAll(current->getterFullname(), current->getterAddress(), current->getterGrade());
				count++;
			}
			current = current->next;
		}
	}

	if (count != 0) {
		cout << "\t Students with unsatisfactory grades: " << count << endl;
		table_header();
		for (size_t i = 0; i < count; i++) {
			unsatisfactoryGrade[i].show();
		}
	}
	else
		cout << "\tStudents haven`t been found!\n";


	delete[] unsatisfactoryGrade; unsatisfactoryGrade = NULL;
}

void Main::byGrade(Abiturient** head, short int setted)
{
	int count = 0;
	Abiturient* current = *head;
	Abiturient* byGrade = new Abiturient[MAXSIZE];


	if (DcheckNULL((*head)) == 0) { return; }
	else {
		while (current) {
			if (current->getterGrade() > setted) {
				byGrade[count].setterAll(current->getterFullname(), current->getterAddress(), current->getterGrade());
				count++;
			}
			current = current->next;
		}
	}

	if (count != 0) {
		cout << "\t Students with grades higher " << setted << ": " << count << endl;
		table_header();
		for (size_t i = 0; i < count; i++) {
			byGrade[i].show();
		}
	}
	else
		cout << "\tStudents haven`t been found!\n";


	delete[] byGrade; byGrade = NULL;
}


void Main::hightesGradeandHalf(Abiturient** head)
{
	int count = 0;
	Abiturient* current = *head;
	Abiturient* byGrade = new Abiturient[MAXSIZE];


	if (DcheckNULL((*head)) == 0) { return; }
	else {
		while (current) {
			if (current->getterGrade() > 89 or (current->getterGrade() > 34 and current->getterGrade() < 60)) {
				byGrade[count].setterAll(current->getterFullname(), current->getterAddress(), current->getterGrade());
				count++;
			}
			current = current->next;
		}
	}


	if (count != 0) {

		cout << "\tStudents " << ": " << count << endl;
		table_header();
		for (size_t i = 0; i < count; i++) {
			byGrade[i].show();
		}

		if (count != 1) {
			short int choose = -1;
			Abiturient* chosen = new Abiturient[count];
			short int flag = 0;
			short index = 0;
			current = *head;
			while (choose != 0 and flag != count) {
				cout << "Choose the studenet by number (0-stop) --> "; cin >> choose;
				if (choose > count) {
					cout << "\tFalse input, try again!\n";
					continue;
				}
				if (choose != 0) { flag++; };
				for (size_t i = 0; i < choose; i++) {
					if (i == choose - 1) {
						chosen[index] = byGrade[choose - 1];
						index++;
					}
					current = current->next;
				}
			}

			if (flag != 0) {
				table_header();
				for (size_t i = 0; i < flag; i++) {
					chosen[i].show();
				}
			}
			else
				cout << "\tStudents haven`t been chosen!\n";

			delete[] chosen; chosen = NULL;
		}
		else {
			cout << "You shouldn`t to choose the one student!\n";
		}


	}
	else
		cout << "\tStudents haven`t been found!\n";

	delete[] byGrade; byGrade = NULL;

}






void Main::table_header()
{
	cout << "\n ---------------------------------------------------------------------\n";
	cout << "|" << setw(17) << "Full Name" << setw(9) << "|" << setw(23) << "Email" << setw(13) << "|" << setw(6) << "Grade" << setw(2) << "|";
	cout << "\n ---------------------------------------------------------------------\n";
}






///////////////////////////////////////////////////////////////////////
///////////////////// Doubly Node  ///////////////////////////////////
/////////////////////////////////////////////////////////////////////


void Main::CreateList(short int count, Abiturient** head, Abiturient* tail)
{
	string FullName, buffer, address; short int grade;
	if (count > 0) {
		(*head) = new Abiturient;
		FullName = dataNames[rand()%32];
		address += FullName;
		FullName += " ";
		buffer = dataSecondNames[rand() % 32];
		FullName += buffer;
		address += buffer += "@gmail.com";
		grade = rand() % 101;
		(*head)->setterAll(FullName, address, grade);
		(*head)->prev = tail;
		(*head)->next = NULL;
		CreateList(count - 1, &((*head)->next), (*head));
	}
	else (*head) = NULL;

	size = count;
}

void Main::PrintList(Abiturient* head) {
	if (head != NULL) {
		head->show();
		PrintList(head->next);
	}
	else cout << endl << endl;
}

void Main::Insert(Abiturient** head, Abiturient** tail, int pos) {

	Abiturient* temp = new Abiturient;

	if (pos == 0) {
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
		temp->prev = NULL;
	}
	else {
		Abiturient* current = *head;
		for (size_t i = 0; i < pos - 1; i++)
			current = current->next;
		if (current->next == NULL) {
			current->next = temp;
			temp->prev = *tail;
			temp->next = NULL;
			*tail = temp;
		}
		else {
			temp->next = current->next;
			current->next = temp;
			temp->next->prev = temp;
			temp->prev = current;
		}
	}
	string FullName, buffer, address; short int grade;
	FullName = dataNames[rand() % 32];
	address += FullName;
	FullName += " ";
	buffer = dataSecondNames[rand() % 32];
	FullName += buffer;
	address += buffer += "@gmail.com";
	grade = rand() % 101;
	temp->setterAll(FullName, address, grade);

}


void Main::DeleteInList(Abiturient** head, Abiturient** tail, int pos) {

	Abiturient* current = *head;

	if (pos == 0) {
		*head = (*head)->next;
		(*head)->prev = NULL;
		delete current;
	}
	else {
		for (size_t i = 0; i < pos - 1; i++)
			current = current->next;
		Abiturient* temp = current->next;
		if (temp->next == NULL) {
			current->next = NULL;
			*tail = current;
		}
		else {
			current->next = temp->next;
			temp->next->prev = current;
		}
		delete temp;
	}
}


bool Main::DcheckNULL(Abiturient* head) { // cheking on empty 
	if (head == NULL) {
		cout << "List is empty." << endl;
		return 0;
	}
	return 1;
}


void Main::FreeList(Abiturient** head) { // clean list
	Abiturient* current = *head;
	while (current) {
		*head = (*head)->next;
		free(current);
		current = *head;
	}
}


void Sort(Abiturient** head, short int set) {
	Abiturient* left = *head;
	Abiturient* right = (*head)->next;
	Abiturient* temp = new Abiturient;
	// preset switch
	switch (set) {

	case 1: // sort by name
		while (left->next) {

			while (right) {

				if ((left->FullName.compare(right->FullName) > 0)) {

					temp->FullName = left->FullName;
					left->FullName = right->FullName;
					right->FullName = temp->FullName;

				}
				right = right->next;

			}

			left = left->next;
			right = left->next;
		}
		break;
	case 2: // sort by grades
		while (left->next) {

			while (right) {

				if (right->grade > left->grade) {

					temp->grade = right->grade;
					right->grade = right->grade;
					left->grade = temp->grade;

				}
				right = right->next;

			}

			left = left->next;
			right = left->next;
		}
		break;
	default:
		//system("cls");
		break;
	}
}

void complite()
{
	srand(time(NULL)); Main main; main.main();
}




