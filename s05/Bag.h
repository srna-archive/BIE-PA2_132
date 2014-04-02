#pragma once

#include <iostream>

using namespace std;

class Bag
{
	int m_Size, m_Count;
	int *m_Data;
public:
	explicit Bag(int size = 100);
	~Bag();
	Bag& insert(int num);
	int whereIs (int num);
	bool isThere (int num);
	Bag& remove(int num);
	Bag& operator += (int num);
	friend ostream& operator << (ostream& os, const Bag& bag);
	Bag& operator = (const Bag& src);
	Bag(const Bag& src);
	operator int ();
};

