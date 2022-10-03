
#include "Header.h"

int main()
{

	int	seconds, minutes;
	seconds = 60;
	minutes = 1;
	TIMER K1{seconds};
	K1.print();
	TIMER K2{ seconds, minutes};
	K2.print();
	TIMER K3 = K1;
	K3.print();
	K3 = K2;
	K3.print();
	
	






}
