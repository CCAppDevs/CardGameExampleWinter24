#pragma once
#include <vector>
#include "Card.h"
#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

class Deck
{
protected:
	vector<Card*> Cards;

public:
	Deck(bool isEmpty = false);

	// shuffle, draw a card, add a card, reset
	void Shuffle();

	Card* Draw();

	void AddCard(Card* incomingCard);

	void AddCard(string rank, string suit);

	void Reset(bool shouldShuffle = false);

	void PrintContents();
};

