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
};

class Gameboard // Tablero
{
private:
	void create;

public:
	int slots[64];
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

void interface()
{
	char command;
	while (true)
	{
		cou << "What do you want to do now?\n\t[P]lay\n\t[Q]uit\n\t[S]ettings " << endl;
		cin >> command;
		command = toupper(command);
		switch (command)
		{
		case 'P':
			break;
		case 'Q':
			return 0;
			break;
		case 'S':
			break;

		default:
			cout << "not recognizable command" << endl;
			break;
		}
	}
}

int main()
{
	interface();
	return 0;
}
