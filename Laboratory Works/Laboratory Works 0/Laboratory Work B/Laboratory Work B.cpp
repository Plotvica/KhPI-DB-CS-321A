#include <iostream>
#include <ctime>
#include <bits/stdc++.h>

using namespace std;




void pointer(int *a, int *b, int *c){



}








void link(int &a, int &b, int &c){

	
	if ((a > c and b > c and a >= b) or (c > a and b > a and c >= b) or (a > c and a > b and b==c) or (c>a and c > b and b==a)) {
		swap(a,c);
	} 
	else if ((b > c and a > c and b >= a) or ( c > b and a > b and c >=a) or (b > c and b > a and c == a) or (c > b and c > a and b==a)){
		swap (b,c);
	}
	else if ((a > b and c > b and a >= c) or (b > a and c > a and b >= c) or (a > b and a > c and b==c) or (b > a and c > a and b==c)){
		swap(a,b);

	}


}



// сделать меню по выбору ссылка или указатель
// посмотреть видос про указатель и доделать
// добавить ввод пользователем

int main() {


	srand(time(NULL));

	int button, a, b, c;

	while(true){

		a = rand()%10+1;  b = rand()%10+1; c = rand()%10+1; 
		cout << "Rand nums are: " << a << ' ' << b << ' ' << c << endl;
		link(a, b, c);
		cout << "!Rand nums are: " << a << ' ' << b << ' ' << c << endl;
		break;

	}





	return 0;
}