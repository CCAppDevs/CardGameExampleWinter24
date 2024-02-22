#include "Deck.h"

Deck::Deck()
{
	// outer loop - suit 4
		// inner loop - rank 13

	for (int suit = 0; suit < 4; suit++) {
		string suitName = "Unknown";
		
		switch (suit) {
		case 0:
			suitName = "Hearts";
			break;
		case 1:
			suitName = "Clubs";
			break;
		case 2:
			suitName = "Diamonds";
			break;
		case 3:
			suitName = "Spades";
			break;
		default:
			break;
		}

		for (int rank = 1; rank <= 13; rank++) {
			string rankName = "Unknown";

			switch (rank) {
			case 1:
				rankName = "Ace";
				break;
			case 11:
				rankName = "Jack";
				break;
			case 12:
				rankName = "Queen";
				break;
			case 13:
				rankName = "King";
				break;
			default:
				rankName = to_string(rank);
				break;
			}

			Cards.push_back(new Card(rankName, suitName));
		}
	}
}

void Deck::Shuffle()
{
}

Card Deck::Draw()
{
	return Card("test", "test");
}

void Deck::AddCard(Card* incomingCard)
{
	Cards.push_back(incomingCard);
}

void Deck::AddCard(string rank, string suit)
{
	Cards.push_back(new Card(rank, suit));
}

void Deck::Reset(bool shouldShuffle)
{
	if (shouldShuffle) {
		cout << "Shuffling\n";
	}
	else {
		cout << "not shuffling\n";
	}
}
