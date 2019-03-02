// x^2 + y^2 = r^2 with natural numbers
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int max{10};
	
	double intpart;
	
	for (int n = 1; n < max; n++) {
		for (int m = n; m <= max; m++) {
			double r = sqrt(n*n + m*m);
			if (modf(r, &intpart) == 0.f) {
				cout << n << " " << m << " " << r << endl;
			}
		}
	}
	
	return EXIT_SUCCESS;
}
