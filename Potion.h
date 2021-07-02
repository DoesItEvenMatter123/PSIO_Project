#pragma once
class Potion
{
public:
	Potion();
	~Potion();
	void Draw(sf::RenderWindow& window);
	void move();
	void setPosition(float x, float y);
	sf::FloatRect getGlobalBounds();
private:
	sf::Sprite potion;
	sf::Texture potionTexture;
	sf::Clock clock;
	sf::IntRect Frame;
	float vy;
	void setTexture();
};

