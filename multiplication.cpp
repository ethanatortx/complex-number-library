#include "complex.h"

/**
	Multiplication overload for complex numbers
	@param a the first complex factor
	@param b the second complex factor 
	@return c the product of these factors
*/
complex operator*(complex a, complex b)
{
	complex c;
	c.real = (a.real*b.real) - (a.imaginary)*(b.imaginary);
	c.imaginary = (a.real*b.imaginary) + (a.imaginary*b.real);
	return c;
}


/** 
	Multiplication assignment overload for complex numbers
	@param a the first complex factor
	@param b the second complex factor
*/
void operator*=(complex &a, const complex &b)
{
	complex c;
	c.real = (a.real*b.real) - (a.imaginary)*(b.imaginary);
	c.imaginary = (a.real*b.imaginary) + (a.imaginary*b.real);
	a = c;
}