#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex operator + (int a, const Complex& second)
{
	return Complex(a+second.m_Re, second.m_Im);
}

ostream& operator << (ostream& os, const Complex& cplx)
{
	os << cplx.m_Im
	     << (cplx.m_Im < 0 ? 
		 " - " : " + ") 
             << (cplx.m_Im < 0 ? 
	         -cplx.m_Im : cplx.m_Im) << "i";
	return os;
}

Complex Complex::operator + (const Complex& second)
{
	return Complex(m_Re+second.m_Re, m_Im+second.m_Im);
}


Complex::Complex(int re, int im)
{
	m_Re = re;
	m_Im = im;
}

int Complex::getRe() const
{
	return m_Re;
}

int Complex::getIm() const
{
	return m_Im;
}

double Complex::abs() const
{
	return sqrt(m_Re*m_Re + m_Im*m_Im);
}

Complex Complex::add(Complex b)
{
	return Complex(getRe() + b.getRe(), getIm() + b.getIm());
}

