#include "complex.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;

ostream& operator<<(ostream& lhs, const complex& rhs) //inserter
{
	lhs << "(" << rhs.real << ", " << rhs.imaginary << ")";
	return lhs;
	
	/*
	char mid;
	if(rhs.imaginary >= 0) {
		mid = '+';
	} else {
		mid = '-';
	}
	lhs << "" << rhs.real << " " << mid << " " << rhs.imaginary << "i";
	return lhs;
	*/
}

istream& operator>>(istream& lhs, complex& rhs) //extractor
{
	cout << "YO" << endl;
	
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
	
	char real[10];
	char imaginary[10];
	int counter = 0;
	
	for(int j = locParenthesis1 + 1; j < locComma; j++)
	{
		real[counter] = input[j];
		counter++;
	}
	
	counter = 0;
	if(input[locComma + 1] = ' ')
	{
		for (int k = locComma + 2; k < locParenthesis2; k++)
		{
			imaginary[counter] = input[k];
			counter++;
		}
	}
	counter = 0;
	else
	{
		for (int l = locComma + 1; l < locParenthesis2; l++)
		{
			imaginary[counter] = input[l];
			counter++;
		}
	}
	
	r = (double) atof(real);
	i = (double) atof(imaginary);
	
	rhs.real = r;
	rhs.imaginary = i;
	
	cout << "hey!" << endl;
	
	return lhs;
}