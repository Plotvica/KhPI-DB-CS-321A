#include "Header.h"



int main()
{

	Queue queue;

	float data;
	int size = 5;
	//for (size_t i = 0; i < size; i++)
	{
	////	cout << "Input you`r data \n-->"; cin >> data; queue.Push(data);
	}
	queue.read();
	queue.show();

	queue.ArithmeticMean();
	queue.MinandMax();
	queue.beforeMIN();
	queue.write();

	cout << "Amount: " << queue.amount() << endl;

}

