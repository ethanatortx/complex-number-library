#include "complex.h"
#include <iostream>

complex operator+(complex a, complex b)
{
	complex x;
	x.real = a.real += b.real;
	x.imaginary = a.imaginary += b.imaginary;
	return x;
}

// Not working at the moment.
void operator+=(complex a, complex b)
{
	a.real += b.real;
	a.imaginary += b.imaginary;
}
