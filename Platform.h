#pragma once
#include "Including.h"
class Platform
{
private:
	sf::Sprite platform_;
	sf::Texture texture;
	sf::IntRect Frame;
	void setTexture();
	void makePlatform();
public:
	Platform(sf::Vector2f size, sf::Vector2f position);
	~Platform();
	void Draw(sf::RenderWindow& window);
};

