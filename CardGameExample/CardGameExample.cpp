#include <iostream>
#include "Deck.h"

using namespace std;

int main()
{
	Deck myDeck = Deck();

	Card* theCard = new Card("Ace", "Spades");

	myDeck.AddCard(theCard);
}
