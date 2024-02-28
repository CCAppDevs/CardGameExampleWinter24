#include "Deck.h"

Deck::Deck(bool isEmpty)
{

	if (isEmpty) {
		// do nothing
	}
	else {
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
		Shuffle();
	}
}

void Deck::Shuffle()
{
	// set up a random number generator
	auto rng = default_random_engine{};
	// seeding the random sequence with time to always get a different sequence
	rng.seed(time(NULL));
	// shuffle the deck using the rng
	shuffle(Cards.begin(), Cards.end(), rng);
}

Card* Deck::Draw()
{
	// empty card
	Card* theCard;

	// get a card off of the array, and set it to theCard
	theCard = Cards.back();
	Cards.pop_back();

	return theCard;
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

void Deck::PrintContents()
{
	for (int i = 0; i < Cards.size(); i++) {
		cout << i + 1 << ". " << Cards[i]->ToString() << "\n";
	}
}
