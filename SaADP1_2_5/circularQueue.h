#pragma once

enum circelarQueue
{
	ArraySize = 5
};

struct CircularQueue
{
	int arrayForQueue[ArraySize];
	int first;
	int last;
	int numberOfItems = 0;
};

void init(int* arrayForQueue, int& first, int& last);

bool isEmpty(int numberOfItems);

bool isFull(int numberOfItems);

void addItem(int* arrayForQueue, int& numberOfItems, int item, int& last);

int deleteItem(int* arrayForQueue, int& numberOfItems, int& first, bool& check);

void printQueue(int* arrayForQueue);