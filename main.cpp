#include <iostream>
using namespace std;
void swap(char tabla[8][8], int x, int y, int a, int b){
    int temp = tabla[x][y];
    tabla[x][y] = tabla[a][b];
    tabla[a][b] = temp;
}
void tablero(char m[8][8]){
    cout<< "-1     0       1       2       3       4       5       6      7"<<endl;
    cout<< "___|_______|_______|_______|_______|_______|_______|_______|_______"<<endl;
    cout<< "   |       |       |       |       |       |       |       |       "<<endl;
    cout<< "0  |   "<<m[0][0]<<"   |   "<<m[0][1]<<"   |   "<<m[0][2]<<"   |   "<<m[0][3]<<"   |   "<<m[0][4]<<"   |   "<<m[0][5]<<"   |   "<<m[0][6]<<"   |   "<<m[0][7]<<" "<<endl;
    cout<< "___|_______|_______|_______|_______|_______|_______|_______|_______"<<endl;
    cout<< "   |       |       |       |       |       |       |       |       "<<endl;
    cout<< "1  |   "<<m[1][0]<<"   |   "<<m[1][1]<<"   |   "<<m[1][2]<<"   |   "<<m[1][3]<<"   |   "<<m[1][4]<<"   |   "<<m[1][5]<<"   |   "<<m[1][6]<<"   |   "<<m[1][7]<<" "<<endl;
    cout<< "___|_______|_______|_______|_______|_______|_______|_______|_______"<<endl;
    cout<< "   |       |       |       |       |       |       |       |       "<<endl;
    cout<< "2  |   "<<m[2][0]<<"   |   "<<m[2][1]<<"   |   "<<m[2][2]<<"   |   "<<m[2][3]<<"   |   "<<m[2][4]<<"   |   "<<m[2][5]<<"   |   "<<m[2][6]<<"   |   "<<m[2][7]<<" "<<endl;
    cout<< "___|_______|_______|_______|_______|_______|_______|_______|_______"<<endl;
    cout<< "   |       |       |       |       |       |       |       |       "<<endl;
    cout<< "3  |   "<<m[3][0]<<"   |   "<<m[3][1]<<"   |   "<<m[3][2]<<"   |   "<<m[3][3]<<"   |   "<<m[3][4]<<"   |   "<<m[3][5]<<"   |   "<<m[3][6]<<"   |   "<<m[3][7]<<" "<<endl;
    cout<< "___|_______|_______|_______|_______|_______|_______|_______|_______"<<endl;
    cout<< "   |       |       |       |       |       |       |       |       "<<endl;
    cout<< "4  |   "<<m[4][0]<<"   |   "<<m[4][1]<<"   |   "<<m[4][2]<<"   |   "<<m[4][3]<<"   |   "<<m[4][4]<<"   |   "<<m[4][5]<<"   |   "<<m[4][6]<<"   |   "<<m[4][7]<<" "<<endl;
    cout<< "___|_______|_______|_______|_______|_______|_______|_______|_______"<<endl;
    cout<< "   |       |       |       |       |       |       |       |       "<<endl;
    cout<< "5  |   "<<m[5][0]<<"   |   "<<m[5][1]<<"   |   "<<m[5][2]<<"   |   "<<m[5][3]<<"   |   "<<m[5][4]<<"   |   "<<m[5][5]<<"   |   "<<m[5][6]<<"   |   "<<m[5][7]<<" "<<endl;
    cout<< "___|_______|_______|_______|_______|_______|_______|_______|_______"<<endl;
    cout<< "   |       |       |       |       |       |       |       |       "<<endl;
    cout<< "6  |   "<<m[6][0]<<"   |   "<<m[6][1]<<"   |   "<<m[6][2]<<"   |   "<<m[6][3]<<"   |   "<<m[6][4]<<"   |   "<<m[6][5]<<"   |   "<<m[6][6]<<"   |   "<<m[6][7]<<" "<<endl;
    cout<< "___|_______|_______|_______|_______|_______|_______|_______|_______"<<endl;
    cout<< "   |       |       |       |       |       |       |       |       "<<endl;
    cout<< "7  |   "<<m[7][0]<<"   |   "<<m[7][1]<<"   |   "<<m[7][2]<<"   |   "<<m[7][3]<<"   |   "<<m[7][4]<<"   |   "<<m[7][5]<<"   |   "<<m[7][6]<<"   |   "<<m[7][7]<<" "<<endl;
    cout<< "___|_______|_______|_______|_______|_______|_______|_______|_______"<<endl;
}
void cambio(char tabla[8][8], int x = 0, int y = 0, int a = 0, int b = 0){
    cout<<"Ingrese"<<endl;
    cin>>x>>y;
    cout<<"Ingrese cambio"<<endl;
    cin>>a>>b;
    swap(tabla,x,y,a,b);
    tablero(tabla);
}

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
	char m[8][8]={{'e','h','c','k','q','c','h','e'},{'s','s','s','s','s','s','s','s'},
				{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},
				{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},
				{'e','h','c','k','q','c','h','e'},{'s','s','s','s','s','s','s','s'}};
				
    tablero(m);
    cambio(m);
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
