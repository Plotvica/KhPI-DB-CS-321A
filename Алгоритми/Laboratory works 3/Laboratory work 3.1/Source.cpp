#include "Header.h"



bool Empty(BinaryTree* Root) {
	return (Root == NULL ? true : false);
}

void CreateTree(BinaryTree*& Root, string FullName, int IDpass, short int age) {

	if (!Root) {
		Root = new BinaryTree;
		Root->FullName = FullName;
		Root->IDpass = IDpass;
		Root->age = age;
		Root->LeftBranch = NULL;
		Root->RightBranch = NULL;
		return;
	}
	if (Root->age > age)
		CreateTree(Root->LeftBranch, FullName, IDpass, age);
	else 
		CreateTree(Root->LeftBranch, FullName, IDpass, age);

}


float avarageAge(BinaryTree*& Root){
	static int avarage = 0, flag = 0;
	if (Root != NULL) {
		avarageAge(Root->LeftBranch);
		avarage += Root->age; flag++;
		avarageAge(Root->RightBranch);
	}
	return ((float)avarage / (float)flag);
}


void del(BinaryTree*& Root) {
	if (Root != NULL) {
		del(Root->LeftBranch);
		del(Root->RightBranch);
		delete Root;
		Root = NULL;
	}
}

void pr_obh(BinaryTree*& Root) {
	if (!Root)return;
	cout << " " << Root->FullName << " " << Root->IDpass << " " << Root->age << "\t\n";
	pr_obh(Root->LeftBranch);
	pr_obh(Root->RightBranch);
}
void zb_obh(BinaryTree*& Root) {
	if (!Root)return;
	zb_obh(Root->LeftBranch);
	zb_obh(Root->RightBranch);
	cout << " " << Root->FullName << " " << Root->IDpass << " " << Root->age << "\t\n";
}
void sm_obh(BinaryTree*& Root) {
	if (!Root)return;
	sm_obh(Root->LeftBranch);
	cout << " " << Root->FullName << " " << Root->IDpass << " " << Root->age << "\t\n";
	sm_obh(Root->RightBranch);
}


void del_left_tree(BinaryTree*& Root) {
	if (!Root)return;
	del_left_tree(Root->LeftBranch);
	delete(Root->LeftBranch);
	Root->LeftBranch = NULL;
}
void del_right_tree(BinaryTree*& Root) {
	if (!Root)return;
	del_right_tree(Root->RightBranch);
	delete(Root->RightBranch);
	Root->RightBranch = NULL;
}
void del_branch(BinaryTree*& Root, int age) {
	if (Root != NULL) {
		if (Root->age == age) {
			BinaryTree* ptr = Root;
			if (Root->LeftBranch == NULL && Root->RightBranch == NULL)
				Root = NULL;
			else if (Root->LeftBranch == NULL)
				Root = ptr->RightBranch;
			else if (Root->RightBranch == NULL)
				Root = ptr->LeftBranch;
			else {
				Root = ptr->RightBranch;
				BinaryTree* ptr1;
				ptr1 = Root;
				while (ptr1 != NULL) {
					ptr1 = ptr1->LeftBranch;
					ptr1 = ptr->LeftBranch;
				}
				delete(ptr);
				del_branch(Root, age);
			}
		}
		else {
			del_branch(Root->LeftBranch, age);
			del_branch(Root->RightBranch, age);
		}


	}
}


void Print(BinaryTree** Root, int l) { // test print 
	int i;
	if (*Root != NULL) {
		Print(&((**Root).RightBranch), l + 1);

		for (i = 1; i <= l; i++) cout << "   "; {
			cout << (**Root).FullName << " " << (**Root).IDpass << " " << (**Root).age << endl;
		}
		Print(&((**Root).LeftBranch), l + 1);
	}
}


int tabs = 0;
void write_trea_in_file(BinaryTree* Root) {
	ofstream fout;
	fout.open("data.txt", fstream::app);
	if (!Root) return;
	tabs += 5;
	write_trea_in_file(Root->RightBranch);
	for (int i = 0; i < tabs; i++) fout << " ";
	fout << Root->FullName << endl;
	for (int i = 0; i < tabs; i++) fout << " ";
	fout << Root->IDpass << endl;
	for (int i = 0; i < tabs; i++) fout << " ";
	fout << Root->age << endl;
	write_trea_in_file(Root->LeftBranch);
	tabs -= 5;
	return;
	fout.close();
}




