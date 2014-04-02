#include "Bag.h"

using namespace std;

Bag::Bag(int size)
{
	m_Count = 0;
	m_Size = size;
	m_Data = new int[m_Size];
}

Bag::~Bag()
{
	delete [] m_Data;
}

Bag& Bag::insert(int num)
{
	if(m_Count == m_Size)
		throw "Bag is full!";

	m_Data[m_Count++] = num;
	
	return *this;
}

int Bag::whereIs(int num) {
	int index;
	for(index = 0; index < m_Count; index++)
	{
		if(m_Data[index] == num)
			break;
	}
	return index;
}

bool Bag::isThere(int num) {
	return !(whereIs(num) == m_Count);
}

Bag& Bag::remove(int num)
{
	if(m_Count == 0)
		throw "Bag is empty!";

	if(!isThere(num))
		throw "404 Element not found";

	for(int i = whereIs(num); i < m_Count-1; i++)
		m_Data[i] = m_Data[i+1];
	
	m_Count --;

	return *this;
}

Bag& Bag::operator += (int num) {
	return insert(num);
}

ostream& operator << (ostream& os, const Bag& bag)
{
	os << "Bag [";
	for(int i = 0; i < bag.m_Count; i++)
	{
		os << bag.m_Data[i];
		if(i < bag.m_Count - 1)
			os << ", ";
	}
	os << "]";
	return os;
}

Bag& Bag::operator=(const Bag& src)
{
	if(&src != this)
	{
		delete [] m_Data;
		m_Count = src.m_Count;
		m_Size = src.m_Size;
		m_Data = new int[m_Size];
		for(int i = 0; i < m_Count; i++)
			m_Data[i] = src.m_Data[i];
	}
	return *this;
}

Bag::Bag(const Bag& src)
{
	m_Count = src.m_Count;
	m_Size = src.m_Size;
	m_Data = new int[m_Size];
	for(int i = 0; i < m_Count; i++)
		m_Data[i] = src.m_Data[i];
}

Bag::operator int() {
	int sum = 0;
	for(int i = 0; i < m_Count; i++)
		sum += m_Data[i];
	return sum;
}

