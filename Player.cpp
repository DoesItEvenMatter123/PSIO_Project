#include "Including.h"
#include "Player.h"

Player::Player()
{
	setTexture();
	makePlayer();
	animate();
	position();
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
	if (!texture.loadFromFile("adventurer-Sheet.png"))
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
		player_.move(-velocity_x, 0);
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
			Frame.top = 0;
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
			Frame.top = 37;
			Frame.left = Frame.left + 50;
			if (Frame.left >= 350)
			{
				Frame.left = 50;
			}

			clock.restart();
			player_.setTextureRect(Frame);
		}
		player_.setScale(4, 4);
		player_.setOrigin(0, 0);
	}
	else if (Movement == 2)
	{
		if (clock.getElapsedTime().asSeconds() >= 0.1)
		{
			Frame.top = 37;
			Frame.left = Frame.left + 50;
			if (Frame.left >= 350)
			{
				Frame.left = 50;
			}

			clock.restart();
			player_.setTextureRect(Frame);
		}
		player_.setScale(-4, 4);
		player_.setOrigin(player_.getGlobalBounds().width / 4, 0);
	}
	else
	{
		clock.restart();
	}
}

void Player::position()
{
	player_.setPosition(400 - (player_.getGlobalBounds().width / 2), 600 - player_.getGlobalBounds().height);
}