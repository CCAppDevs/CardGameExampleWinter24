#pragma once
#include "Deck.h"

class Hand : public Deck
{
public:
	Hand(bool isEmpty = true);
	int GetTotal();
};

