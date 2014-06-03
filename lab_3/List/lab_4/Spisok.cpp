#pragma once
#include "Spisok.hpp"

List::List() : Number(0), top(nullptr)   /// Реализация класса "Список"
{}

void List::PrintList() const
{
	Element* ptr;
	if (!Number)
	{
		cout<<"List is empty"<<endl;
		return;
	}
	else
	{
		cout<<"LIST:"<<endl;
		ptr = top;
		while(ptr)
		{
			cout<<ptr->value<<endl;
			ptr= ptr->next;
		}
	}
	return;
}
Element* List::FindEnd()
{
	Element* ptr;
	ptr = top;
	while(ptr->next)
		ptr = ptr->next;
	return ptr;
}

Element* List::FindNum(int num)
{
	if (num < 0)
		return top;
	int numb = 0;
	Element* ptr = top;
	while(numb != num)
	{ 
		ptr = ptr->next;
		numb++;
	}
	return ptr;

}
void List::PushEl(int num, int val)
{
	if(num > Number)
	{ 
		if(!num)
		{
			Element* temp = new Element;
			temp->value = val;
			temp->next = nullptr;
			top = temp;
		}
		Element* ptr = FindEnd();
		Element* temp = new Element;
		ptr->next = temp;
		temp->value = val;
		temp->next = nullptr;
		Number++;
	}

	else
	{
		if (!num)
		{		
			Element* temp = new Element;
			temp->value = val;
			temp->next = top;
			top = temp;

		}
		else
		{
			Element* ptr = FindNum(num-1);
			Element* ptr2 = FindNum(num);
			Element* temp = new Element;
			ptr->next = temp;
			temp->value = val;
			temp->next = ptr2;
		}
		Number++;
	}
}

int List::PopEl(int num)
{
	if ( (num>=0) && (num <=Number))
	{
		Element* ptr = FindNum(num);
		return ptr->value;
	}
	else return 0;
}

void List::DelEl(int num)
{
	if(!num)
	{
		Element* ptr = top;
		top = top->next;
		delete ptr;
	}
	if ( (num > 0) && (num <= Number))
	{
		Element* ptr = FindNum(num);
		Element* ptr2 = FindNum(num-1);
		ptr2->next = ptr->next;
		delete ptr;
	}
	else return;
}




