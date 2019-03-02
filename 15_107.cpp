// for example: 452 -> 4 5 2 -> 2 4 5 -> 245
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

void numToVec(vector<int>& vec, int num)
{
	while(num != 0) {
		vec.push_back(num % 10);
		num /= 10;
	}
	
	std::reverse(vec.begin(), vec.end());
}

int vecToInt(vector<int>& vec)
{
	int num{0};
	int i{1};
	
	for (auto n = vec.rbegin(); n != vec.rend(); n++) {
		num += *n * i;
		i *= 10;
	}
	
	return num;
}

int main()
{
	int n{7592};
	vector<int> v_n;
	
	numToVec(v_n, n);
	std::sort(v_n.begin(), v_n.end());
	
	int min_n = vecToInt(v_n);
	
	std::cout << min_n;
	
	return 0;
}
