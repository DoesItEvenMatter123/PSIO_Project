#include "Including.h"
#include "Player.h"
#include "Platform.h"
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
	Platform* newplatform;
	void makewindow();
	void makePlayer();
};

