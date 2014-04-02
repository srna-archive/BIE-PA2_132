#include <iostream>
#include "queue.h"
#include <cstdlib>

using namespace std;

Queue::Queue()
{
	m_Head = NULL;
	m_Tail = NULL;
}

bool Queue::isEmpty()
{
	return m_Head == NULL;
}

void Queue::push(int val)
{
	if(isEmpty())
		m_Tail = m_Head = new TElem(val);
	else
	{
		m_Tail->m_Next = new TElem(val);
		m_Tail = m_Tail->m_Next;
	}
}

int Queue::pop()
{
	if(isEmpty())
		exit(1);
	int val = m_Head->m_Val;
	TElem *forDelete = m_Head;
	m_Head = m_Head->m_Next;
	delete forDelete;
	return val;
}

Queue::~Queue()
{
	TElem *destroy = m_Head;
	while(destroy != NULL)
	{
		TElem *del = destroy;
		destroy = destroy->m_Next;
		delete del;
	}
}

Queue::TElem::TElem(int val, TElem*next)
{
	m_Val = val;
	m_Next = next;
}

