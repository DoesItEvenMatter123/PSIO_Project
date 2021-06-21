#include "Including.h"
#include "Game.h"


Game::Game()
{
	makewindow();
	makePlayer();
}

Game::~Game()
{
	delete newplayer;
}

void Game::makewindow()
{
	window.create(sf::VideoMode(800, 600), "Icy Tower", sf::Style::Close | sf::Style::Titlebar);
}

sf::RenderWindow& Game::getWindow()
{
	return window;
}

void Game::update()
{
	window.setFramerateLimit(144);
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}
		else if (event.type == sf::Event::KeyPressed)
		{
			if (event.key.code == sf::Keyboard::Escape)
			{
				window.close();
			}
		}
	}
	updatePlayer();

	collision();
}

void Game::render()
{
	window.clear();

	renderPlayer();

	window.display();
}
void Game::makePlayer()
{
	newplayer = new Player;
	newplatform = new Platform(sf::Vector2f(400,50), sf::Vector2f(700,500));
}

void Game::updatePlayer()
{
	newplayer->update();
	std::cout << newplayer->getGlobalBounds().left << std::endl;
}

void Game::renderPlayer()
{
	newplayer->render(window);
	newplatform->Draw(window);
}

void Game::collision()
{
	if (newplayer->getGlobalBounds().top + newplayer->getGlobalBounds().height > window.getSize().y)
	{
		newplayer->setVelocityY();
		newplayer->setPosition(newplayer->getGlobalBounds().left, window.getSize().y - newplayer->getGlobalBounds().height);
		newplayer->setCanJump();
	}
	if (newplayer->getGlobalBounds().left < 0 - newplayer->getGlobalBounds().width)
	{
		newplayer->setVelocityX();
		newplayer->setPosition(newplayer->getGlobalBounds().width, newplayer->getGlobalBounds().top);
		newplayer->setCanJump();
	}
}