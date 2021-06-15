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
	void setVelocity();
	void setPosition(const float x, const float y);
	void setCanJump();
private:
	sf::Sprite player_;
	sf::Texture texture;
	sf::IntRect Frame;
	sf::Clock clock;
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
	void makePlayer();
	void setTexture();
	void startAnimation();
	void position();
	void setPhysics();
	void setJump();
};

