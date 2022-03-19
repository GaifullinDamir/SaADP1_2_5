#include <iostream>
#include <string>
#include "userInterface.h"
#include "circularQueue.h"

void printMainMenu()
{
	std::cout << std::endl;
	std::cout << "1. Add an element to the queue." << std::endl;
	std::cout << "2. Remove an element from the stack." << std::endl;
	std::cout << "3. Display stack on screen." << std::endl;
	std::cout << std::endl;
}

int userInput(int numberOfMenu)
{
	int option = 0;
	bool check = true;
	std::string optionInput;

	while (check)
	{
		try
		{
			std::cout << "   Enter a number, please: ";
			std::cin >> optionInput;
			option = std::stoi(optionInput);
			check = false;
		}

		catch (const std::exception&)
		{
			std::cout << "   Please enter a number!" << std::endl;
			std::cout << std::endl;
			check = true;
		}

		if (check == false && numberOfMenu == MainMenu)
		{
			if (option < 1 || option > NumbOfOptionsMain)
			{
				std::cout << "   There is no such menu item." << std::endl;
				std::cout << std::endl;
				check = true;
			}
		}
		else if (check == false && numberOfMenu == WorkOrExit)
		{
			if (option < 1 || option > TwoCases)
			{
				std::cout << "   There is no such menu item." << std::endl;
				std::cout << std::endl;
				check = true;
			}
		}
	}
	return option;
}
void workWithUser(int* arrayForQueue, int& numberOfItems, int& first, int& last)
{
	bool work = true;
	while (work)
	{
		printMainMenu();

		std::cout << "   What do you want to do? " << std::endl;
		std::cout << std::endl;
		int option = userInput(MainMenu);
		switch (option)
		{
		case(AddItem):
		{
			caseAddItem(arrayForQueue, numberOfItems, last);
			break;
		}
		case(DeleteItem):
		{
			caseDeleteItem(arrayForQueue, numberOfItems, first);
			break;
		}
		case(PrintQueue):
		{
			casePrintQueue(arrayForQueue);
			break;
		}
		default:
			break;
		}
		work = workOrExit();
	}
}

void caseAddItem(int* arrayForQueue, int& numberOfItems, int& last)
{
	if (!isFull(numberOfItems))
	{
		std::cout << "   Enter the item to add." << std::endl;
		int item = userInput(EnterItem);
		addItem(arrayForQueue, numberOfItems, item, last);
		std::cout << std::endl;
		std::cout << "   Item added." << std::endl;
		std::cout << std::endl;
	}
	else if (isFull(numberOfItems))
	{
		std::cout << std::endl;
		std::cout << "   The queue is full." << std::endl;
		std::cout << std::endl;
	}
}

void caseDeleteItem(int* arrayForQueue, int& numberOfItems, int& first)
{
	bool check;
	int deletedItem = 0;
	deletedItem = deleteItem(arrayForQueue, numberOfItems, first, check);
	if (check == true)
	{
		std::cout << std::endl;
		std::cout << "Deleted item: " << deletedItem << std::endl;
		std::cout << std::endl;
	}
	else if (check == false)
	{
		std::cout << std::endl;
		std::cout << "Array is empty. Nothing to delete." << std::endl;;
		std::cout << std::endl;
	}
}

void casePrintQueue(int* arrayForQueue)
{
	printQueue(arrayForQueue);
}

bool workOrExit()
{
	std::cout << "   Continue (1) / exit (2)" << std::endl;
	int action = userInput(TwoCases);
	switch (action)
	{
	case(Continue):
	{
		return true;
		break;
	}
	case(Exit):
	{
		return false;
		break;
	}
	default:
		break;
	}
}