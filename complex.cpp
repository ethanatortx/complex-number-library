#include <math.h>
#include "complex.h"
using namespace std;

/* PUT CONSTRUCTORS HERE */
complex::complex()
{
	real = 0.0;
	imaginary = 0.0;
}

complex::complex(double r)
{
	real = r;
	imaginary = 0.0;
}

complex::complex(double r, double i)
{
	real = r;
	imaginary = i;
}

/* METHODS BELOW */
/**
	Returns the magnitude of a complex number c
	@param c the complex number to be used
	@return mag the magnitude of c
*/
double abs(const complex c) {
	double real = c.real;
	double i = c.imaginary;

	double real_sq = pow(real,2);
	double i_sq = pow(i,2);

	double mag = sqrt (real_sq + i_sq);
	return mag;
}

/**
	Returns the angle of a complex number c 
	@param c the complex number to be used
	@return angle the angle of c
*/
double arg(const complex c) {
	double angle = atan(c.imaginary/c.real);
	return angle;
}