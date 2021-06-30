#pragma once
#include "Including.h"
class Enemy
{
public:
	Enemy();
	~Enemy();
	void Draw(sf::RenderWindow& window);
	void move();
	void setPosition(float x, float y);
	void setVelocity();
	sf::FloatRect getGlobalBounds();
private:
	sf::Sprite enemy;
	sf::IntRect Frame;
	sf::Texture enemyTexture;
	sf::Clock clock;
	void setTexture();
	float vy;
	float vx;
};

