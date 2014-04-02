#include <iostream>
#include <cstdlib>
#include "queue.h"

using namespace std;

Queue::Queue()
{
	size = 4;
	array = new int[size];
	nextPop = nextPush = 0;
}

bool Queue::isEmpty()
{
	return (nextPush - nextPop) == 0;
}

int Queue::pop()
{
	if(isEmpty())
		exit(1);
	return array[nextPop++];
}

void Queue::push(int val)
{
	if(nextPush == size)
	{
		size *= 2;
		int *newArray = new int[size];
		for(int i = 0; i < nextPush; i++)
			newArray[i] = array[i];
		int *del = array;
		array = newArray;
		delete [] del;
	}
	array[nextPush++] = val;
}

Queue::~Queue()
{
	delete [] array;
}

