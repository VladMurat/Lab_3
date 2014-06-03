#include "Queue.hpp"

Queue::Queue()                        /// Реализация методов класса "Очередь"
{
	First = nullptr;
}

bool  Queue::isEmpty()  const
{
	if(First) return false;
	else return true;
};

void Queue::Push_back(int Val)
{
	Element* temp;

	temp = new Element;
	temp->value = Val;
	temp->next = nullptr;

	if( isEmpty() )
		First = temp;
	else
	{
		Element* temp2 = First;
		while(temp2->next)
			temp2 = temp2->next;
		temp2->next = temp;	
	}
	return;
}

int Queue::Pop_front()  const
{
	if( isEmpty() )
		return 0;
	else
		return First->value;	
}

void  Queue::Delete_front()
{
	if( isEmpty() )
		return;
	else
	{
		if(First->next)
		{
			Element* temp = First->next;
			delete First;
			First = temp;
		}
		else 
		{
			delete First;
			First = nullptr;
		}
	}
	return;
}

Queue::~Queue()
{
	while(First)
		Delete_front();
}

void Queue::PrintQueue() const
{
	Element* temp = First;
	std::cout<<"/////////////////////////////"<<std::endl;
	if( isEmpty() )
		std::cout<<"Queue is empty"<<std::endl;
	else
		while(temp)
		{
			std::cout<<temp->value<<std::endl;
			temp = temp->next;
		}
		std::cout<<"/////////////////////////////"<<std::endl;
}