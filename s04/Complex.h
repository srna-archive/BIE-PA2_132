#ifndef __COMPLEX_H__
#define __COMPLEX_H__

class Complex;


class Complex {
	int m_Re, m_Im;
public:
	Complex(int re = 0, int im = 0);
	int getRe() const;
	int getIm() const;
	double abs() const;
	Complex add(Complex b);

	friend std::ostream& operator << (std::ostream& os, const Complex& cplx);
	friend Complex operator + (int a, const Complex& second);

	Complex operator + (const Complex&);
};

#endif /* __COMLPEX_H__ */

