
#include "Header.h"




int main()
{
	srand(time(NULL));
	BinaryTree* Root = NULL;

	string FullName = "Person "; int IDpass; short int age;
	for (size_t i = 0; i < 10; i++) {
		FullName += to_string(rand()%10);
		IDpass = rand();
		age = rand() % 60 + 20;
		CreateTree(Root, FullName, IDpass, age);
		FullName = "Person ";
	}

	Print(&Root);
	
	pr_obh(Root);
	cout << "------------------------------------\n";
	zb_obh(Root);
	cout << "------------------------------------\n";
	sm_obh(Root);

	cout << "\nAVARAGE: " << avarageAge(Root);






}


