#include "Header.h"




int main()
{

	Vector ob1(2.5, 5.4, 4.6);
	Vector ob2(6.5, 3.6, 8.1);

	ob1.show(); ob2.show();

	Vector result = ob1 + ob2;
	result.show();
	ob1 += ob1;
	ob1.show();

	float new_result = ob1 * ob2;
	cout << "* " << new_result;



}

