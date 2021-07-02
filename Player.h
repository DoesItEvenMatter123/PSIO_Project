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
	void physics();
	void move(float direction_x, float direction_y);
	sf::FloatRect getGlobalBounds();
	void setVelocityY(float a);
	void setVelocityX(float a);
	void setPosition(const float x, const float y);
	void setCanJump();
	sf::Vector2f getPosition();
	sf::Vector2f getVelocity();
	void makeLifeBar();
	void Draw(sf::RenderTarget& target);
	void changeLife(int a);
	int getLifes();
	bool isAlive();
private:
	sf::Sprite player_;
	sf::Texture texture;
	sf::IntRect Frame;
	sf::Clock clock;
	sf::RectangleShape LifeBar;
	sf::Vector2f LifeBarSize;
	int Movement;
	float velocity_x;
	float velocity_y;
	float maxVelocity_x;
	float minVelocity;
	float maxVelocity_y;
	float acceleration;
	float deceleration;
	float gravity;
	float maxHeight;
	bool canJump;
	int lifes;
	void makePlayer();
	void setTexture();
	void startAnimation();
	void position();
	void setPhysics();
	void setJump();
};

