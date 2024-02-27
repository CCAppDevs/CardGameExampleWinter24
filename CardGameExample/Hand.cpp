#include "Hand.h"

Hand::Hand(bool isEmpty) : Deck(isEmpty)
{

}

int Hand::GetTotal()
{
	int total = 0;

	// we want to loop over each card and get the value, then add it to our total
	for (int i = 0; i < Cards.size(); i++) {
		total = total + Cards[i]->GetValue();
	}

	return total;
}
