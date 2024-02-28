#include <iostream>
#include "Deck.h"
#include "Hand.h"
#include "Game.h"

using namespace std;

int main()
{
	Game* game = new Game();

	game->Start();
}
