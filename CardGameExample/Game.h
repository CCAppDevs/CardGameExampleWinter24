#pragma once
#include "Hand.h"
#include <iostream>

using namespace std;

class Game
{
public:
	Game(); //setup

	void Start();
	void DisplayMenu();
	void DisplayHand();
	void DisplayDealerHand();
	void TakeTurn();
	bool CheckIsWinning();
	void TakeDealerTurn();
	bool CanDealerPlay();

private:
	int Chips;
	int MinBet;

	Deck* MyDeck;
	Hand* Player;
	Hand* Dealer;

	bool isPlaying;
};

