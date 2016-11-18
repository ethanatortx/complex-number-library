#include "complex.h"

complex operator*(complex a, complex b)
{
	complex c;
	c.real = (a.real*b.real) - (a.imaginary)*(b.imaginary);
	c.imaginary = (a.real*b.imaginary) + (a.imaginary*b.real);
	return c;
}

/*
// Not working at the moment.
void operator+=(complex a, complex b)
{
	a.real += b.real;
	a.imaginary += b.imaginary;
}
*/