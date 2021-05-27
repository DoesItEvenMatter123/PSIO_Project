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
}

void Game::updatePlayer()
{
	newplayer->update();
}

void Game::renderPlayer()
{
	newplayer->render(window);
}