#include "Including.h"
#include "Game.h"


Game::Game()
{
	makewindow();
	makePlayer();
	makePlatform();
	makeEnemy();
	setEnemies(newplatform3, newenemy);
}

Game::~Game()
{
	delete newplayer;
}

void Game::makewindow()
{
	window.create(sf::VideoMode(800, 1080), "Icy Tower", sf::Style::Close | sf::Style::Titlebar);
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
	updatePlatform();
	updateEnemies();
	updateEnemiesVelocity(newplatform3, newenemy);

	collisionWithScreen();
	collisionWithObjects();
	CollisionWithEnemies();
}

void Game::render()
{
	window.clear();

	renderPlatform();
	renderEnemy();
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
	std::cout << newplayer->getLifes() << std::endl;
	//std::cout << newplayer->getGlobalBounds().height << std::endl;
}

void Game::renderPlayer()
{
	newplayer->render(window);
	newplayer->Draw(window);
}

void Game::makePlatform()
{
	newplatform = new Platform(sf::Vector2f(400, 50), sf::Vector2f(400, 500));
	newplatform1 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, 300));
	newplatform2 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(400, 100));
	newplatform3 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, 0));
	platforms.emplace_back(newplatform);
	platforms.emplace_back(newplatform1);
	platforms.emplace_back(newplatform2);
	platforms.emplace_back(newplatform3);
}


void Game::renderPlatform()
{
	newplatform->Draw(window);
	newplatform1->Draw(window);
	newplatform2->Draw(window);
	newplatform3->Draw(window);
	
}

void Game::makeEnemy()
{
	
	newenemy = new Enemy;
	enemies.emplace_back(newenemy);
	
}

void Game::renderEnemy()
{
	for (auto& o : enemies)
	{
		o->Draw(window);
	}
}

void Game::collisionWithScreen()
{
	if (newplayer->getGlobalBounds().top + newplayer->getGlobalBounds().height > window.getSize().y)
	{
		newplayer->setVelocityY(0);
		newplayer->setPosition(newplayer->getGlobalBounds().left, window.getSize().y - newplayer->getGlobalBounds().height);
		newplayer->setCanJump();
	}
	if (newplayer->getGlobalBounds().left < 0 - newplayer->getGlobalBounds().width / 4)
	{
		newplayer->setVelocityX(0);
		newplayer->setPosition(0 - newplayer->getGlobalBounds().width/4, newplayer->getGlobalBounds().top);
	}
	if (newplayer->getGlobalBounds().left + newplayer->getGlobalBounds().width/4 > window.getSize().x - 2 *newplayer->getGlobalBounds().width / 4)
	{
		newplayer->setVelocityX(0);
		newplayer->setPosition(window.getSize().x - 3 *newplayer->getGlobalBounds().width / 4, newplayer->getGlobalBounds().top);
	}
}

void Game::collisionWithObjects()
{
	for (auto& plat : platforms)
	{
		sf::FloatRect playerBounds = newplayer->getGlobalBounds();
		sf::FloatRect platformBounds = plat->getGlobalBounds();
		sf::FloatRect nextPosition = playerBounds;
		nextPosition.left += newplayer->getVelocity().x;
		nextPosition.top += newplayer->getVelocity().y;

		if (platformBounds.intersects(nextPosition))
		{
			if (playerBounds.top < platformBounds.top && playerBounds.top + playerBounds.height < platformBounds.top + platformBounds.height && playerBounds.left + playerBounds.width / 3 < platformBounds.left + platformBounds.width && playerBounds.left + 3 * playerBounds.width / 4 > platformBounds.left)
			{
				newplayer->setVelocityY(0);
				newplayer->setPosition(playerBounds.left, platformBounds.top - playerBounds.height);
				newplayer->setCanJump();
			}
			else if (playerBounds.top > platformBounds.top && playerBounds.top + playerBounds.height > platformBounds.top + platformBounds.height && playerBounds.left + playerBounds.width / 3 < platformBounds.left + platformBounds.width && playerBounds.left + 3 * playerBounds.width / 4 > platformBounds.left)
			{
				newplayer->setVelocityY(0);
				newplayer->setPosition(playerBounds.left, platformBounds.top + platformBounds.height);
				newplayer->setCanJump();
			}

			if (playerBounds.left + 3 * playerBounds.width / 4 > platformBounds.left && playerBounds.left + playerBounds.width < platformBounds.left + platformBounds.width && playerBounds.top < platformBounds.top - playerBounds.height && playerBounds.top + playerBounds.height / 2 > platformBounds.top)
			{
				//newplayer->setVelocityX(0);
				//newplayer->setPosition(platformBounds.left - 3*playerBounds.width/4, playerBounds.top);
			}
			else if (playerBounds.left < platformBounds.left + platformBounds.width && playerBounds.left + playerBounds.width > platformBounds.left + platformBounds.width && playerBounds.top < platformBounds.top - playerBounds.height && playerBounds.top + playerBounds.height / 2 > platformBounds.top)
			{
				//newplayer->setVelocityX(0);
				//newplayer->setPosition(platformBounds.left + platformBounds.width, playerBounds.top);
			}
		}
	}
}

void Game::CollisionWithEnemies()
{
	for (auto itr = enemies.begin(); itr != enemies.end();)
	{
		if (newplayer->getGlobalBounds().intersects((*itr)->getGlobalBounds()))
		{
			itr = enemies.erase(itr);
			newplayer->loseLife();
		}
		else
		{
			++itr;
		}
	}
}

void Game::updatePlatform()
{
	for (auto& o : platforms)
	{
		o->move();
	}
}

void Game::updateEnemies()
{
	for (auto& o : enemies)
	{
		o->move();
	}
}

void Game::setEnemies(Platform *platform, Enemy *enemy)
{
	enemy->setPosition(platform->getGlobalBounds().left + platform->getGlobalBounds().width / 2 - enemy->getGlobalBounds().width / 2, platform->getGlobalBounds().top - enemy->getGlobalBounds().height);
}

void Game::updateEnemiesVelocity(Platform* platform, Enemy* enemy)
{
	if (enemy->getGlobalBounds().left + enemy->getGlobalBounds().width > platform->getGlobalBounds().left + platform->getGlobalBounds().width || enemy->getGlobalBounds().left < platform->getGlobalBounds().left)
	{
		enemy->setVelocity();
	}
}