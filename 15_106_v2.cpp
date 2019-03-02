// with help from the internet...
#include <iostream>
#include <vector>

template <class T>
T sumOfDivisors(T n)
{
	T sum{1},
	  beg{2},
	  d{1},
	  i;
	
	// if 2n + 1
	if (n & 1) {
		d = 2;
		beg = 3;
	}
	
	for (i = beg; i * i < n; i += d) {
		if (n % i == 0)
			sum += i + n / i;
	}
	
	if (i * i == n)
		sum += i;
	
	return sum;
}

int main()
{
	long
		a{2}, 
		b{1000000},
		size;
	size = b - a + 1;
	
	std::vector<long> sums(size);
	
	for (int i{0}; i < size; i++)
		sums[i] = sumOfDivisors(i + a);
	
	for (int i{0}; i < size; i++) {
		if (
			sums[i] >= a &&
			sums[i] <= b &&
			sums[sums[i] - a] == i + a &&
			i + a < sums[i])
			std::cout << i + a << " " << sums[i] << std::endl;
	}
	
	return 0;
}
