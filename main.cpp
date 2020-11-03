#include <iostream>
#include <iostream>

//data structures
// #include <vector>
// #include <tuple>
// #include <array>
// #include <stack>

//mors army
// #include <cstdlib> //program control, sort, rand nums, search & dynamic memory allocation
// #include <string>
// #include <stdlib.h> //srand, rand
// #include <cmath>

//c++20
// #include <format>  //format([object Object], )
// #include <compare> //(a <=> b) returns an obj susch that < 0 || == 0 || > 0

using namespace std;

class Game // Juego
{

	void createGameboard(int, int);
};
void Game::createGameboard(int x, int y)
{
}

class Gameboard // Tablero
{
private:
	int width, height;
	int slots[8][8];
};

class Queen // Reina
{
	int points = 9;
};

class Rook // Torre
{
	int points = 5;
};

class Knight // Caballo
{
	int points = 3;
};

class Bishop // Alfíl
{
	int points = 3;
};

class Pawn //Peón
{
	int points = 1;
};

int game()
{
}

void cleanScreen(int i)
{
	if (i != 0)
	{
		cout << endl;
		i--;
		cleanScreen(i);
	}
}

int main()
{
	char command;
	int result;
	while (true)
	{
		cout << "What do you want to do now?" << endl;
		cout << "\t[P]lay" << endl;
		cout << "\t[S]ettings" << endl;
		cout << "\t[Q]uit" << endl;
		cin >> command;
		command = toupper(command);
		switch (command)
		{
		case 'P':
			result = game();
			if (result) //win
			{
				cout << "You won" << endl;
			}
			else if (result == 0) //Tie
			{
				cout << "Tie" << endl;
			}
			else
			{
				cout << "You lost" << endl;
			}
			break;
		case 'Q':
			return 0;
			break;
		case 'S':
			// settings();
			break;

		default:
			cout << "not recognizable command" << endl;
			break;
		}
	}

	return 0;
}
