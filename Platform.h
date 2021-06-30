#pragma once
#include "Including.h"
class Platform
{
private:
	float vy = 0.1;
	sf::Sprite platform_;
	sf::Texture texture;
	sf::IntRect Frame;
	sf::Clock clock;
	void setTexture();
public:
	Platform(sf::Vector2f size, sf::Vector2f position);
	~Platform();
	void Draw(sf::RenderWindow& window);
	sf::Vector2f getPosition();
	sf::FloatRect getGlobalBounds();
	void move();
};

