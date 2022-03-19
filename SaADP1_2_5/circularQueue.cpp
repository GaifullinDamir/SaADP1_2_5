#include <iostream>
#include "circularQueue.h"

void init(int* arrayForQueue, int& first, int& last)
{
	for (int i = 0; i < ArraySize; i++)
	{
		arrayForQueue[i] = NULL;
	}
	first = 0;
	last = 0;
}
bool isEmpty(int numberOfItems)
{
	if (numberOfItems == 0) { return true; }
	else return false;
}

bool isFull(int numberOfItems)
{
	if (numberOfItems == ArraySize)	{ return true; }
	else return false;
}

void addItem(int* arrayForQueue, int& numberOfItems, int item, int& last)
{
	arrayForQueue[last] = item;
	if (last != ArraySize - 1) { last++; }
	else last = 0;
	numberOfItems++;
}

int deleteItem(int* arrayForQueue, int& numberOfItems, int& first, bool& check)
{
	if (isEmpty(numberOfItems)) { check = false; }
	else
	{
		int deletedItem = arrayForQueue[first];
		arrayForQueue[first] = NULL;
		if (first != ArraySize - 1) { first++; }
		else first = 0;
		numberOfItems--;
		check = true;
		return deletedItem;
	}
}

void printQueue(int* arrayForQueue)
{
	std::cout << "   Your queue:" << std::endl;
	for (int i = 0 ; i < ArraySize; i++)
	{
		std::cout << "   " << arrayForQueue[i] << std::endl;
	}
	std::cout << std::endl;
}
