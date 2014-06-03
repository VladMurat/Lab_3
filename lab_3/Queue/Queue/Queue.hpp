#include <iostream>
#include "Elements.hpp"

class Queue               /// Описание класса "Очередь"
{
public:
	Queue();
	~Queue();
 bool     isEmpty()          const;
 void     Push_back(int Val);
 int      Pop_front()        const;
 void     Delete_front();
 void     PrintQueue()       const;

private:
	Element* First;
};