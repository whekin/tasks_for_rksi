

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
