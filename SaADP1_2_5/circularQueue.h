#pragma once

enum circelarQueue
{
	ArraySize = 5
};

struct CircularQueue
{
	int arrayForQueue[ArraySize];
	int first = 0;
	int last = 0;
	int numberOfItems = 0;
};


bool isEmpty(int numberOfItems);

bool isFull(int numberOfItems);

bool addItem(int* arrayForQueue, int& numberOfItems, int item, int& last);

int deleteItem(int* arrayForQueue, int& numberOfItems, int& first);

void printQueue(int* arrayForQueue);