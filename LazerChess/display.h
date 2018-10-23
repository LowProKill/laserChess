#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include <iostream>


class Display
{
public:

	Display();

	void add(char type, int location, char direction, bool colour);

	void draw();

	int click();

private:

	int windowSize = 800;
	bool closed = false;
	
	sf::Clock clock;
	sf::Time elapsed;

	sf::Texture boardTexture;
	sf::Texture whiteText[5];
	sf::Texture blackText[5];

	sf::Texture preiviousMove;
	sf::Texture availableMove;



};