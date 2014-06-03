#include "Queue.hpp"
using namespace std;

int main()
{
	int num;
	Queue mQueue;
	int temp;
	cout<<"Enter number  ";
	cin>>num;
	if(num >= 0)
	for(int itr = 0; itr < num; itr++)
	{
		cin>>temp;
		mQueue.Push_back(temp);
	}
	mQueue.PrintQueue();         /// Вывод на экран очереди
	system("pause");
	return 0;
}