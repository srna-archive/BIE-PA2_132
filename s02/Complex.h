#ifndef __COMPLEX_H__
#define __COMPLEX_H__

class Complex {
	int m_Re, m_Im;
public:
	Complex(int re, int im);
	int getRe();
	int getIm();
	double abs();
	void print();
	Complex add(Complex b);
};

#endif /* __COMLPEX_H__ */

