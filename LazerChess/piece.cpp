#include "piece.h"

Piece::Piece(char type, int location, char direction)
{

}

Piece::Piece()
{

}

char Piece::hit(char fromDirection)
{
	return fromDirection;
}

char Piece::getType()
{
	return type;
}

int Piece::getLocation()
{
	return location;
}

char Piece::getDirection()
{
	return direction;
}
