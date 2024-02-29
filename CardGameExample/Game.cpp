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

	Player->AddCard(MyDeck->Draw());
	Dealer->AddCard(MyDeck->Draw());
	Player->AddCard(MyDeck->Draw());
	Dealer->AddCard(MyDeck->Draw());

	while (isPlaying) {
		// reset the frame
		system("cls");

		// Display menu
		DisplayMenu();

		// print the players hand
		DisplayHand();

		// print the dealers hand
		DisplayDealerHand();

		TakeTurn();
	}
}

void Game::DisplayMenu()
{
	cout << "----- Main Menu -----\n";
	cout << "1. Hit.\n";
	cout << "2. Stay.\n";
	cout << "0. Exit\n";
	cout << "\n\n";
}

void Game::DisplayHand()
{
	cout << "Your Hand: \n";
	Player->PrintContents();
	cout << "Total Value: " << Player->GetTotal() << "\n";
	cout << "\n";
}

void Game::DisplayDealerHand()
{
	cout << "Dealers Hand: \n";
	// TODO: add method to hand class to hide one card of the dealers hand
	Dealer->PrintContents();
	cout << "Total Value: " << Dealer->GetTotal() << "\n";
	cout << "\n";
}

void Game::TakeTurn()
{
	int choice = -1;

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
	case 2:
		cout << "Staying at " << Player->GetTotal() << "\n";
		// dealer takes its turns
			// check for win condition
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

bool Game::CheckIsWinning()
{
	bool isWinning = true;

	if (Player->GetTotal() <= Dealer->GetTotal()) {
		isWinning = false;
	}

	if (Player->GetTotal() > 21) {
		isWinning = false;
	}

	return isWinning;
}

void Game::TakeDealerTurn()
{
	// TODO: check if the player has a blackjack

	while (CanDealerPlay()) {
		// draw cards, do stuff
	}
}

bool Game::CanDealerPlay()
{
	return Dealer->GetTotal() >= 17;
}
