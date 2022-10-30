#include "Header.h"

template <typename T>
T findMAX(T x, T y) { 	return  x > y ? x: y; }

template <typename T1, typename T2>
T1 findMAX(T1 x, T2 y) { return  x > y ? x : y; };


template <class T> 
class Cacucliator
{
	T num1;
	T num2;
public:
	Cacucliator(T num1, T num2) { this->num1 = num1; this->num2 = num2; };

	T getNum1() const { return num1; };
	T getNum2() const { return num2; };

	T summ() { return num1 + num2; };
	T mult() { return num1 * num2; };
	T sub() { return num1 - num2; };
	T div() { return num1 / num2; };

};

class Rectungle {
	int a, b;

public:
	Rectungle() { a = 0; b = 0; };
	Rectungle(int a, int b) { this->a = a, this->b = b; };

	friend Rectungle operator + (Rectungle& ob1, Rectungle& ob2) {
		Rectungle temp;
		temp.a = ob1.a + ob2.a; temp.b = ob1.b + ob2.b;
		return temp;
	};
	friend Rectungle operator - (Rectungle& ob1, Rectungle& ob2) {
		Rectungle temp;
		temp.a = ob1.a - ob2.a; temp.b = ob1.b - ob2.b;
		return temp;
	};
	friend Rectungle operator * (Rectungle& ob1, Rectungle& ob2) {
		Rectungle temp;
		temp.a = ob1.a * ob2.a; temp.b = ob1.b + ob2.b;
		return temp;
	};
	friend Rectungle operator / (Rectungle& ob1, Rectungle& ob2) {
		Rectungle temp;
		temp.a = ob1.a / ob2.a; temp.b = ob1.b / ob2.b;
		return temp;
	};

	void printTg() { cout << "A --> " << this->a << " B --> " << this->b << endl; }

};





int main() { 


	//int int_x = 3, int_y =16;
	//float float_x = 13.5, float_y = 5.5;
	//char char_x = 'c', char_y = 's';

	//cout << "1) int T and T --> " << int_x << " ? " << int_y << " = " << findMAX(int_x, int_y) << "\n";
	//cout << "2) float T and T --> " << float_x << " ? " << float_y << " = " << findMAX(float_x, float_y) << "\n";
	//cout << "3) float T and T --> " << char_x << " ? " << char_y << " " << findMAX(char_x, char_y) << "\n";
	//cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n";
	//cout << "4) float T and char T --> " << int_x << " ? " << char_y << " = " << findMAX(int_x, char_y) << endl;
	//cout << "5) int T and float T --> " << int_x << " ? " << float_y << " = " << findMAX(int_x, float_y) << endl;
	//cout << "6) float T and int T --> " << float_x << " ? " << int_y << " = " << findMAX(float_x, int_y) << endl;

	Cacucliator <int> calINT(4,9);

	cout << "1)" << calINT.getNum1() << " + " << calINT.getNum2() << "--> " << calINT.summ() << endl;
	cout << "2)" << calINT.getNum1() << " - " << calINT.getNum2() << "--> " << calINT.sub() << endl;
	cout << "3)" << calINT.getNum1() << " * " << calINT.getNum2() << "--> " << calINT.mult() << endl;
	cout << "4)" << calINT.getNum1() << " / " << calINT.getNum2() << "--> " << calINT.div() << endl;

	cout << "//////////////////////////////////////////////////////// \n";
	Cacucliator <float> calFloat(4.1, 9.4);

	cout << "1)" << calFloat.getNum1() << " + " << calFloat.getNum2() << "--> " << calFloat.summ() << endl;
	cout << "2)" << calFloat.getNum1() << " - " << calFloat.getNum2() << "--> " << calFloat.sub() << endl;
	cout << "3)" << calFloat.getNum1() << " * " << calFloat.getNum2() << "--> " << calFloat.mult() << endl;
	cout << "4)" << calFloat.getNum1() << " / " << calFloat.getNum2() << "--> " << calFloat.div() << endl;

	Rectungle rec1(5,6), rec2(3,9);
	Cacucliator <Rectungle> claRec(rec1, rec2);
	cout << "Result: \n";
	Rectungle temp = claRec.summ();
	cout << "\n";
	rec1.printTg();
	cout << "+\n";
	rec2.printTg();
	cout << "==============\n";
	temp.printTg();

	temp = claRec.sub();
	cout << '\n';
	rec1.printTg();
	cout << "-\n";
	rec2.printTg();
	cout << "==============\n";
	temp.printTg();

	temp = claRec.mult();
	cout << '\n';
	rec1.printTg();
	cout << "*\n";
	rec2.printTg();
	cout << "==============\n";
	temp.printTg();

	temp = claRec.div();
	cout << '\n';
	rec1.printTg();
	cout << "/\n";
	rec2.printTg();
	cout << "==============\n";
	temp.printTg();



}


