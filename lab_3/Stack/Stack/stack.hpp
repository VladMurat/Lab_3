#include "Elements.hpp"

class Stack         /// Описание класса "Стэк"
{
public:
	   Stack();
	   ~Stack();
 bool       isEmpty()     const;
 void       Push(int Val);
 int        Pop()         const;
 void       Delete();
 void       PrintStack()  const;

private:
 Element*    GetBottom()   const;
 Element*    GetTop()      const;

private:
	Element* Bottom;
};