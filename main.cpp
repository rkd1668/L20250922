#include <iostream>
using namespace std;

int main()
{
	int Count = 0;
	cin >> Count;

	for (int i = 0; i < Count; i++)
	{
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < Count - i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}