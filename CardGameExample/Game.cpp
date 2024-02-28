#include "Game.h"

Game::Game()
{
	isPlaying = false;
	Chips = 100;
	MinBet = 5;

	Player = new Hand();
	Dealer = new Hand();
	MyDeck = new Deck();
}

void Game::Start()
{
	isPlaying = true;

	while (isPlaying) {
		// reset the frame
		system("cls");
		int choice = -1;

		// Display menu
		DisplayMenu();

		// print the hand
		DisplayHand();

		// ask user for their choice
		cout << "What would you like to do? ";
		cin >> choice;

		Card* card;

		switch (choice) {
		case 1:
			card = MyDeck->Draw();
			cout << "Drawing a card: " << card->ToString() << "\n";
			Player->AddCard(card);
			break;
		case 0:
			cout << "Exiting...\n";
			isPlaying = false;
			break;
		default:
			cout << "Invalid Choice\n";
			break;
		}

	}
}

void Game::DisplayMenu()
{
	cout << "----- Main Menu -----\n";
	cout << "1. Draw a card.\n";
	cout << "0. Exit\n";
	cout << "\n\n";
}

void Game::DisplayHand()
{
	cout << "Your Hand: \n";
	Player->PrintContents();
	cout << "\n";
	cout << "Total Value: " << Player->GetTotal() << "\n";
}

void Game::DisplayDealerHand()
{
}
