#include "stack.hpp"
using namespace std;

int main()
{
	int num;
	Stack mStack;
	int temp;
	cout<<"Enter number  ";
	cin>>num;
	if(num >= 0)
	for(int itr = 0; itr < num; itr++)
	{
		cin>>temp;
		mStack.Push(temp);
	}
	mStack.PrintStack();   /// Вывод стэка на экран
	system("pause");
	return 0;
}