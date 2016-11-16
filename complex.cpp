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

/**
	Returns the conjungate of a complex number c
	@param c the complex number to be used
	@return con the complex conjugate of c
*/
complex conj(const complex c) {
	double neg_imaginary = c.imaginary * -1;
	complex con(c.real,neg_imaginary);
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
	double real = c.real;
	double i = c.imaginary;
	double real_sq = pow(real,2);
	double i_sq = pow(i,2);
	double mag_sq = real_sq + i_sq;
	return mag_sq;
}

/**
	Returns a complex number given rectangular parameters
	@param mag the magnitude/radius of a rectangular complex number
	@param ang the angle of a rectangulra complex number
	@return polar_complex an imaginary number 
*/
complex polar(double mag, double ang) {
	double real = mag * cos(ang);
	double imag = mag * sin(ang);
	complex polar_complex(real,imag);
	return polar_complex;
}