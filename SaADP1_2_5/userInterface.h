#pragma once

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

void workWithUser(int* arrayForQueue, int& numberOfItems, int& first, int& last);

void caseAddItem(int* arrayForQueue, int& numberOfItems, int& last);

void caseDeleteItem(int* arrayForQueue, int& numberOfItems, int& first);

void casePrintQueue(int* arrayForQueue);

bool workOrExit();

