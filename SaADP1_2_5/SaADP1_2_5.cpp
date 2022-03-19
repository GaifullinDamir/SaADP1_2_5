#include <iostream>
#include "circularQueue.h"
#include "userInterface.h"

int main()
{
    CircularQueue circularQueue;
    init(circularQueue.arrayForQueue, circularQueue.first, circularQueue.last);
    workWithUser(circularQueue.arrayForQueue, circularQueue.numberOfItems, circularQueue.first, circularQueue.last);
}
