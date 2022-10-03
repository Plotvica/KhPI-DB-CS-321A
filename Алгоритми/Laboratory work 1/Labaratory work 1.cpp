#include "Header.h"


int main()
{
	srand(time(NULL));

	DList* Dhead = NULL;
	DList* Dtail = NULL;
	Node* head = NULL;
	Node* begin = NULL;
	

	short int count, nodeSelect, index1, index2, pos;

	while (true) {
		cout << "Select the list type: \nSingly linked list - 1 \nDoubly linked list - 2 \nLoad singly linked list - 3 \nLoad doubly linked - 4 \nExit - 0 \n---> "; cin >> nodeSelect;
		inputCheker();
		switch (nodeSelect)
		{
			///////////////////////////////////////////////////////////////////////
			///////////////////// Singly Node  ///////////////////////////////////
			/////////////////////////////////////////////////////////////////////
		case 1:
			while (nodeSelect != 0) {
				system("cls");
				if (head == NULL) {
					cout << "How long you list could be? \n---> "; cin >> count;
					//inputCheker();
					CreateNodeConsole(count, &head);
					system("pause");
					system("cls");
				}
				PrintNode(head);
				cout << "Select the operation: \nAdd new element - 1 \nCount the number of elements - 2 \nSwap two elements - 3 \nDelete one element - 4 \nSplit two list in one - 5 \nClear list - 6 \nPrint list - 7 \nBack - 0 \n---> "; cin >> nodeSelect;
				//inputCheker();
				switch (nodeSelect)
				{
				case 1:
					system("cls");
					PrintNode(head);
					cout << "Select position of chosen element \n---> "; cin >> pos;
					if (pos > CountOfNode(head) + 1) {
						cout << "You`ve get to far!" << endl;
						system("pause");
						system("cls");
						break;
					}
					Insert(head, pos - 1);
					PrintNode(head);
					system("pause");
					system("cls");
					break;

				case 2:
					system("cls");
					cout << "Amount of elements: " << CountOfNode(head) << "\n";
					system("pause");
					system("cls");
					break;

				case 3:
					system("cls");
					PrintNode(head);
					cout << "First index of element: "; cin >> index1;
					cout << "Second index of element: "; cin >> index2;
					SwapNode(index1, index2, head);
					PrintNode(head);
					system("pause");
					system("cls");
					break;

				case 4:
					system("cls");
					PrintNode(head);
					cout << "Select position of chosen element \n---> "; cin >> pos;
					Delete(&head, pos);
					PrintNode(head);
					system("pause");
					system("cls");
					break;
				case 5:
					system("cls");
					cout << "How long you new list could be? \n---> "; cin >> count;
					CreateNodeConsole(count, &begin);
					cout << "Your new list is: ";
					Split(&head, &begin);
					PrintNode(head);
					system("pause");
					system("cls");
					break;

				case 6:
					system("cls");
					FreeNode(&head);
					FreeNode(&begin);
					cout << "List have been cleared\n";
					system("pause");
					system("cls");
					nodeSelect = 0;
					break;
				case 7:
					system("cls");
					cout << "Your list is: ";
					PrintNode(head);
					break;
				case 0:
					system("cls");
					break;

				default:
					system("cls");
					cout << " \t\t\tIncorrect input! ERROR! " << endl;
					break;
				}
			}
			break;


			///////////////////////////////////////////////////////////////////////
			///////////////////// Doubly Node  ///////////////////////////////////
			/////////////////////////////////////////////////////////////////////
		case 2:
			system("cls");
			while (nodeSelect != 0) {
				system("cls");
				if (Dhead == NULL) {
					cout << "How long you list could be? \n---> "; cin >> count;
					//inputCheker();
					CreateDListConsole(count, &Dhead, Dtail);
					system("pause");
					system("cls");
				}
				PrintDlist(Dhead);
				cout << "Select the operation: \nAdd new element - 1 \nCount the number of elements - 2 \nSwap two elements - 3 \nDelete one element - 4 \nClear list - 5 \nPrint list - 6 \nBack - 0 \n---> "; cin >> nodeSelect;
				//inputCheker();
				switch (nodeSelect)
				{ 
				case 1:
					system("cls");
					PrintDlist(Dhead);
					cout << "Select position of chosen element \n---> "; cin >> pos;
					if (pos > CountOfDlist(Dhead) + 1) {
						cout << "You`ve get to far!" << endl;
						system("pause");
						system("cls");
						break;
					}
					DInsert(&Dhead, &Dtail, pos - 1);
					PrintDlist(Dhead);
					system("pause");
					system("cls");
					break;

				case 2:
					system("cls");
					cout << "Amount of elements: " << CountOfDlist(Dhead) << "\n";
					system("pause");
					system("cls");
					break;

				case 3:
					system("cls");
					PrintDlist(Dhead);
					cout << "First index of element: "; cin >> index1;
					cout << "Second index of element: "; cin >> index2;
					SwapDlsit(index1, index2, Dhead);
					PrintDlist(Dhead);
					system("pause");
					system("cls");
					break;

				case 4:
					system("cls");
					PrintDlist(Dhead);
					cout << "Select position of chosen element \n---> "; cin >> pos;
					DeleteDlist(&Dhead, &Dtail, pos-1);
					PrintDlist(Dhead);
					system("pause");
					system("cls");
					break;
				case 5:
					system("cls");
					FreeDlist(&Dhead);
					cout << "List have been cleared\n";
					system("pause");
					system("cls");
					nodeSelect = 0;
					break;
				case 6:
					system("cls");
					cout << "Your list is: ";
					PrintDlist(Dhead);
					break;
				case 0:
					system("cls");
					break;

				default:
					system("cls");
					cout << " \t\t\tIncorrect input! ERROR! " << endl;
					break;
				}
			}


			break;

		case 3:
			system("cls");
			LoadFromFile(&head);
			system("pause");
			break;
		case 4:
			system("cls");
			LoadFromFileDlist(&Dhead, &Dtail);
			system("pause");
			break;

		case 0:
			system("cls");
			FreeDlist(&Dhead);
			FreeNode(&head);
			FreeNode(&begin);
			exit(0);
			break;

		default:
			system("cls");
			cout << " \t\t\tIncorrect input! ERROR! " << endl;
			break;
		}
		
	}



	return 0;
}