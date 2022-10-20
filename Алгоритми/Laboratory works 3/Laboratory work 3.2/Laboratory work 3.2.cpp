#include <iostream>
#include<iomanip>
#include <string>
#include<Windows.h>
#include<fstream>

using namespace std;
struct Data {

	string FullName;
	int IDpass;
	int age;

};
// data structure that represents a node in the tree
struct Node {
	Data data; // holds the key
	Node* parent; // pointer to the parent
	Node* left; // pointer to left child
	Node* right; // pointer to right child
	int color; // 1 -> Red, 0 -> Black
};

typedef Node* NodePtr;

// class RBTree implements the operations in Red Black Tree
class RBTree {
private:
	NodePtr root;//корінці
	NodePtr TNULL;//листки

	// initializes the nodes with appropirate values
	// all the pointers are set to point to the null pointer
	void initializeNULLNode(NodePtr node, NodePtr parent) {
		node->data.IDpass = 0;
		node->parent = parent;
		node->left = nullptr;
		node->right = nullptr;
		node->color = 0;
	}

	void preOrderHelper(NodePtr node) {
		if (node != TNULL) {
			cout << node->data.FullName << " ";
			cout << node->data.IDpass << " ";
			cout << node->data.age << " ";
			preOrderHelper(node->left);
			preOrderHelper(node->right);
		}
	}

	void inOrderHelper(NodePtr node) {
		if (node != TNULL) {
			inOrderHelper(node->left);
			cout << node->data.FullName << " ";
			cout << node->data.IDpass << " ";
			cout << node->data.age << " ";
			inOrderHelper(node->right);
		}
	}

	void postOrderHelper(NodePtr node) {
		if (node != TNULL) {
			postOrderHelper(node->left);
			postOrderHelper(node->right);
			cout << node->data.FullName << " ";
			cout << node->data.IDpass << " ";
			cout << node->data.age << " ";
		}
	}

	NodePtr searchTreeHelper(NodePtr node, int key) {
		if (node == TNULL || key == node->data.IDpass) {
			return node;
		}

		if (key < node->data.IDpass) {
			return searchTreeHelper(node->left, key);
		}
		return searchTreeHelper(node->right, key);
	}

	// fix the rb tree modified by the delete operation
	void fixDelete(NodePtr x) {
		NodePtr s;
		while (x != root && x->color == 0) {
			if (x == x->parent->left) {
				s = x->parent->right;
				if (s->color == 1) {
					// case 3.1
					s->color = 0;
					x->parent->color = 1;
					leftRotate(x->parent);
					s = x->parent->right;
				}

				if (s->left->color == 0 && s->right->color == 0) {
					// case 3.2
					s->color = 1;
					x = x->parent;
				}
				else {
					if (s->right->color == 0) {
						// case 3.3
						s->left->color = 0;
						s->color = 1;
						rightRotate(s);
						s = x->parent->right;
					}

					// case 3.4
					s->color = x->parent->color;
					x->parent->color = 0;
					s->right->color = 0;
					leftRotate(x->parent);
					x = root;
				}
			}
			else {
				s = x->parent->left;
				if (s->color == 1) {
					// case 3.1
					s->color = 0;
					x->parent->color = 1;
					rightRotate(x->parent);
					s = x->parent->left;
				}

				if (s->left->color == 0 && s->right->color == 0) {
					// case 3.2
					s->color = 1;
					x = x->parent;
				}
				else {
					if (s->left->color == 0) {
						// case 3.3
						s->right->color = 0;
						s->color = 1;
						leftRotate(s);
						s = x->parent->left;
					}

					// case 3.4
					s->color = x->parent->color;
					x->parent->color = 0;
					s->left->color = 0;
					rightRotate(x->parent);
					x = root;
				}
			}
		}
		x->color = 0;
	}


	void rbTransplant(NodePtr u, NodePtr v) {
		if (u->parent == nullptr) {
			root = v;
		}
		else if (u == u->parent->left) {
			u->parent->left = v;
		}
		else {
			u->parent->right = v;
		}
		v->parent = u->parent;
	}

	void deleteNodeHelper(NodePtr node, int key) {
		// find the node containing key
		NodePtr z = TNULL;
		NodePtr x, y;
		while (node != TNULL) {
			if (node->data.IDpass == key) {
				z = node;
			}

			if (node->data.IDpass <= key) {
				node = node->right;
			}
			else {
				node = node->left;
			}
		}

		if (z == TNULL) {
			cout << "Couldn't find key in the tree" << endl;
			return;
		}

		y = z;
		int y_original_color = y->color;
		if (z->left == TNULL) {
			x = z->right;
			rbTransplant(z, z->right);
		}
		else if (z->right == TNULL) {
			x = z->left;
			rbTransplant(z, z->left);
		}
		else {
			y = minimum(z->right);
			y_original_color = y->color;
			x = y->right;
			if (y->parent == z) {
				x->parent = y;
			}
			else {
				rbTransplant(y, y->right);
				y->right = z->right;
				y->right->parent = y;
			}

			rbTransplant(z, y);
			y->left = z->left;
			y->left->parent = y;
			y->color = z->color;
		}
		delete z;
		if (y_original_color == 0) {
			fixDelete(x);
		}
	}

	// fix the red-black tree
	void fixInsert(NodePtr k) {
		NodePtr u;
		while (k->parent->color == 1) {
			if (k->parent == k->parent->parent->right) {
				u = k->parent->parent->left; // uncle
				if (u->color == 1) {
					// case 3.1
					u->color = 0;
					k->parent->color = 0;
					k->parent->parent->color = 1;
					k = k->parent->parent;
				}
				else {
					if (k == k->parent->left) {
						// case 3.2.2
						k = k->parent;
						rightRotate(k);
					}
					// case 3.2.1
					k->parent->color = 0;
					k->parent->parent->color = 1;
					leftRotate(k->parent->parent);
				}
			}
			else {
				u = k->parent->parent->right; // uncle

				if (u->color == 1) {
					// mirror case 3.1
					u->color = 0;
					k->parent->color = 0;
					k->parent->parent->color = 1;
					k = k->parent->parent;
				}
				else {
					if (k == k->parent->right) {
						// mirror case 3.2.2
						k = k->parent;
						leftRotate(k);
					}
					// mirror case 3.2.1
					k->parent->color = 0;
					k->parent->parent->color = 1;
					rightRotate(k->parent->parent);
				}
			}
			if (k == root) {
				break;
			}
		}
		root->color = 0;
	}

	void printHelper(NodePtr root, string indent, bool last) {
		// print the tree structure on the screen
		if (root != TNULL) {
			cout << indent;
			if (last) {
				cout << "R----";
				indent += "     ";
			}
			else {
				cout << "L----";
				indent += "|    ";
			}

			string sColor = (root->color) == 1 ? "RED" : "BLACK";
			cout << root->data.FullName << " " << root->data.IDpass << " " << root->data.age << "(" << sColor << ")" << endl;
			printHelper(root->left, indent, false);
			printHelper(root->right, indent, true);
		}
		// cout<<root->left->data<<endl;
	}
	void printHelper_write_file(NodePtr root, string indent, bool last) {
		ofstream fout;
		fout.open("data.txt", ios_base::app);
		if (root != TNULL) {
			fout << indent;
			if (last) {
				//fout << "R----";
				//indent += "     ";
			}
			else {
				//fout << "L----";
				//indent += "|    ";
			}

			//string sColor = (root->color) == 1 ? "RED" : "BLACK";
			//fout << root->data.FullName << " " << root->data.IDpass << " " << root->data.age << "(" << sColor << ")" << endl;
			fout << root->data.FullName << " " << root->data.IDpass << " " << root->data.age << endl;
			printHelper_write_file(root->left, indent, false);
			printHelper_write_file(root->right, indent, true);
		}
		fout.close();
	}

public:
	RBTree() {
		TNULL = new Node;
		TNULL->color = 0;
		TNULL->left = nullptr;
		TNULL->right = nullptr;
		root = TNULL;
	}

	// Pre-Order traversal
	// Node->Left Subtree->Right Subtree
	void preorder() {
		preOrderHelper(this->root);
	}

	// In-Order traversal
	// Left Subtree -> Node -> Right Subtree
	void inorder() {
		inOrderHelper(this->root);
	}

	// Post-Order traversal
	// Left Subtree -> Right Subtree -> Node
	void postorder() {
		postOrderHelper(this->root);
	}

	// search the tree for the key k
	// and return the corresponding node
	NodePtr searchTree(int k) {
		return searchTreeHelper(this->root, k);
	}

	// find the node with the minimum key
	NodePtr minimum(NodePtr node) {
		while (node->left != TNULL) {
			node = node->left;
		}
		return node;
	}

	// find the node with the maximum key
	NodePtr maximum(NodePtr node) {
		while (node->right != TNULL) {
			node = node->right;
		}
		return node;
	}

	// find the successor of a given node
	NodePtr successor(NodePtr x) {
		// if the right subtree is not null,
		// the successor is the leftmost node in the
		// right subtree
		if (x->right != TNULL) {
			return minimum(x->right);
		}

		// else it is the lowest ancestor of x whose
		// left child is also an ancestor of x.
		NodePtr y = x->parent;
		while (y != TNULL && x == y->right) {
			x = y;
			y = y->parent;
		}
		return y;
	}

	// find the predecessor of a given node
	NodePtr predecessor(NodePtr x) {
		// if the left subtree is not null,
		// the predecessor is the rightmost node in the 
		// left subtree
		if (x->left != TNULL) {
			return maximum(x->left);
		}

		NodePtr y = x->parent;
		while (y != TNULL && x == y->left) {
			x = y;
			y = y->parent;
		}

		return y;
	}

	// rotate left at node x
	void leftRotate(NodePtr x) {
		NodePtr y = x->right;
		x->right = y->left;
		if (y->left != TNULL) {
			y->left->parent = x;
		}
		y->parent = x->parent;
		if (x->parent == nullptr) {
			this->root = y;
		}
		else if (x == x->parent->left) {
			x->parent->left = y;
		}
		else {
			x->parent->right = y;
		}
		y->left = x;
		x->parent = y;
	}

	// rotate right at node x
	void rightRotate(NodePtr x) {
		NodePtr y = x->left;
		x->left = y->right;
		if (y->right != TNULL) {
			y->right->parent = x;
		}
		y->parent = x->parent;
		if (x->parent == nullptr) {
			this->root = y;
		}
		else if (x == x->parent->right) {
			x->parent->right = y;
		}
		else {
			x->parent->left = y;
		}
		y->right = x;
		x->parent = y;
	}

	// insert the key to the tree in its appropriate position
	// and fix the tree
	void insert(int key, string name, double age) {
		// Ordinary Binary Search Insertion
		NodePtr node = new Node;
		node->parent = nullptr;
		node->data.IDpass = key;
		node->data.FullName = name;
		node->data.age = age;
		node->left = TNULL;
		node->right = TNULL;
		node->color = 1; // new node must be red
		NodePtr y = nullptr;
		NodePtr x = this->root;

		while (x != TNULL) {
			y = x;
			if (node->data.IDpass < x->data.IDpass) {
				x = x->left;
			}
			else {
				x = x->right;
			}
		}

		// y is parent of x
		node->parent = y;
		if (y == nullptr) {
			root = node;
		}
		else if (node->data.IDpass < y->data.IDpass) {
			y->left = node;
		}
		else {
			y->right = node;
		}

		// if new node is a root node, simply return
		if (node->parent == nullptr) {
			node->color = 0;
			return;
		}

		// if the grandparent is null, simply return
		if (node->parent->parent == nullptr) {
			return;
		}

		// Fix the tree
		fixInsert(node);
	}

	NodePtr getRoot() {
		return this->root;
	}

	// delete the node from the tree
	void deleteNode(int data) {
		deleteNodeHelper(this->root, data);
	}

	// print the tree structure on the screen
	void prettyPrint() {
		if (root) {
			printHelper(this->root, "", true);
		}
	}
	void wtite_trea_in_file() {
		if (root) {
			printHelper_write_file(this->root, "", true);
		}
	}

};

int main() {

	RBTree bst;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream fin;

	string FullName = "Person"; int IDpass, age;
	int number;
	do {

		cout << "1 - Створити чевоно-чорне дерево вводом через консоль" << endl;
		cout << "2 - Записати червоно-чорне дерево з файлу" << endl;
		cout << "3 - Роздрукувати червоно-чорне дерево в консоль" << endl;
		cout << "4 - Додати елемент" << endl;
		cout << "5 - Видалити елемент з дерева (за віком)" << endl;
		cout << "6 - Записати червоно-чорне дерево в файл" << endl;
		cout << "0 - Завершити роботу програми" << endl;
		cout << "---> ";
		cin >> number;
		switch (number)
		{
		case 1: {
			int c;
			cout << "Введіть кількість елементів дерева: ";
			cin >> c;
			/*int c = rand()%(max-min)+min;*/
			Data l;
			for (int i = 0; i < c; i++) {
				FullName += to_string(rand() % 10);
				IDpass = rand();
				age = rand() % 60 + 20;
				l.FullName = FullName; l.IDpass = IDpass; l.age = age;
				bst.insert(l.IDpass, l.FullName, l.age);
				FullName = "Person";
			}
			break;}
		case 2: {
			int count = 0;
			string s;
			fin.open("data.txt");
			while (!fin.eof()) {
				fin >> s;
				count++;
			}
			//cout << count;
			count = count / 3;
			fin.close();
			Data* data = new Data[count];
			fin.open("data.txt");
			for (int i = 0; i < count; i++) {
				FullName = " ";
				IDpass = 0;
				age = 0;
				fin >> FullName;
				fin >> IDpass;
				fin >> age;
				data[i].FullName = FullName;
				data[i].IDpass = IDpass;
				data[i].age = age;
			}
			fin.close();
			for (int i = 0; i < count; i++) {
				bst.insert(data[i].IDpass, data[i].FullName, data[i].age);
			}

			break; }
		case 3: {
			bst.prettyPrint();
			break;}
		case 4: {
			Data l;
			cout << "Введіть ім'я: ";
			cin >> l.FullName;
			cout << "Введіть ID паспорту: ";
			cin >> l.IDpass;
			cout << "Введіть вік: ";
			cin >> l.age;
			bst.insert(l.IDpass, l.FullName, l.age);
			break; }
		case 5: {
			cout << "Уведіть елемент, який хочете видалити, для цього введіть вік: " << endl;
			cin >> IDpass;
			bst.deleteNode(IDpass);
			break; }
		case 6: {bst.wtite_trea_in_file();
			break; }
		default:
			cout << "Введіть коректне значення" << endl;
			break;
		}
	} while (number != 0);
	system("cls");
	return 0;
}
