#include <iostream>
using namespace std;

int main()
{
	//LoadLevel
	int World[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1,},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1,},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1,},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1,},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1,},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1,},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1,},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1,},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1,},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1,}
	};

	int PlayerX = 1;
	int PlayerY = 1;
	
	char PlayerShape = 'P';
	char Sprites[10] = { ' ', '*', };

	//Render()
	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (PlayerX == X && PlayerY == Y) {
				cout << PlayerShape;
			}
			else 
			{
				cout << Sprites[World[X][Y]];
			}
		}
		cout << "\n";
	}
	return 0;
}