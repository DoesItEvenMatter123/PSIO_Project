#include "Including.h"
#include "Crown.h"

Crown::Crown()
{
	setTexture();
	crown.setScale(2, 2);
	vy = 118;
}

Crown::~Crown()
{

}

void Crown::setTexture()
{
	if (!crownTexture.loadFromFile("crown.png"))
	{
		std::cout << "Error";
	}
	crown.setTexture(crownTexture);
	Frame = sf::IntRect(0, 80, 80, 80);
	crown.setTextureRect(Frame);
}

void Crown::Draw(sf::RenderWindow& window)
{
	window.draw(crown);
}

void Crown::move()
{
	crown.move(0, vy * clock.getElapsedTime().asSeconds());
	clock.restart();
}

sf::FloatRect Crown::getGlobalBounds()
{
	return crown.getGlobalBounds();
}

void Crown::setPosition(float x, float y)
{
	crown.setPosition(x, y);
}