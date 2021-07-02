#pragma once
class Crown
{
public:
	Crown();
	~Crown();
	void Draw(sf::RenderWindow& window);
	void move();
	sf::FloatRect getGlobalBounds();
	void setPosition(float x, float y);
private:
	sf::Sprite crown;
	sf::Texture crownTexture;
	sf::Clock clock;
	sf::IntRect Frame;
	float vy;
	void setTexture();
};

