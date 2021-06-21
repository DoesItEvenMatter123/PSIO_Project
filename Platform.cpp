#include "Including.h"
#include "Platform.h"

Platform::Platform(sf::Vector2f size, sf::Vector2f position)
{
	platform_.setOrigin(size / 2.0f);
	platform_.setPosition(position);
	setTexture();
	platform_.setTexture(texture);
	Frame = sf::IntRect(0, 0, size.x, size.y);
	platform_.setTextureRect(Frame);
}

void Platform::setTexture()
{
	if (!texture.loadFromFile("Paving 1.png"))
	{
		std::cout << "Error" << std::endl;
	}
}

void Platform::Draw(sf::RenderWindow& window)
{
	window.draw(platform_);
}

sf::Vector2f Platform::getPosition()
{
	return platform_.getPosition();
}

sf::FloatRect Platform::getGlobalBounds()
{
	return platform_.getGlobalBounds();
}