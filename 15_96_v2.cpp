// ToDo: find the Greatest Common Divisor (GCD) of three numbers
// Let's implement algorithm of Euclid
#include <iostream>

template <class T>
T gcd(T num1, T num2)
{
	// num1 have to be more than num2
	if (num1 < num2)
		std::swap(num1, num2);
	
	if (num2 == 0)
		return num1;
	
	return gcd(num2, num1 % num2);
}

template <class T>
T gcd_3(T num1, T num2, T num3)
{
	return gcd(gcd(num1, num2), num3);
}

int main()
{
	std::cout << gcd(40, 80);
}

