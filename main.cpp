#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	for (int i = 1; i <= 100; i++) {
		answer += i;
	}
	cout << answer;
	return 0;
}