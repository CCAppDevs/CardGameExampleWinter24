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

int Card::GetValue()
{
	if (Rank == "Ace") {
		return 1;
	}
	else if (Rank == "Jack") {
		return 11;
	}
	else if (Rank == "Queen") {
		return 12;
	}
	else if (Rank == "King") {
		return 13;
	}
	else {
		// convert the string to a number
		return std::stoi(Rank);
	}
}

std::string Card::ToString()
{
	return Rank + " of " + Suit;
}
