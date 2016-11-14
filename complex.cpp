#include <math.h>

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
	return sqrt (dist_sq);
}