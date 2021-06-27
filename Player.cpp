#include "Including.h"
#include "Player.h"

Player::Player()
{
	setTexture();
	makePlayer();
	animate();
	//position();
	setPhysics();
	setJump();
	setCanJump();
}

Player::~Player()
{

}

void Player::update()
{
	movePlayer();
	animate();
	physics();
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
		move(1, 0);
		Movement = 1;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		move(-1, 0);
		Movement = 2;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && canJump)
	{
	    canJump = false;
		velocity_y = -sqrtf(2 * gravity * maxHeight);
		//move(0, -1);
		Movement = 3;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		move(0, 1);
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
	else if (Movement == 3)
	{
		if (clock.getElapsedTime().asSeconds() >= 0.1)
		{
			Frame.top = 370;
			Frame.left = 0;
			Frame.left += 50;
			if (Frame.left == 100)
			{
				Frame.left = 0;
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

void Player::position()
{
	player_.setPosition(400 - (player_.getGlobalBounds().width / 2), 600 - player_.getGlobalBounds().height);
}

void Player::setPhysics()
{
	velocity_x = 2;
	velocity_y = 2;
	maxVelocity_x = 10;
	minVelocity = 1;
	maxVelocity_y = 20;
	acceleration = 2;
	deceleration = 0.94;
	gravity = 0.4;
}

void Player::move(float direction_x, float direction_y)
{
	velocity_x += direction_x * acceleration;
	if (std::abs(velocity_x) > maxVelocity_x)
	{
		if (direction_x > 0)
		{
			velocity_x = maxVelocity_x;
		}
		if (direction_x < 0)
		{
			velocity_x = -maxVelocity_x;
		}
	}
	//velocity_y += acceleration;
	if (std::abs(velocity_y) > maxVelocity_y)
	{
		//velocity_y = maxVelocity_y;
	}
}

void Player::physics()
{
	velocity_y += gravity;
	if (std::abs(velocity_x) > maxVelocity_y)
	{
		//velocity_y = maxVelocity_y;
	}
	velocity_x *= deceleration;
	velocity_y *= deceleration;
	if (std::abs(velocity_x) < minVelocity)
	{
		//velocity_x = 0;
	}
	if (std::abs(velocity_y) < minVelocity)
	{
		//velocity_y = 0;
	}
	player_.move(velocity_x, velocity_y);
}

void Player::setVelocityY(float a)
{
	velocity_y = a;
}

void Player::setVelocityX(float a)
{
	velocity_x = a;
}

void Player::setPosition(const float x, const float y)
{
	player_.setPosition(x,y);
}

sf::FloatRect Player::getGlobalBounds()
{
	return player_.getGlobalBounds();
}

void Player::setJump()
{
	maxHeight = 900;
}

void Player::setCanJump()
{
	canJump = true;
}

sf::Vector2f Player::getPosition()
{
	return player_.getPosition();
}

sf::Vector2f Player::getVelocity()
{
	return sf::Vector2f(velocity_x, velocity_y);
}