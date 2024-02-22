#pragma once
#include <vector>
#include "Card.h"
#include <iostream>

using namespace std;

class Deck
{
private:
	vector<Card*> Cards;

public:
	Deck();

	// shuffle, draw a card, add a card, reset
	void Shuffle();

	Card Draw();

	void AddCard(Card* incomingCard);

	void AddCard(string rank, string suit);

	void Reset(bool shouldShuffle = false);
};

