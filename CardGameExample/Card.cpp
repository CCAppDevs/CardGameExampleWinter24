#include "Card.h"

Card::Card(std::string rank, std::string suit)
{
	Rank = rank;
	Suit = suit;
}

std::string Card::GetRank()
{
	return Rank;
}

std::string Card::GetSuit()
{
	return Suit;
}

std::string Card::ToString()
{
	return Rank + " of " + Suit;
}
