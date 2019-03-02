// ToDo: true if the left and the right side of a number are a Palindrome

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

template <class T>
int calcNumOf(T num)
{
	int counter{0};
	
	while(num != 0) {
		num /= 10;
		counter++;
	}
	
	return counter;
}

template <class T>
bool isPalindrom(T num)
{
	// convert to an array
	
	vector<T> arr_num;
	
	
	
	for(int i{0};; i++) {
		int digit = num / (int)(pow(10, i)) % 10;
		if (digit == 0) break;
		arr_num.push_back(digit);
	}
	
	int d = 0; // delta
	
	while(d < calcNumOf(num) / 2) {
		
		if (arr_num[d] != arr_num[arr_num.size() - d - 1])
			return false;
		d++;
	}
	
	return true;
}

int main()
{
	int num{1234321};
	
	bool isItPolidrom = isPalindrom(num);
	
	switch(isItPolidrom) {
		case true:
			cout << "The number is a palindrom.";
			break;
		case false:
			cout << "The number is NOT a palindrom!";
			break;
	}
	
	return EXIT_SUCCESS;
}

