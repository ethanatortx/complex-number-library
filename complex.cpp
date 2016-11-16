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
	double mag = sqrt (pow(c.real,2) + pow(c.imaginary,2));
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

/**
	Returns the conjungate of a complex number c
	@param c the complex number to be used
	@return con the complex conjugate of c
*/
complex conj(const complex c) {
	complex con(c.real,c.imaginary * -1);
	return con;
}

/**
	Returns the imaginary part of a complex number c
	@param c the complex number to be used
	@return imag_part the imaginary part of c
*/
double imag(const complex& c) {
	double imag_part = c.imaginary;
	return imag_part;
}

/**
	Returns the real part of a complex number c
	@param c the complex number to be used
	@return real_part the real part of c
*/
double real(const complex& c) {
	double real_part = c.real;
	return real_part;
}

/**
	Returns the magnitude of a complex number c
	@param c the complex number to be used
	@return mag_sq the square of the magnitude of c
*/
double norm(const complex c) {
	double mag_sq = pow(c.real,2) + pow(c.imaginary,2);
	return mag_sq;
}

/**
	Returns a complex number given rectangular parameters
	@param mag the magnitude/radius of a rectangular complex number
	@param ang the angle of a rectangulra complex number
	@return polar_complex an imaginary number 
*/
complex polar(double mag, double ang) {
	complex polar_complex(mag * cos(ang),mag * sin(ang));
	return polar_complex;
}