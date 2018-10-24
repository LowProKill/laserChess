#pragma once




class Piece
{
public:
	// initialiation of Piece class
	// sets member type location and direction
	Piece(char type, int location, char direction);
	
	// unsure if this will remain
	// default constructer
	// also an overload of the function above
	Piece();

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