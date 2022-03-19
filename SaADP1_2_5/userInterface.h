#pragma once
#include "circularQueue.h"

enum userInterface
{
	MainMenu = 0,
	EnterItem = -1,
	NumbOfOptionsMain = 3,
	WorkOrExit = 1,
	AddItem = 1,
	DeleteItem,
	PrintQueue,
	TwoCases = 2,
	Continue = 1,
	Exit = 2
};

void printMainMenu();

int userInput(int numberOfMenu);

void workWithUser(CircularQueue& circularQueue);

void caseAddItem(int* arrayForQueue, int& numberOfItems, int& last);

void caseDeleteItem(int* arrayForQueue, int& numberOfItems, int& first);

bool workOrExit();

