#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex
{
	double a;
	double b;
public:
	Complex(double a = 0, double b = 0);//Ĭ��ֵֻ��Ҫ�������ĵط��ṩ
	double GetA();
	double GetB();
	double GetModule();
	
	Complex operator+(const Complex& c);
	Complex operator-(const Complex& c);
	Complex operator*(const Complex& c);
	Complex operator/(const Complex& c);
	
	bool operator==(const Complex& c);
	bool operator!=(const Complex& c);
	
	Complex& operator=(const Complex& c);
};

#endif