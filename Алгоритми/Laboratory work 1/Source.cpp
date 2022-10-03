#include "Header.h"



void inputCheker() {
	if (cin.fail()) {
		system("cls");
		cin.clear();
		cin.ignore(32767, '\n');
		cout << " \t\t\tIncorrect input! ERROR! " << endl;
	}
}


///////////////////////////////////////////////////////////////////////
///////////////////// Doubly Node  ///////////////////////////////////
/////////////////////////////////////////////////////////////////////

void CreateDListConsole(int count, DList** Dhead, DList* Dtail) { // user`s input 
	
	if (count > 0) {
		(*Dhead) = new DList;
		cout << "Input you value \n--->"; cin >> (*Dhead)->number;
		(*Dhead)->prev = Dtail;
		(*Dhead)->next = NULL;
		CreateDListConsole(count - 1, &((*Dhead)->next), (*Dhead));
	}
	else (*Dhead) = NULL;

	
}

void PrintDlist(DList* Dhead) {
	if (Dhead != NULL) {
		cout << Dhead->number << " --> ";
		PrintDlist(Dhead->next);
	}
	else cout << endl << endl;
	SaveInFileDlist(Dhead);
}



void DInsert(DList** Dhead, DList** Dtail, int pos) {

	DList* temp = new DList;


	if (pos == 0) {
		temp->next = *Dhead;
		(*Dhead)->prev = temp;
		*Dhead = temp;
		temp->prev = NULL;
	}
	else {
		DList* current = *Dhead;
		for (size_t i = 0; i < pos - 1; i++)
			current = current->next;
		if (current->next == NULL) {
			current->next = temp;
			temp->prev = *Dtail;
			temp->next = NULL;
			*Dtail = temp;
		}
		else{
			temp->next = current->next;
			current->next = temp;
			temp->next->prev = temp;
			temp->prev = current;
		}
	}

	cout << "Insert: ";
	cin >> temp->number;

}


void DeleteDlist(DList** Dhead, DList** Dtail, int pos) {
	DList* current = *Dhead;
	if (pos == 0) {
		*Dhead = (*Dhead)->next;
		(*Dhead)->prev = NULL;
		delete current;
	}
	else {
		for (size_t i = 0; i < pos-1; i++)
			current = current->next;
		DList* temp = current->next;
		if (temp->next == NULL) {
			current->next = NULL;
			*Dtail = current;
		}
		else {
			current->next = temp->next;
			temp->next->prev = current;
		}
		delete temp;
	}
}

void SwapDlsit(const int value1, const int value2, DList* Dhead ) {

	DList* inex1 = Dhead;
	for (int i = 0; i < value1 - 1; i++)
		inex1 = inex1->next;

	DList* inex2 = Dhead;
	for (int i = 0; i < value2 - 1; i++)
		inex2 = inex2->next;


	const int tmp = inex1->number;
	inex1->number = inex2->number;
	inex2->number = tmp;
}

short int CountOfDlist(DList* Dhead) {

	short int i = 0;
	if (DcheckNULL(Dhead) != 0) {
		for (i = 0; Dhead != 0; i++)
			Dhead = Dhead->next;
		return i;
	}

}

bool DcheckNULL(DList* Dhead) { // cheking on empty 
	if (Dhead == NULL) {
		cout << "List is empty." << endl;
		return 0;
	}
	return 1;
}

void FreeDlist(DList** Dhead) { // clean list
	DList* current = *Dhead;
	while (current) {
		*Dhead = (*Dhead)->next;
		free(current);
		current = *Dhead;
	}
}



void SaveInFileDlist(DList* Dhead) { // writing in data.txt
	DList* current = Dhead;
	FILE* data;
	fopen_s(&data, "dataDlist.txt", "w");
	if (!data) {
		cout << "ERROR. Missing data.txt" << endl;
	}
	while (current) {
		fprintf(data, "\t%d", current->number);
		current = current->next;
	}
	fclose(data);
}


void LoadFromFileDlist(DList** Dhead, DList** Dtail) { // reading from data.txt
	DList* current, * prev;
	prev = current = (*Dhead) = new DList;
	(*Dhead)->prev = NULL;
	FILE* data;
	fopen_s(&data, "dataDlist.txt", "r");
	if (!data) {
		cout << "ERROR. Missing data.txt";
		delete current;
		(*Dhead) = NULL;
		return;
	}
	if (fgetc(data) == EOF) {
		cout << "File is empty.";
		delete current;
		(*Dhead) = nullptr;
		return;
	}
	fscanf(data, "%d", &current->number);
	while (!feof(data)) {
		current = new DList;
		fscanf(data, "%d", &current->number);
		prev->next = current;
		current->prev = prev;
		prev = current;
	}
	current->next = NULL;
	*Dtail = current;
	cout << "File has been successfully saved." << endl;
	fclose(data);
}

///////////////////////////////////////////////////////////////////////
///////////////////// Singly Node  ///////////////////////////////////
/////////////////////////////////////////////////////////////////////
void CreateNodeConsole(int count, Node** head) { // user`s input 

	if (count > 0) {
		(*head) = new Node;
		cout << "Input you value \n--->"; cin >> (*head)->number;
		(*head)->next = NULL;
		CreateNodeConsole(count - 1, &((*head)->next));
	}
}

void Insert(Node* head, int check) {

	Node* temp = new Node;
	if (check == 0 or head == NULL) {
		temp->next = head;
		head = temp;
	}
	else {
		Node* current = head;
		for (size_t i = 0; i < check - 1; i++)
			current = current->next;
		temp->next = current->next;
		current->next = temp;
	}
	cout << "Insert: ";
	cin >> temp->number;
}



void Delete(Node** head, int check) {

	Node* current = *head;
	if (check == 1) {
		(*head) = (*head)->next;
		delete current;
	}
	else {
		for (size_t i = 0; i < check - 1; i++)
			current = current->next;
		Node* temp = current->next;
		current->next = temp->next;
		delete temp;	
	}

}


void Split(Node** head, Node** begin) {
	if (head == NULL or begin == NULL)
		cout << "Some of this list dose not exist!" << endl;
	else {
		Node* tail = (*head);
		for (; tail->next != NULL; tail = tail-> next);
		tail->next = *begin;
		
	}
}


void SwapNode(const int value1, const int value2, Node* head) {

	Node* inex1 = head;
	for (int i = 0; i < value1-1; i++)
		inex1 = inex1->next;


	Node* inex2 = head;
	for (int i= 0; i < value2-1; i++)
		inex2 = inex2->next;


	const int tmp = inex1->number;
	inex1->number = inex2->number;
	inex2->number = tmp;
}



void PrintNode(Node* head) {
	
	if (head != NULL) {
		cout << head->number << " --> ";
		PrintNode(head->next);
	}
	else cout << endl << endl;
	SaveInFileNode(head);
}


short int CountOfNode(Node* head) {
	
	short int i = 0;
	if (checkNULL(head) != 0) {
		for (i = 0; head != 0; i++)
			head = head->next;
		return i;
	}
	
}

void FreeNode(Node** head) { // clean list
	Node* current = *head;
	while (current) {
		*head = (*head)->next;
		free(current);
		current = *head;
	}
}



bool checkNULL(Node* head) { // cheking on empty 
	if (head == NULL) {
		cout << "List is empty." << endl;
		return 0;
	}
	return 1;
}


void SaveInFileNode(Node* head) { // writing in data.txt
	Node* current = head;
	FILE* data;
	fopen_s(&data, "dataNode.txt", "w");
	if (!data) {
		cout << "ERROR. Missing data.txt" << endl;
	}
	while (current) {
		fprintf(data, "\t%d", current->number);
		current = current->next;
	}
	fclose(data);
}


void LoadFromFile(Node** head) { // reading from dataNode.txt

	Node* current, * previous;
	previous = current = (*head) = new Node;
	FILE* data;
	fopen_s(&data, "dataNode.txt", "r");
	if (!data) {
		cout << "ERROR. Missing data.txt";
	}
	if (fgetc(data) == EOF) {
		cout << "File is empty.";
	}
	current = new Node;
	fscanf(data, "%d", &current->number);
	previous->next = current;
	previous = current;
	
	while (!feof(data)) {
		current = new Node;
		fscanf(data, "%d", &current->number);
		previous->next = current;
		previous = current;
	}
	current->next = NULL;
	
	Delete(head, 1);

	cout << "File has been successfully saved." << endl;
	fclose(data);
}
