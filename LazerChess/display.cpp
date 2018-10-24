#include "display.h"
#include <Windows.h>

Display::Display()
{
	sf::Texture splash;
	sf::VideoMode desktop = sf::VideoMode().getDesktopMode();
	windowSize = sf::VideoMode::getDesktopMode().height;
	sf::Sprite splashSprite;
	window.create(desktop, "Laser Chess", sf::Style::Fullscreen);

	//===========================================================

	if (!whiteText[0].loadFromFile("textures/whitePiece0.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!whiteText[1].loadFromFile("textures/whitePiece1.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!whiteText[2].loadFromFile("textures/whitePiece2.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!whiteText[3].loadFromFile("textures/whitePiece3.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!whiteText[4].loadFromFile("textures/whitePiece4.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}

	//===========================================================

	if (!blackText[0].loadFromFile("textures/blackPiece0.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!blackText[1].loadFromFile("textures/blackPiece1.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!blackText[2].loadFromFile("textures/blackPiece2.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!blackText[3].loadFromFile("textures/blackPiece3.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!blackText[4].loadFromFile("textures/blackPiece4.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	
	//===========================================================

	if (!laserText[0].loadFromFile("textures/laserText0.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!laserText[1].loadFromFile("textures/laserText1.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!laserText[2].loadFromFile("textures/laserText2.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!boardTexture.loadFromFile("textures/board.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}
	if (!splash.loadFromFile("textures/splash.png"))
	{
		ShowWindow(GetConsoleWindow(), SW_RESTORE);
		printf("could not find texture\n");
	}

	//===========================================================

	board.setTexture(boardTexture);
	board.setPosition(0, 0);
	board.setScale(windowSize / 1000.0, windowSize / 1000.0);

	splashSprite.setTexture(splash);
	window.clear();
	window.draw(splashSprite);
	window.display();


}

void Display::add(char type, int location, char direction, bool colour)
{
	int x = (windowSize / 10.0) * (location / 10);
	int y = (windowSize / 10.0) * (location % 10);

	//switch (type)
	//{
	//	

	//default:

	//}

	mySprite.setPosition(x, y);
	mySprite.setScale((windowSize / 10.0 / 256.0), (windowSize / 10.0 / 256.0));
	window.draw(mySprite);
}

void Display::draw()
{
	window.display();
	window.clear();
	window.draw(board);
}

int Display::click()
{
	return 0;
}