#include <stdio.h>
#include "Complex.h"

int main()
{
	Complex c1 = {1, 2};
	Complex c2 = {3, 6};
	
	Complex c3 = c1 + c2;
	
	printf("c3.a = %f, c3.b = %f\n", c3.GetA(), c3.GetB());
	
	c3 = c2 - c1;
	
	printf("c3.a = %f, c3.b = %f\n", c3.GetA(), c3.GetB());
	
	c3 = c2 * c1;
	
	printf("c3.a = %f, c3.b = %f\n", c3.GetA(), c3.GetB());
	
	c3 = c2 / c1;
	
	printf("c3.a = %f, c3.b = %f\n", c3.GetA(), c3.GetB());
	
	printf("c1 == c2 : %d\n", c1 == c2);
	printf("c1 != c2 : %d\n", c1 != c2);
	
	c3 = c2 = c1;
	
	printf("c1.a = %f, c1.b = %f\n", c1.GetA(), c1.GetB());
	printf("c2.a = %f, c2.b = %f\n", c2.GetA(), c2.GetB());
	printf("c3.a = %f, c3.b = %f\n", c3.GetA(), c3.GetB());
	
	return 0;
}