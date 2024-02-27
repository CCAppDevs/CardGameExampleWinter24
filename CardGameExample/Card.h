#pragma once
#include <string>

class Card
{
public:
	Card(std::string rank, std::string suit);

	std::string GetRank();
	std::string GetSuit();
	int GetValue();

	std::string ToString();

private:
	std::string Rank;
	std::string Suit;
};

