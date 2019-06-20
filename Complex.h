#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex
{
	double a;
	double b;
public:
	Complex(double a = 0, double b = 0);//默认值只需要在声明的地方提供
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