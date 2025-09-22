#include <iostream>
#include <conio.h>

using namespace std;

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

bool bIsRunning = true;

int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

//���(Mapping)
char Sprites[10] = { ' ', '*', };

int KeyCode;

void Input()
{
	//Input
	KeyCode = _getch();
}

bool Predict(int NewX, int NewY)
{
	if (World[NewY][NewX] == 0)
	{
		return true;
	}

	return false;
}

void Process()
{
	//Process
	if (KeyCode == 'w')
	{
		if (Predict(PlayerX, PlayerY - 1))
		{
			PlayerY--;
		}
	}
	else if (KeyCode == 's')
	{
		if (Predict(PlayerX, PlayerY + 1))
		{
			PlayerY++;
		}
	}
	else if (KeyCode == 'a')
	{
		if (Predict(PlayerX - 1, PlayerY))
		{
			PlayerX--;
		}
	}
	else if (KeyCode == 'd')
	{
		if (Predict(PlayerX + 1, PlayerY))
		{
			PlayerX++;
		}
	}
	else if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
}

void Render()
{
	//Render()
	system("cls");
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
}

int main()
{
	//frame, deltaseconds
	while (bIsRunning)
	{
		Input();
		Process();
		Render();
	}
	return 0;
}