// find all perfect numbers that less than n
// 2^(p-1) * (2^p - 1) is perfect number if 2^p - 1 is a prime number

// ToDo using boost/bigint instead of long long
#include <iostream>
#include <vector>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>

using std::vector;
using std::cout;
using std::endl;
using std::pow;

namespace mp = boost::multiprecision;

// ToDo: implement the method of Miller-Rabin
template <class T>
bool isPrime(T num)
{
	for (unsigned long i{2}; i * i < num; i++) {
		if (num % i == 0)
			return false;
	}
	
	return true;
}


// Eratosfen (with help from wikipedia)
template <class T>
void calcPrimes(vector<T>& primes, int n)
{
	vector<bool> prime(n + 1, true);
	prime[0] = prime[1] = false;
	
	for (int i{2}; i * i <= n; i++) { // valid for n < 46340^2 = 2147395600
		if (prime[i])
			for (int j = i + i; j <= n; j += i)
				prime[j] = false;
	}
	
	for (int i{0}; i <= n; i++) {
		if (prime[i] == true)
			primes.push_back(i);
	}
	
}

void calcPerfectNumbers(vector<mp::cpp_int>& anumbers, mp::cpp_int toNum)
{
	mp::cpp_int x;
	mp::cpp_int num;
	mp::cpp_int big_2 = (2);
	
	vector<int> primes;
	calcPrimes(primes, 150);
	
	// p is always prime number and (2^p - 1) too.
	for(auto& p : primes) {
		x = mp::pow(big_2, p) - 1;
		
		if (isPrime(x)) {
			num = mp::pow(big_2, p - 1) * x;
			
			if (num > toNum)
				break;
			
			anumbers.push_back(num);
		}
	}
}

int main()
{
	vector<mp::cpp_int> anumbers;
	mp::cpp_int num(100000000000u);
	calcPerfectNumbers(anumbers, num);

	// show all
	for (auto& i : anumbers)
		cout << i << endl;

	return EXIT_SUCCESS;
}

