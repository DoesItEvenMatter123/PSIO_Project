#include "Including.h"
#include "Player.h"
#include "Platform.h"
#include "Enemy.h"
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
	void renderPlatform();
	void collisionWithScreen();
	void collisionWithObjects();
	void updatePlatform();
	void updateEnemies();
	void setEnemies(Platform* platform, Enemy* enemy);
	void updateEnemiesVelocity(Platform* platform, Enemy* enemy);
	void CollisionWithEnemies();
private:
	sf::RenderWindow window;
	sf::Event event;
	Player* newplayer;
	Platform* newplatform;
	Platform* newplatform1;
	Platform* newplatform2;
	Platform* newplatform3;
	Enemy* newenemy;
	std::vector<Platform*> platforms;
	std::vector<Enemy*> enemies;
	void makewindow();
	void makePlayer();
	void makePlatform();
	void makeEnemy();
	void renderEnemy();
};

