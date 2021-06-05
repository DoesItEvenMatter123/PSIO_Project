#include "Including.h"
#include "Player.h"
#pragma once
class Game
{
public:
	Game();
	~Game();
	sf::RenderWindow& getWindow();
	void update();
	void render();
	void updatePlayer();
	void renderPlayer();
	void collision();
private:
	sf::RenderWindow window;
	sf::Event event;
	Player* newplayer;
	void makewindow();
	void makePlayer();
};

