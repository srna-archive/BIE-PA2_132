#ifndef __QUEUE_H_
#define __QUEUE_H_

class Queue
{
	int *array;
	int nextPush, nextPop, size;
public:
	Queue();
	~Queue();
	int pop();
	void push(int val);
	bool isEmpty();
};

#endif

