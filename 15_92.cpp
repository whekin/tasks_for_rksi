// ToDo: write up the 40th number of Fibonacci

#include <iostream>

template <class T>
int calcANumOfFibonacci(T num)
{
	if (num <= 2)
		return 1;
	return calcANumOfFibonacci(num - 2) + calcANumOfFibonacci(num - 1);
}

int main()
{
	
	std::cout << calcANumOfFibonacci(40);
}

