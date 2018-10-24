#pragma once




class Piece
{
public:
	// initialiation of Piece class
	Piece();

	// sets up member variables
	void start(char type, int location, char direction);

	// takes a laser blast comming from fromDirection
	// returns the new direction of the laser or 'd' for a dead piece
	char hit(char fromDirection);

	// simply returns type char for display class
	char getType();

	// simply returns location for display class
	int getLocation();

	// simply returns direction for display class
	char getDirection();

private:

	char type;
	// firstDigit = x; secondDigit = y;
	int location;
	int locationX;
	int locationY;
	char direction;

};