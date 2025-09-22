#include <iostream>
using namespace std;

int main()
{
	int answer1 = 0;
	int answer2 = 0;
	for (int i = 1; i <= 100; i++)
	{
		answer1 += i;
	}
	cout << answer1 << endl;

	for(int i = 1; i<=100; i++) 
	{
		if (i % 3 == 0)
		{
			answer2 += i;
		}
	}
	cout << answer2;
	return 0;
}