// find all numbers that less than n and all sum of all their divisors equels the number
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

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
	
	for (auto& i : vec) {
		sum += i;
	}
	
	return sum;
}

void calcAbsolutelyNumbers(vector<int>& anumbers, int toNum)
{
	for (int i{6}; i <= toNum; i++) {
		vector<int> divisors;
		calcDivisors(divisors, i);
		int sum = sumOfVector(divisors);
		
		if (sum == i)
			//anumbers.push_back(i);
			cout << i << endl;
	}
}

int main()
{
	vector<int> anumbers;
	calcAbsolutelyNumbers(anumbers, 100000);
	
	// show all
	for (auto& i : anumbers)
		cout << i << endl;

	return EXIT_SUCCESS;
}

