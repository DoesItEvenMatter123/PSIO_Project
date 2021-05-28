#include "Including.h"
#pragma once

class Player
{
public:
	Player();
	~Player();
	void update();
	void render(sf::RenderTarget& target);
	void movePlayer();
	void animate();
private:
	sf::Sprite player_;
	sf::Texture texture;
	sf::IntRect Frame;
	sf::Clock clock;
	int Movement;
	float velocity_x = 0.5;
	float velocity_y = 0.5;
	void makePlayer();
	void setTexture();
	void startAnimation();
	void position();
};

