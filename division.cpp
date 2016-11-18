#include "complex.h"

/**
	Division overload for complex numbers
	@param a the complex dividend
	@param b the complex divisor
	@return c the quotient of these factors
*/
complex operator/(complex a, complex b)
{
	complex c;
	complex con(b.real,b.imaginary * -1);
	complex divisor_conj = con;
	complex numerator = a*divisor_conj;
	complex denominator = b*divisor_conj;
	c.real = numerator.real / denominator.real;
	c.imaginary = numerator.imaginary / denominator.real;
	return c;
}



/** 
	Division assignment overload for complex numbers
	@param a the complex dividend
	@param b the complex divisor
*/

void operator/=(complex &a, const complex &b)
{
	complex c;
	complex con(b.real,b.imaginary * -1);
	complex divisor_conj = con;
	complex numerator = a*divisor_conj;
	complex denominator = b*divisor_conj;
	c.real = numerator.real / denominator.real;
	c.imaginary = numerator.imaginary / denominator.real;
	a = c;
}
