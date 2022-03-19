#include <iostream>
#include "circularQueue.h"

int main()
{
    std::cout << "Hello World!\n";
    CircularQueue circularQueue;
    addItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, 0, circularQueue.last);
    addItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, 1, circularQueue.last);
    addItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, 2, circularQueue.last);
    addItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, 3, circularQueue.last);
    addItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, 4, circularQueue.last);
    addItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, 5, circularQueue.last);
    printQueue(circularQueue.arrayForQueue, circularQueue.first, 5);
    deleteItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, circularQueue.first);
    deleteItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, circularQueue.first);
    printQueue(circularQueue.arrayForQueue, circularQueue.first, 5);
    addItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, 6, circularQueue.last);
    addItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, 7, circularQueue.last);
    addItem(circularQueue.arrayForQueue, circularQueue.numberOfItems, 8, circularQueue.last);
    printQueue(circularQueue.arrayForQueue, circularQueue.first, 5);

}
