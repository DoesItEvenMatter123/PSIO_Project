#include "Including.h"
#include "Potion.h"


Potion::Potion()
{
	setTexture();
	potion.setScale(2, 2);
	vy = 118;
}

Potion::~Potion()
{

}

void Potion::setTexture()
{
	if (!potionTexture.loadFromFile("red-potion.png"))
	{
		std::cout << "Error";
	}
	potion.setTexture(potionTexture);
}

void Potion::Draw(sf::RenderWindow& window)
{
	window.draw(potion);
}

void Potion::move()
{
	potion.move(0, vy * clock.getElapsedTime().asSeconds());
	clock.restart();
}

void Potion::setPosition(float x, float y)
{
	potion.setPosition(x, y);
}

sf::FloatRect Potion::getGlobalBounds()
{
	return potion.getGlobalBounds();
}
