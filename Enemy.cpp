#include "Including.h"
#include "Enemy.h"

Enemy::Enemy()
{
	setTexture();
	vy = 0.1;
	enemy.setScale(3, 3);
	vx = 0.1;
}

Enemy::~Enemy()
{

}

void Enemy::setTexture()
{
	if (!enemyTexture.loadFromFile("skleton.png"))
	{
		std::cout << "Error";
	}
	enemy.setTexture(enemyTexture);
	Frame = sf::IntRect(0, 32, 43, 32);
	enemy.setTextureRect(Frame);
}

void Enemy::Draw(sf::RenderWindow& window)
{
	window.draw(enemy);
}

void Enemy::move()
{
	enemy.move(vx* clock.getElapsedTime().asSeconds(),vy * clock.getElapsedTime().asSeconds());
}

void Enemy::setPosition(float x,float y)
{
	enemy.setPosition(x, y);
}

void Enemy::setVelocity()
{
	vx = -vx;
}

sf::FloatRect Enemy::getGlobalBounds()
{
	return enemy.getGlobalBounds();
}