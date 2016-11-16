// Start header
#ifndef COMPLEX_H
#define COMPLEX_H

class complex {
	public:
		double real;			// Real part
		double imaginary;		// Imaginary part
		
		complex(double r, double i);
		complex(double r);
		complex();
};

// Standard Operator Functions
complex operator+(complex a, complex b);
complex operator-(complex a, complex b);
complex operator*(complex a, complex b);
complex operator/(complex a, complex b);

void operator+=(complex a, complex b);
void operator-=(complex a, complex b);
void operator*=(complex a, complex b);
void operator/=(complex a, complex b);

// Arithmetic Function Declarations
double abs(const complex c);
double arg(const complex c);
/*
complex conj(const complex c);
double imag(const complex& c);
double norm(const complex c);
complex polar(double mag m, double ang=0.0);
double real(const complex& c);

complex acos(const complex c);
complex asin(const complex c);
complex atan(const complex c);
complex cos(const complex c);
complex cosh(const complex c);
complex exp(const complex c);
complex log(const complex c);
complex log10(const complex c);
complex pow(double b, const complex exp);
complex pow(const complex b, int exp);
complex pow(const complex b, double exp);
complex pow(const b, const complex exp);
complex sin(const complex c);
complex sinh(const complex c);
complex sqrt(const complex c);
complex tan(const complex c);
complex tanh(const complex c);
*/
// End header file
#endif