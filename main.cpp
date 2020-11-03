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

class Gameboard // Tablero
{
public:
	Gameboard(int iWidth = 8, int iHeight = 8)
	{
		int slots[iWidth][iHeight];
	}
};

class King // Rey
{
public:
	King()
	{
	}
};

class Queen // Reina
{
public:
	Queen()
	{
		int points = 9;
	}
};

class Rook // Torre
{
public:
	Rook()
	{
		int points = 5;
	}
};

class Knight // Caballo
{
public:
	Knight()
	{
		int points = 3;
	}
};

class Bishop // Alfíl
{
public:
	Bishop()
	{
		int points = 3;
	}
};

class Pawn //Peón
{
public:
	Pawn()
	{
		int points = 1;
	}
};

void cleanScreen(int i = 10)
{
	if (i != 0)
	{
		cout << endl;
		i--;
		cleanScreen(i);
	}
}

int game(int iGameboards = 1, int iKings = 1, int iQueens = 1, int iRooks = 2, int iKnights = 2, int iBishops = 2, int iPawns = 8)
{
	cout << "creating game" << endl;
	Gameboard gameboard[iGameboards];
	King kings[iKings];
	Queen queens[iQueens];
	Rook rooks[iRooks];
	Knight knights[iKnights];
	Bishop bishops[iBishops];
	Pawn pawns[iPawns];
	cleanScreen();
	cout << "Move" << endl;
	return 1;
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
