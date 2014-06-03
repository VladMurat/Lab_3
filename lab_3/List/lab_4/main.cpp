#pragma once
#include "Spisok.hpp"

int main()
{
	List l1;
	int n;
	cout<<"enter N"<<endl;
	cin>>n;
	for(int itr = 0; itr < n ; itr++)
	{
		int num, val;
		cin>>num>>val;
		l1.PushEl(num, val);
	}
	cin>>n;
	l1.DelEl(n-1);

	l1.PrintList();

	system("pause");
}