#include "complex.h"
#include <fstream>
#include <iostream>
using namespace std;

ostream& operator<<(ostream& lhs, const complex& rhs) //inserter
{
	char mid;
	if(rhs.imaginary >= 0) {
		mid = '+';
	} else {
		mid = '-';
	}
	lhs << "" << rhs.real << " " << mid << " " << rhs.imaginary << "i";
	return lhs;
}

//in progress
/*istream& operator>>(istream& lhs, complex& rhs) //extractor
{
	double r;
	double i;
	char input[20];
	lhs.getline(input, 256);
	
	int locParenthesis1;
	int locComma;
	int locParenthesis2;
	
	for(int i = 0; i < 20; i++)
	{
		if (input[i] == '(')
			locParenthesis1 = i;
		if (input[i] == ',')
			locComma = i;
		if (input[i] == ')')
			locParenthesis2 = i;
	}
}*/