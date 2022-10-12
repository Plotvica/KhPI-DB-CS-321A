#include "Header.h"



// main class

void Main::main()
{
	short int count;
	Abiturient* head = NULL, * tail = NULL;
	cin >> count;
	CreateList(count, &head, tail);

	table_header();
	PrintList(head);


	//byGrade(&head, 50);

	//unsatisfactory(&head);

	hightesGradeandHalf(&head);


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

void Abiturient::setterFullname(const string& FullName) { this->FullName = FullName; }

void Abiturient::setterAddress(const string& address) { this->address = address; }

void Abiturient::setterGrade(const short int& grade) { this->grade = grade; }


// get methods
string Abiturient::getterFullname() const { return this->FullName; }

string Abiturient::getterAddress() const { return this->address; }

short int Abiturient::getterGrade() const { return this->grade; }


// show method
void Abiturient::show()
{
	cout << "|" << setw(17) << this->FullName << setw(9) << "|" << setw(12) << this->address << setw(9) << "|" << setw(4) << this->grade << setw(4) << "|" << endl;
}

///////////////////////////////////////////////////////////////////////
/////////////////////  Main tasks  ///////////////////////////////////
/////////////////////////////////////////////////////////////////////

void Main::unsatisfactory(Abiturient** head)
{
	int count = 0;
	Abiturient* current = *head;
	Abiturient* unsatisfactoryGrade = new Abiturient[MAXSIZE];


	if (DcheckNULL((*head)) == 0) {return;}
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
			unsatisfactoryGrade[i].show(); cout << endl;
		}
	}
	else 
		cout << "\tStudents haven`t been found!\n";
	

	delete[] unsatisfactoryGrade; unsatisfactoryGrade = NULL;
}

void Main::byGrade(Abiturient** head, short int setted ) 
{
	int count = 0;
	Abiturient* current = *head;
	Abiturient* byGrade = new Abiturient[MAXSIZE];


	if (DcheckNULL((*head)) == 0) { return; }
	else {
		while (current) {
			if (current->getterGrade() < setted) {
				byGrade[count].setterAll(current->getterFullname(), current->getterAddress(), current->getterGrade());
				count++;
			}
			current = current->next;
		}
	}

	if (count != 0) {
		cout << "\t Students with grades under " << setted << ": " << count << endl;
		table_header();
		for (size_t i = 0; i < count; i++) {
			byGrade[i].show(); cout << endl;
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
			if (current->getterGrade() > 89 or ( current->getterGrade() > 34 and current->getterGrade() < 60)) {
				byGrade[count].setterAll(current->getterFullname(), current->getterAddress(), current->getterGrade());
				count++;
			}
			current = current->next;
		}
	}


	if (count != 0) {

		cout << "\t TEST " << ": " << count << endl;
		table_header();
		for (size_t i = 0; i < count; i++) {
			byGrade[i].show(); cout << endl;
		}

		if (count != 1) {
			short int choose = -1;
			Abiturient* chosen = new Abiturient[count];
			short int flag = 0;
			short index = 0;
			current = *head;
			while (choose != 0 and flag != count) {
				cout << "Choose the studenet by number (0-stop) --> "; cin >> choose;
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
					chosen[i].show(); cout << endl;
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
	cout << "\n -------------------------------------------------------\n";
	cout << "|" << setw(17) << "Full Name" << setw(9) << "|" << setw(12) << "Email" << setw(9) << "|" << setw(6) << "Grade" << setw(2) << "|";
	cout << "\n -------------------------------------------------------\n";
}






///////////////////////////////////////////////////////////////////////
///////////////////// Doubly Node  ///////////////////////////////////
/////////////////////////////////////////////////////////////////////


void Main::CreateList(short int count, Abiturient** head, Abiturient* tail)
{
	string FullName = "Student ", init, address; short int grade;
	if (count > 0) {
		(*head) = new Abiturient;
		//cout << "Input you value \n--->"; //cin >> FullName >> address >> grade;
		init = rand() % 26 + 65; init += '.'; init += rand() % 26 + 65; init += '.';
		FullName += init;
		address += rand() %26 + 65; address += "@mail.com";
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
		cout << endl;
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
	string FullName = "Student ", init, address; short int grade;
	//cout << "Insert: ";
	//cin >> FullName >> address >> grade;
	init = rand() % 26 + 65; init += '.'; init += rand() % 26 + 65; init += '.';
	FullName += init;
	address += rand() % 26 + 65; address += "@mail.com";
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


