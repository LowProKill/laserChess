#pragma once




class Piece
{
public:
	Piece(char type, int location, char direction);
	
	Piece();

	char hit(char fromDirection);

	char getType();

	int getLocation();

	char getDirection();

private:

	char type;
	// firstDigit = x; secondDigit = y;
	int location;
	int locationX;
	int locationY;
	char direction;

};