#include "Header.h"



int main()
{
    

	system("chcp 1251");

	string firm;
	short int product;
	long int as;
	float part;

	Data obj;

	cout << "type test: "; cin >> firm >> product >> as >> part;
	obj.set(firm, product, as, part);
	//obj.get(firm, product, as, part);
	obj.show();


}


