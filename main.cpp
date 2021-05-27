#include "Including.h"
#include "Game.h"
#include "Player.h"

int main()
{
	Game newgame;
	while (newgame.getWindow().isOpen())
	{
		newgame.update();
		newgame.render();
	}
}