// Brock Ferrell
// CS2401
// November 23, 2015
// Project7

/*! 
	@file main.cc
	@brief Main function to run othello
	@author 
*/

#include "game.h"
#include "othello.h"
using namespace main_savitch_14;

/*!
	@brief 
*/
int main()
{
	Othello theGame;
	theGame.restart();
	theGame.play();
}
