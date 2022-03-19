#include <iostream>
#include "circularQueue.h"

bool isEmpty(int numberOfItems)
{
	if (numberOfItems == 0) { return true; }
	else return false;
}

bool isFull(int numberOfItems)
{
	if (numberOfItems == ArraySize)	
	{
		std::cout << std::endl;
		std::cout << "Array is full." << std::endl;
		std::cout << std::endl;
		return true;
	}
	else return false;
}

bool addItem(int* arrayForQueue, int& numberOfItems, int item, int& last)
{
	if (isFull(numberOfItems)) { return false; }
	else
	{
		arrayForQueue[last] = item;
		if (last != ArraySize - 1) { last++; }
		else last = 0;
		numberOfItems++;
		return true;
	}
}

int deleteItem(int* arrayForQueue, int& numberOfItems, int& first)
{
	if (isEmpty(numberOfItems)) {
		std::cout << std::endl;; std::cout << "Array is empty. Nothing to delete."; std::cout << std::endl;
	}
	else
	{
		int temporary = arrayForQueue[first];
		if (first != ArraySize - 1) { first++; }
		else first = 0;
		numberOfItems--;
		std::cout << std::endl;
		std::cout << "Deleted item: " << temporary << std::endl;
		std::cout << std::endl;
		return temporary;
	}
}

void printQueue(int* arrayForQueue)
{
	for (int i = 0 ; i < ArraySize; i++)
	{
		std::cout << arrayForQueue[i] << std::endl;
	}
	std::cout << std::endl;
}
