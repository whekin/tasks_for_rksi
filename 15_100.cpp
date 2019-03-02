// find all rectangles that have positive integer side and the squre of them is q
#include <iostream>
#include <vector>

using std::vector;

// returns vector that v[n*2] * v[n*2 + 1] = n
void calcDivisors(vector<int>& arr, int num)
{
	// if i{1} then the result includes 1 and the number, if i{2} then vise versa.
	for (int i{1}; i * i <= num; i++) {
		if (num % i == 0) {
			arr.push_back(i);
		//	if (i * i != num) // don't repeat squere of the number
			arr.push_back(num / i);
		}
	}
}

void calcNaturalSidesOfARectangle(vector<vector<int>>& arr, int square)
{
	int a{square},
		b{1};
	
	vector<int> divisors;
	calcDivisors(divisors, square);
	
	for (int i{0}; i < divisors.size(); i += 2) {
		vector<int> ab = {divisors[i], divisors[i + 1]};
		arr.push_back(ab);
	}
}

int main()
{
	vector<vector<int>> sides;
	
	calcNaturalSidesOfARectangle(sides, 8084);
	
	for (auto& side : sides)
		std::cout << side[0] << " " << side[1] << std::endl;
}
