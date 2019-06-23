#include <math.h>
#include "Complex.h"


Complex::Complex(double a, double b)
{
	this->a = a;
	this->b = b;
}
double Complex::GetA()
{
	return a;
}
double Complex::GetB()
{
	return b;
}
double Complex::GetModule()
{
	return sqrt((a * a) + (b * b));
}

Complex Complex::operator+(const Complex& c)
{
	Complex ret;
	
	ret.a = this->a + c.a;
	ret.b = this->b + c.b;
	
	return ret;
}
Complex Complex::operator-(const Complex& c)
{
	Complex ret;
	
	ret.a = this->a - c.a;
	ret.b = this->b - c.b;
	
	return ret;
}
Complex Complex::operator*(const Complex& c)
{
	Complex ret;
	
	ret.a = (this->a * c.a) - (this->b * c.b);
	ret.b = (this->a * c.b) + (this->b * c.a);
	
	return ret;
}
Complex Complex::operator/(const Complex& c)
{
	Complex ret;
	double cm = c.a * c.a + c.b * c.b;
	
	ret.a = ((this->a * c.a) + (this->b * c.b)) / cm;
	ret.b = ((this->b * c.a) - (this->a * c.b)) / cm;
	
	return ret;
}

bool Complex::operator==(const Complex& c)
{	
	return ((this->a == c.a) && (this->b == c.b));
}
bool Complex::operator!=(const Complex& c)
{
	return ((this->a != c.a) || (this->b != c.b));
}

//Why return *this: To support like a = b = c
Complex& Complex::operator=(const Complex& c)
{
	if(this != &c)
	{
		a = c.a;
		b = c.b;
	}
	
	return *this;
}

Complex& Complex::operator++()
{
	a = a + 1;
	b = b + 1;
	
	return *this;
}
Complex Complex::operator++(int)
{
	Complex ret(a, b);
	
	a = a + 1;
	b = b + 1;
	
	return ret;
}

