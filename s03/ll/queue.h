#ifndef __QUEUE_H_
#define __QUEUE_H_

class Queue
{
public:
	void push(int val);
	int pop();
	bool isEmpty();
	Queue();
	~Queue();
private:
	struct TElem
	{
		int m_Val;
		TElem *m_Next;
		TElem(int val, TElem *next = NULL);
	};
	TElem *m_Head;
	TElem *m_Tail;
};

#endif
