#pragma once
#include <iostream>
#include <string>

using namespace std;


struct BinaryTree
{
	string FullName;
	int IDpass;
	short int age;

};

struct Branch {
	BinaryTree data;
	Branch* LeftBranch;
	Branch* RightBranch;
};