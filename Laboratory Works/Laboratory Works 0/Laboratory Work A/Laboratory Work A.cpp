#include <iostream>
#include <ctime>

using namespace std;


// RECTANGLE - 2 ARGS ARE WORKING, FOR SQUARE JUST ONE!
// just one a for sqr and ab are for rec

 void square (int a = 0, int b = 0) 
 {


 	if ( a > 0 and b == 0) { // a by a

		cout << "Your line is: " << a << endl;
 		a = a * a;
		cout << "Square is: " << a;
 	} 

 	else if (a > 0 and b > 0){ // a by b

		cout << "Your line`s is: " << a << " and " << b << endl;
 		a = a * b;
		cout << "Square: " << a;
 	}

 	// Errors 
 	else if ( a == 0 and b == 0 ){
 		system("cls");
		cout << " \t\t\tIncorrect input! ERROR! " << endl;
 	}

 	else if (a == 0 and b > 0) {
 		system("cls");
		cout << " \t\t\tIncorrect input! ERROR! " << endl;
 	}


 } 



int main()
{
    srand(time(NULL));
	int a, b, button;
	while(true) {

			cout << "\n Example - 1 \n Rectangle - 2 \n Square - 3 \n Exit - 0 \n --->";
			cin >> button;

			a = b = 0;
			
			switch(button) {

				case 1 :
					system("cls");
					cout << "Select a shape \n Rectangle - 1 \n Square - 2 \n Back - 0 \n --->";
						cin >> button;

						if (button == 0) 
							break;
						else if (button == 1){
							a = rand()%10 + 1;
							b = rand()% 10 + 1;
							square(a,b);
						}
						else if (button == 2){
							a = rand() % 10 + 1;
							square(a);	
						}

				break;

				case 2 :

					system("cls");
					cout << "Input the site leight and hight \n ---> "; cin >> a >> b;
					square(a,b);

				break;


				case 3 :

					system("cls");
					cout << "Input the site leight \n ---> "; cin >> a;
					square(a);

				break;


				case 0 : 

					system("cls");
					exit(0);

				break;


				default:

					system("cls");
					cout << " \t\t\tIncorrect input! ERROR! " << endl;

				break;

			}

	}


}


