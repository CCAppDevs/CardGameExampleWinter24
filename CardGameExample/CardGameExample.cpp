#include <iostream>
#include "Deck.h"

using namespace std;

int main()
{
	Deck myDeck = Deck();
	Deck hand = Deck(true);

	bool isRunning = true;

	while (isRunning) {
		// run the game
		int choice = -1;

		cout << "----- Main Menu -----\n";
		cout << "1. Draw a card.\n";
		cout << "0. Exit\n";
		cout << "\n\n";
		
		// print the hand of cards
		cout << "Your Hand: \n";
		hand.PrintContents();
		cout << "\n";

		// ask user for their choice
		cout << "What would you like to do? ";
		cin >> choice;

		Card* card;

		switch (choice) {
		case 1:
			card = myDeck.Draw();
			cout << "Drawing a card: " << card->ToString() << "\n";
			hand.AddCard(card);
			break;
		case 0:
			cout << "Exiting...\n";
			isRunning = false;
			break;
		default:
			cout << "Invalid Choice\n";
			break;
		}

	}
}
