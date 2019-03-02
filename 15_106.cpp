// find friend numbers in [a;b]
// for example: 220 & 284
#include <iostream>
#include <vector>

using namespace std;

template <class T>
void calcDivisors(vector<T>& divisors, unsigned long num)
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
	unsigned long a{1}, b{30000};
	
	for (unsigned long i = a; i < b; i++) {
		vector<unsigned long> divisors_i;
		calcDivisors(divisors_i, i);
		unsigned long sum_i = sumOfVector(divisors_i);
		
		for (unsigned long j = i; j < b; j++) {
			vector<unsigned long> divisors_j;
			calcDivisors(divisors_j, j);
			unsigned long sum_j = sumOfVector(divisors_j);

			if (sum_i == j && sum_j == i) {
				cout << i << " & " << j << endl;
				break;
			}
			
			// 0.3???
			if (j % i > i * 0.3)
				break;
				
		}
	}
	
	return EXIT_SUCCESS;
}

