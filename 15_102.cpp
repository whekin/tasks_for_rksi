// we have n. find x, y, z so as to x^2 + y^2 + z^2 = n
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x, y, z, n, max;
	n = 1000000;
	max = ceil(sqrt(n - 2));
		
	for (int i = 1; i <= max; i++) {
		for (int j = i; j <= max; j++) {
			for (int k = j; k <= max; k++) {
				int sum{i*i + j*j + k*k};
				if (sum > n)
					break;
				if (n == sum)
					cout << i << " " << j << " " << k << "  " << endl;
			}
		}
	}
	
	return EXIT_SUCCESS;
}
