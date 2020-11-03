
class Gameboard // Tablero
{
private:
	int width, height;
	int slots[8][8];
};

class King // Rey
{

}

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

class Game // Juego
{
	Gameboard gameboard;
	King king[];
	Queen queen[];
	Rook rook[2];
	Knight knight[2];
	Bishop bishop[2];
	Pawn pawns[8];
};
