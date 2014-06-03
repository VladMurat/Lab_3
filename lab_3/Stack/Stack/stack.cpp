#include "stack.hpp"

Stack::Stack() : Bottom(nullptr)  /// Реализация методов класса "Стэк"
{
}

bool  Stack::isEmpty() const
{
	if (Bottom) return false;
	else return true;
}

void  Stack::Push(int Val)
{
	Element* temp;

	temp = new Element;
	temp->value = Val;
	temp->next = nullptr;

	if ( isEmpty() )
		Bottom = temp;	
	else
	{
		Element* temp2 = Bottom;
		while(temp2->next)
			temp2 = temp2->next;
		temp2->next = temp;	
	}
}

Element* Stack::GetBottom() const
{
	return Bottom;
}

Element* Stack::GetTop() const
{
	Element* temp = Bottom;
	while(temp->next)
		temp = temp->next;
	return temp;
}

int Stack::Pop()  const
{
	Element* temp = GetTop();
	if(temp)
		return temp->value;
	else
		return 0;
}

void Stack::Delete()
{
	Element* temp = Bottom;
	Element* temp2 = GetTop();
	if(Bottom->next)
	{
	while(temp->next != temp2)
		temp = temp->next;
	temp->next = nullptr;
	 delete temp2;
	}
	else
	{
		delete Bottom;
		Bottom = nullptr;
	}
}

void  Stack::PrintStack()  const
{
	std::cout<<"////////////////////////////////"<<std::endl;
	if(Bottom)
	{
		Element* temp = Bottom;
		while(temp)
		{
			std::cout<<temp->value<<std::endl;
			temp = temp->next;			
		}
	}
	else
	 std::cout<<"Stack is empty"<<std::endl;
	std::cout<<"////////////////////////////////"<<std::endl;
	return;
}

Stack::~Stack()
{
	while(Bottom)
		Delete();
}