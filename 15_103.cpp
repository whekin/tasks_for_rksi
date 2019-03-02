// find the biggest sum of devisors of a number from 1 to 10000
#include <iostream>
#include <vector>

using std::vector;

// returns vector that v[n*2] * v[n*2 + 1] = n
void calcDivisors(vector<int>& divisors, int num)
{
	divisors.push_back(1);
	// if i{1} then the result includes 1 and the number, if i{2} then vise versa.
	for (int i{2}; i * i <= num; i++) {
		if (num % i == 0) {
			divisors.push_back(i);
		//	if (i * i != num) // don't repeat squere of the number
			divisors.push_back(num / i);
		}
	}
}


template <class T>
T sumOfVector(vector<T>& vec)
{
	T sum{0};
	
	for (auto& i : vec)
		sum += i;
	
	return sum;
}


int main()
{
	int max{0};
	int num{0};
	
	for (int i{2}; i <= 10000; i++) {
		vector<int> divisors;
		calcDivisors(divisors, i);
		int sum = sumOfVector(divisors);
		if (sum > max) {
			max = sum;
			num = i;
		}
	}
	
	std::cout << "the num having the max sum of divisors is " << num << "(" << max << ")" << std::endl;
	
	return EXIT_SUCCESS;
}
