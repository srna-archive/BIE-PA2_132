#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex(int re, int im)
{
	m_Re = re;
	m_Im = im;
}

int Complex::getRe() 
{
	return m_Re;
}

int Complex::getIm()
{
	return m_Im;
}

double Complex::abs()
{
	return sqrt(m_Re*m_Re + m_Im*m_Im);
}

void Complex::print()
{
	cout << getRe() 
	     << (getIm() < 0 ? 
		 " - " : " + ") 
             << (getIm() < 0 ? 
	         -getIm() : getIm()) << "i";

}

Complex Complex::add(Complex b)
{
	return Complex(getRe() + b.getRe(), getIm() + b.getIm());
}

