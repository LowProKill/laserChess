#pragma once
#include "piece.h"
#include "display.h"

class board
{
public:
	board();

	bool whiteMove();

	bool blackMove();

	bool newGame();

	bool saveGame();

private:
	 


	Display display;
	Piece whitePieces[16];
	Piece blackPieces[16];
};