#include <iostream>
#include "circularQueue.h"

void init(CircularQueue& circularQueue)
{
	for (int i = 0; i < ArraySize; i++)
	{
		circularQueue.arrayForQueue[i] = NULL;
	}
	circularQueue.first = 0;
	circularQueue.last = 0;
}
bool isEmpty(int numberOfItems)
{
	if (numberOfItems == 0) { return true; }
	else return false;
}

bool isFull(int numberOfItems)
{
	if (numberOfItems == ArraySize) { return true; }
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

void printQueue(int* arrayForQueue, int first, int last)
{
	std::cout << "   Your queue:" << std::endl;

	int current = first;
	do
	{
		std::cout << "   " << arrayForQueue[current] << std::endl;
		current++;
		if (current == ArraySize)
			current = 0;
	} while (current != last);

	std::cout << std::endl;
}
