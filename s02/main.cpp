#include <iostream>
#include "Complex.h"

using namespace std;

Complex cplx_plus(Complex a, Complex b)
{
	return Complex(a.getRe() + b.getRe(), a.getIm() + b.getIm());
}

int main()
{
	Complex a(1,2);
	Complex *b = new Complex(3,-4);

	cout << "a=";
	a.print();
	cout << "; abs=" << a.abs() << endl;

	cout << "b=";
	b->print();
	cout << "; abs=" << b->abs() << endl;

	cout << "a+b=";
	cplx_plus(a, *b).print();
	cout << endl;

	Complex(1,2).print();
	cout << endl;

	cout << "a+b=";
	a.add(*b).print();
	cout << endl;

	Complex(1,2).add(Complex(3,4).add(Complex(5,6))).print();
	cout << endl;

	delete b;

	return 0;
}


