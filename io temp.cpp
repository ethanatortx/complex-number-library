// maybe more elegant and simple solution to io problem

#include "complex.h"

using namespace std;

double realArr[2] = {0.0,0.0};
double imaginaryArr[2] = {0.0,0.0};


istream& operator>>(istream& lhs, complex& rhs) {
	int i = 0;
	while (lhs.good()) {
		char temp = lhs.get();
		cout << temp;
		/*if (atof(temp)!=0.0) {
			realArr[i] = atof(temp);
			i++
		}*/
	}
	cout << realArr[0] << realArr[1] << endl;
}