#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include <iostream>


class Display
{
public:

	// initialazation function for Display class
	Display();

	// adds a piece to the draw buffer pieces type, location, direction, and colour are passed
	// type is a char
	// location is a little strange
	//		the 10s place on location == x
	//		the ones place == y;
	// direction can be 'l', 'r', 'u', 'd'
	void add(char type, int location, char direction, bool colour);

	// draws everyting added to draw buffer
	// clears draw buffer
	void draw();

	// returns the location of the click in the same style that location is input
	// in add
	int click();

private:

	int windowSize = 800;
	bool closed = false;
	
	sf::Clock clock;
	sf::Time elapsed;

	sf::Texture boardTexture;
	sf::Texture whiteText[5];
	sf::Texture blackText[5];

	sf::Texture laserText[3];
	sf::Texture hit[4];
	


	sf::RenderWindow window;
	sf::Sprite mySprite;
	sf::Sprite board;



};