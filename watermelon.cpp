/*
	watermelon splitting
	given the weight of a watermelon, can it be split into two positive, even weights?

	input: standard, weight of a watermelon
	output: standard, indicates whether watermelon can be split

	example:
	32
	YES
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n > 2 && n % 2 == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}

