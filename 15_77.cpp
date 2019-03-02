#include <iostream>
#include <cmath>

using std::abs;

int main()
{
	double e = 0.00001;
	double curr, prev, sum, x{10};
	int n{1};
	
	do {
		prev = curr;
		curr = pow(2, n) * sin(x / pow(3, n));
		sum += curr;
		n++;
	} while(abs(curr - prev) > e);
	
	printf("sum = %f and n = %i", sum, n);
	
	return 0;
}

