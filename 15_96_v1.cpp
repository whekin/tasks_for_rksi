// ToDo: find the Greatest Common Divisor (GCD) of three numbers
// Let's implement algorithm of Euclid
#include <iostream>

template <class T>
T GCD(T num1, T num2)
{
	// num1 have to be more than num2
	if (num1 < num2)
		std::swap(num1, num2);
	
	int r_n, r_prev, r_prevprev;
	r_n = num1 % num2;
	r_prev = num2;
	
	while (r_n != 0) {
		r_prevprev = r_prev;
		r_prev = r_n;
		r_n = r_prevprev % r_prev;
	}
	
	return r_prev;
}

template <class T>
T GCD_3(T num1, T num2, T num3)
{
	return GCD(GCD(num1, num2), num3);
}

int main()
{
	std::cout << GCD_3(12, 8, 50);
}

