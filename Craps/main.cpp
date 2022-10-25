//**********************************************************************
// File name:			main.cpp 
// Author:
// Date:
// Class:
// Assignment:
// Purpose:				
// Hours:
//**********************************************************************

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

const int HOUSE_BANK = 10000;

// Craps Part A function prototypes
void drawHeading (string title, char borderChar);
int getPlayerBuyin (string prompt, int houseBank);
int getPlayerBet (string prompt, int playerChips);
void drawDieFace (int face);
void drawDiceFace (int face1, int face2);
int rollDie ();
int rollDice (int &dieOne, int &dieTwo);

/***********************************************************************
Function:			main

Description:	Driver for Craps game (Part A)

Parameters:		None

Returned:			exit status
***********************************************************************/

/******************  DO NOT CHANGE MAIN !!!!!!!!!  ********************/
int main () {
	const string GAME_TITLE = "Let's Play Craps",
		BUY_IN_PROMPT = "Enter Player Buy-In: $",
		BET_PROMPT = "Enter Player Bet: ";
	const char BORDER_CHARACTER = '*';

	int houseMoney = HOUSE_BANK,
		playerChips,
		playerBet,
		dieOne, dieTwo;

// srand (static_cast <unsigned> (time (static_cast <time_t*> (NULL))));
	srand (0); // creates the same pseudo-random sequence
						 // 0 is (3, 4) on first roll, 1 is a (6, 6) on first roll

	drawHeading (GAME_TITLE, BORDER_CHARACTER);
	cout << endl;

	playerChips = getPlayerBuyin (BUY_IN_PROMPT, HOUSE_BANK);
	cout << endl;

	drawHeading (GAME_TITLE, BORDER_CHARACTER);
	cout << endl;

	cout << "House Bank: $" << houseMoney + playerChips << endl;
	cout << "Player Chips: " << playerChips << endl << endl;

	playerBet = getPlayerBet (BET_PROMPT, playerChips);
	cout << endl;

	drawHeading (GAME_TITLE, BORDER_CHARACTER);
	cout << endl;

	rollDice (dieOne, dieTwo);
	drawDiceFace (dieOne, dieTwo);

	return EXIT_SUCCESS;
}