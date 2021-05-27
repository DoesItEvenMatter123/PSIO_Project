#include "Including.h"
#include "Player.h"

Player::Player()
{
	setTexture();
	makePlayer();
	animate();
}

Player::~Player()
{

}

void Player::update()
{
	movePlayer();
	animate();
}

void Player::setTexture()
{
	if (!texture.loadFromFile("character.png"))
	{
		std::cout << "Error" << std::endl;
	}
}

void Player::makePlayer()
{
	player_.setTexture(texture);
	Frame = sf::IntRect(0, 0, 50, 37);
	player_.setTextureRect(Frame);
	player_.scale(4, 4);
}

void Player::render(sf::RenderTarget& target)
{
	target.draw(player_);
}

void Player::movePlayer()
{
	Movement = 0;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		player_.move(velocity_x, 0);
		Movement = 1;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		player_.move(-velocity_x,0);
		Movement = 2;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		player_.move(0, -velocity_y);
		Movement = 3;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		player_.move(0, velocity_y);
		Movement = 4;
	}
}

void Player::startAnimation()
{
	clock.restart();
}

void Player::animate()
{
	if (Movement == 0)
	{
		if (clock.getElapsedTime().asSeconds() >= 0.3)
		{
			Frame.left = Frame.left + 50;
			if (Frame.left >= 150)
			{
				Frame.left = 0;
			}
			
			clock.restart();
			player_.setTextureRect(Frame);
		}
	}
	else if (Movement == 1)
	{
		if (clock.getElapsedTime().asSeconds() >= 0.1)
		{
			Frame.left = Frame.left + 50;
			if (Frame.left >= 450)
			{
				Frame.left = 150;
			}

			clock.restart();
			player_.setTextureRect(Frame);
		}
	}
	else
	{
		clock.restart();
	}
}