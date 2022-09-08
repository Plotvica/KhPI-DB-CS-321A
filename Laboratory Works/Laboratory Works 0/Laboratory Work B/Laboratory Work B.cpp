#include <iostream>
#include <ctime>
#include <bits/stdc++.h>

using namespace std;




void pointer(int *a, int *b, int *c){

	if ( ( (*a) > (*c) and (*b) >= (*c) and (*a) >= (*b) ) or ( (*c) > (*a) and (*b) >= (*a) and (*c) >= (*b) ) ) {
		swap((*a),(*c));
	} 
	else if ( ( (*b) > (*c) and (*a) >= (*c) and (*b) >= (*a) ) or ( (*c) > (*b) and (*a) >= (*b) and (*c) >=(*a) ) ){
		swap ((*b),(*c));
	}
	else if ( ( (*a) > (*b) and (*c) >= (*b) and (*a) >= (*c) ) or ( (*b) > (*a) and (*c) >= (*a) and (*b) >= (*c) ) ){
		swap((*a),(*b));
	}
}





void link(int &a, int &b, int &c){
	
	if ((a > c and b >= c and a >= b) or (c > a and b >= a and c >= b)) {
		swap(a,c);
	} 
	else if ((b > c and a >= c and b >= a) or ( c > b and a >= b and c >=a)){
		swap (b,c);
	}
	else if ((a > b and c >= b and a >= c) or (b > a and c >= a and b >= c)){
		swap(a,b);
	}

}





int main() {


	srand(time(NULL));

	int button, a, b, c;

	while(true){

		cout << "Choose input:" << endl << "Random - 1 \nKeyboard - 2 \nExit - 0" << "\n--->"; cin >> button;
		switch(button){

//Random numbers
			case 1:
				system("cls");
				cout << "Choose type of data procesing:" << endl << "Pointer - 1 \nLink - 2 \nBack - 0" << "\n--->"; cin >> button;
				switch(button){
					case 1:
						system("cls");
						a = rand()%10+1;  b = rand()%10+1; c = rand()%10+1; 
						cout << "\nRand nums are: " << a << ' ' << b << ' ' << c << endl << endl;
						pointer(&a, &b, &c);
						cout << "New stage: " << a << ' ' << b << ' ' << c << endl << endl;
					break;

					case 2:
						system("cls");
						a = rand()%10+1;  b = rand()%10+1; c = rand()%10+1; 
						cout << "\nRand nums are: " << a << ' ' << b << ' ' << c << endl << endl;
						link(a, b, c);
						cout << "New stage: " << a << ' ' << b << ' ' << c << endl << endl;
					break;

					case 0 : 
					system("cls");
					break;

					default:
					system("cls");
					cout << " \t\t\tIncorrect input! ERROR! " << endl;
					break;

				}
				
			break;

// User input
			case 2:
				system("cls");
				cout << "Choose type of data procesing:" << endl << "Pointer - 1 \nLink - 2 \nBack - 0" << "\n--->"; cin >> button;
				switch(button){
					case 1:
						system("cls");
						cout << "Input your numbers ---> "; cin >> a >> b >> c;
						//a = rand()%10+1;  b = rand()%10+1; c = rand()%10+1; 
						cout << "\nRand nums are: " << a << ' ' << b << ' ' << c << endl << endl;
						pointer(&a, &b, &c);
						cout << "New stage: " << a << ' ' << b << ' ' << c << endl << endl;
					break;

					case 2:
						system("cls");
						cout << "Input your numbers ---> "; cin >> a >> b >> c;
						//a = rand()%10+1;  b = rand()%10+1; c = rand()%10+1; 
						cout << "\nRand nums are: " << a << ' ' << b << ' ' << c << endl << endl;
						link(a, b, c);
						cout << "New stage: " << a << ' ' << b << ' ' << c << endl << endl;
					break;

					case 0 : 
					system("cls");
					break;

					default:
					system("cls");
					cout << " \t\t\tIncorrect input! ERROR! " << endl;
					break;
				}
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





	return 0;
}