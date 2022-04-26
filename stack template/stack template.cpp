//Доопрацюйте клас Stack. Зpобіть так, щоб клас Stack був шаблонним. 
#include <iostream>
#include "Stack.h"

using namespace std;
int main()
{
	setlocale(0, "Ukrainian");
	Stack<int>A(3);

	cout <<   A.push(45)<<endl;
	cout <<   A.push(55)<<endl;
	cout << A.push(95)<<endl;
	cout << "стек повний :" << A.isFull() << endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << A.pop() << "\t";
	}
	cout << endl;
	cout << "стек пустий :" << A.isEmpty()<<endl;
	
}
