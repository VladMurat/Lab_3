#pragma once
#include "Elements.hpp"
using namespace std;

class List                          /// Описание класса "список"
{
private:
	int Number;
	Element* top;
public:
	List();
void PrintList() const;
Element* FindEnd();
Element* FindNum(int);
void DelEl(int);
void PushEl(int num, int value);
int PopEl(int num);
};

