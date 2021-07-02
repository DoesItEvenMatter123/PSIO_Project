#include "Including.h"
#include "Game.h"


Game::Game()
{
	makewindow();
	makePlayer();
	makePlatform();
	makeEnemy();
	makePotion();
	makeCrown();
	setEnemies(newplatform5, newenemy1);
	setEnemies(newplatform10, newenemy2);
	setEnemies(newplatform15, newenemy3);
	setEnemies(newplatform20, newenemy4);
	setEnemies(newplatform25, newenemy5);
	setEnemies(newplatform30, newenemy6);
	setEnemies(newplatform35, newenemy7);
	setEnemies(newplatform40, newenemy8);
	setEnemies(newplatform45, newenemy9);
	setEnemies(newplatform50, newenemy10);
	setEnemies(newplatform55, newenemy11);
	setEnemies(newplatform60, newenemy12);
	setEnemies(newplatform65, newenemy13);
	setEnemies(newplatform70, newenemy14);
	setEnemies(newplatform75, newenemy15);
	setEnemies(newplatform80, newenemy16);
	setEnemies(newplatform85, newenemy17);
	setEnemies(newplatform90, newenemy18);
	setEnemies(newplatform95, newenemy19);
	setEnemies(newplatform100, newenemy20);
	setEnemies(newplatform105, newenemy21);
	setEnemies(newplatform110, newenemy22);
	setEnemies(newplatform115, newenemy23);
	setEnemies(newplatform120, newenemy24);
	setEnemies(newplatform125, newenemy25);
	setEnemies(newplatform130, newenemy26);
	setEnemies(newplatform135, newenemy27);
	setEnemies(newplatform140, newenemy28);
	setEnemies(newplatform145, newenemy29);
	setEnemies(newplatform150, newenemy30);
	setEnemies(newplatform155, newenemy31);
	setEnemies(newplatform160, newenemy32);
	setEnemies(newplatform165, newenemy33);
	setEnemies(newplatform170, newenemy34);
	setEnemies(newplatform175, newenemy35);
	setEnemies(newplatform180, newenemy36);
	setEnemies(newplatform185, newenemy37);
	setEnemies(newplatform190, newenemy38);
	setEnemies(newplatform195, newenemy39);
	setEnemies(newplatform200, newenemy40);

	setPotions(newplatform10, newpotion1);
	setPotions(newplatform21, newpotion2);
	setPotions(newplatform30, newpotion3);
	setPotions(newplatform41, newpotion4);
	setPotions(newplatform50, newpotion5);
	setPotions(newplatform61, newpotion6);
	setPotions(newplatform70, newpotion7);
	setPotions(newplatform81, newpotion8);
	setPotions(newplatform90, newpotion9);
	setPotions(newplatform101, newpotion10);
	setPotions(newplatform110, newpotion11);
	setPotions(newplatform121, newpotion12);
	setPotions(newplatform130, newpotion13);
	setPotions(newplatform141, newpotion14);
	setPotions(newplatform150, newpotion15);
	setPotions(newplatform161, newpotion16);
	setPotions(newplatform170, newpotion17);
	setPotions(newplatform181, newpotion18);
	setPotions(newplatform191, newpotion19);
	setPotions(newplatform200, newpotion20);

	setCrown(newplatform200, newcrown);
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
	updatePotions();
	updateCrown();
	updateEnemiesVelocity(newplatform5, newenemy1);
	updateEnemiesVelocity(newplatform10, newenemy2);
	updateEnemiesVelocity(newplatform15, newenemy3);
	updateEnemiesVelocity(newplatform20, newenemy4);
	updateEnemiesVelocity(newplatform25, newenemy5);
	updateEnemiesVelocity(newplatform30, newenemy6);
	updateEnemiesVelocity(newplatform35, newenemy7);
	updateEnemiesVelocity(newplatform40, newenemy8);
	updateEnemiesVelocity(newplatform45, newenemy9);
	updateEnemiesVelocity(newplatform50, newenemy10);
	updateEnemiesVelocity(newplatform55, newenemy11);
	updateEnemiesVelocity(newplatform60, newenemy12);
	updateEnemiesVelocity(newplatform65, newenemy13);
	updateEnemiesVelocity(newplatform70, newenemy14);
	updateEnemiesVelocity(newplatform75, newenemy15);
	updateEnemiesVelocity(newplatform80, newenemy16);
	updateEnemiesVelocity(newplatform85, newenemy17);
	updateEnemiesVelocity(newplatform90, newenemy18);
	updateEnemiesVelocity(newplatform95, newenemy19);
	updateEnemiesVelocity(newplatform100, newenemy20);
	updateEnemiesVelocity(newplatform105, newenemy21);
	updateEnemiesVelocity(newplatform110, newenemy22);
	updateEnemiesVelocity(newplatform115, newenemy23);
	updateEnemiesVelocity(newplatform120, newenemy24);
	updateEnemiesVelocity(newplatform125, newenemy25);
	updateEnemiesVelocity(newplatform130, newenemy26);
	updateEnemiesVelocity(newplatform135, newenemy27);
	updateEnemiesVelocity(newplatform140, newenemy28);
	updateEnemiesVelocity(newplatform145, newenemy29);
	updateEnemiesVelocity(newplatform150, newenemy30);
	updateEnemiesVelocity(newplatform155, newenemy31);
	updateEnemiesVelocity(newplatform160, newenemy32);
	updateEnemiesVelocity(newplatform165, newenemy33);
	updateEnemiesVelocity(newplatform170, newenemy34);
	updateEnemiesVelocity(newplatform175, newenemy35);
	updateEnemiesVelocity(newplatform180, newenemy36);
	updateEnemiesVelocity(newplatform185, newenemy37);
	updateEnemiesVelocity(newplatform190, newenemy38);
	updateEnemiesVelocity(newplatform195, newenemy39);
	updateEnemiesVelocity(newplatform200, newenemy40);

	collisionWithScreen();
	collisionWithObjects();
	CollisionWithEnemies();
	CollisionWithPotions();

	EndGame();
}

void Game::render()
{
	window.clear();

	renderPlatform();
	renderEnemy();
	renderPotion();
	renderCrown();
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
	newplayer->Draw(window);
}

void Game::makePlatform()
{
	newplatform1 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, 500));
	newplatform2 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, 300));
	newplatform3 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, 100));
	newplatform4 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -100));
	newplatform5 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -300));
	newplatform6 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -500));
	newplatform7 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -700));
	newplatform8 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -900));
	newplatform9 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -1100));
	newplatform10 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -1300));
	newplatform11 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -1500));
	newplatform12 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -1700));
	newplatform13 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -1900));
	newplatform14 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -2100));
	newplatform15 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -2300));
	newplatform16 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -2500));
	newplatform17 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -2700));
	newplatform18 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -2900));
	newplatform19 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -3100));
	newplatform20 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -3300));
	newplatform21 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -3500));
	newplatform22 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -3700));
	newplatform23 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -3900));
	newplatform24 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -4100));
	newplatform25 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -4300));
	newplatform26 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -4500));
	newplatform27 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -4700));
	newplatform28 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -4900));
	newplatform29 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -5100));
	newplatform30 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -5300));
	newplatform31 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -5500));
	newplatform32 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -5700));
	newplatform33 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -5900));
	newplatform34 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -6100));
	newplatform35 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -6300));
	newplatform36 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -6500));
	newplatform37 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -6700));
	newplatform38 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -6900));
	newplatform39 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -7100));
	newplatform40 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -7300));
	newplatform41 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -7500));
	newplatform42 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -7700));
	newplatform43 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -7900));
	newplatform44 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -8100));
	newplatform45 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -8300));
	newplatform46 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -8500));
	newplatform47 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -8700));
	newplatform48 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -8900));
	newplatform49 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -9100));
	newplatform50 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -9300));
	newplatform51 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -9500));
	newplatform52 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -9700));
	newplatform53 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -9900));
	newplatform54 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -10100));
	newplatform55 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -10300));
	newplatform56 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -10500));
	newplatform57 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -10700));
	newplatform58 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -10900));
	newplatform59 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -11100));
	newplatform60 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -11300));
	newplatform61 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -11500));
	newplatform62 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -11700));
	newplatform63 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -11900));
	newplatform64 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -12100));
	newplatform65 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -12300));
	newplatform66 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -12500));
	newplatform67 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -12700));
	newplatform68 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -12900));
	newplatform69 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -13100));
	newplatform70 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -13300));
	newplatform71 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -13500));
	newplatform72 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -13700));
	newplatform73 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -13900));
	newplatform74 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -14100));
	newplatform75 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -14300));
	newplatform76 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -14500));
	newplatform77 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -14700));
	newplatform78 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -14900));
	newplatform79 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -15100));
	newplatform80 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -15300));
	newplatform81 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -15500));
	newplatform82 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -15700));
	newplatform83 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -15900));
	newplatform84 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -16100));
	newplatform85 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -16300));
	newplatform86 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -16500));
	newplatform87 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -16700));
	newplatform88 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -16900));
	newplatform89 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -17100));
	newplatform90 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -17300));
	newplatform91 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -17500));
	newplatform92 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -17700));
	newplatform93 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -17900));
	newplatform94 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -18100));
	newplatform95 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -18300));
	newplatform96 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -18500));
	newplatform97 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -18700));
	newplatform98 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -18900));
	newplatform99 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -19100));
	newplatform100 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -19300));
	newplatform101 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -19500));
	newplatform102 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -19700));
	newplatform103 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -19900));
	newplatform104 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -20100));
	newplatform105 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -20300));
	newplatform106 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -20500));
	newplatform107 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -20700));
	newplatform108 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -20900));
	newplatform109 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -21100));
	newplatform110 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -21300));
	newplatform111 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -21500));
	newplatform112 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -21700));
	newplatform113 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -21900));
	newplatform114 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -22100));
	newplatform115 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -22300));
	newplatform116 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -22500));
	newplatform117 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -22700));
	newplatform118 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -22900));
	newplatform119 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -23100));
	newplatform120 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -23300));
	newplatform121 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -23500));
	newplatform122 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -23700));
	newplatform123 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -23900));
	newplatform124 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -24100));
	newplatform125 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -24300));
	newplatform126 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -24500));
	newplatform127 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -24700));
	newplatform128 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -24900));
	newplatform129 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -25100));
	newplatform130 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -25300));
	newplatform131 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -25500));
	newplatform132 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -25700));
	newplatform133 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -25900));
	newplatform134 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -26100));
	newplatform135 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -26300));
	newplatform136 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -26500));
	newplatform137 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -26700));
	newplatform138 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -26900));
	newplatform139 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -27100));
	newplatform140 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -27300));
	newplatform141 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -27500));
	newplatform142 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -27700));
	newplatform143 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -27900));
	newplatform144 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -28100));
	newplatform145 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -28300));
	newplatform146 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -28500));
	newplatform147 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -28700));
	newplatform148 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -28900));
	newplatform149 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -29100));
	newplatform150 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -29300));
	newplatform151 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -29500));
	newplatform152 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -29700));
	newplatform153 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -29900));
	newplatform154 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -30100));
	newplatform155 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -30300));
	newplatform156 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -30500));
	newplatform157 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -30700));
	newplatform158 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -30900));
	newplatform159 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -31100));
	newplatform160 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -31300));
	newplatform161 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -31500));
	newplatform162 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -31700));
	newplatform163 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -31900));
	newplatform164 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -32100));
	newplatform165 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -32300));
	newplatform166 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -32500));
	newplatform167 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -32700));
	newplatform168 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -32900));
	newplatform169 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -33100));
	newplatform170 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -33300));
	newplatform171 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -33500));
	newplatform172 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -33700));
	newplatform173 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -33900));
	newplatform174 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -34100));
	newplatform175 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -34300));
	newplatform176 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -34500));
	newplatform177 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -34700));
	newplatform178 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -34900));
	newplatform179 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -35100));
	newplatform180 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -35300));
	newplatform181 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -35500));
	newplatform182 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -35700));
	newplatform183 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -35900));
	newplatform184 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -36100));
	newplatform185 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -36300));
	newplatform186 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -36500));
	newplatform187 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -36700));
	newplatform188 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -36900));
	newplatform189 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -37100));
	newplatform190 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -37300));
	newplatform191 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -37500));
	newplatform192 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -37700));
	newplatform193 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -37900));
	newplatform194 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -38100));
	newplatform195 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -38300));
	newplatform196 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -38500));
	newplatform197 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -38700));
	newplatform198 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(0, -38900));
	newplatform199 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(600, -39100));
	newplatform200 = new Platform(sf::Vector2f(400, 50), sf::Vector2f(400, -39300));

	platforms.emplace_back(newplatform1);
	platforms.emplace_back(newplatform2);
	platforms.emplace_back(newplatform3);
	platforms.emplace_back(newplatform4);
	platforms.emplace_back(newplatform5);
	platforms.emplace_back(newplatform6);
	platforms.emplace_back(newplatform7);
	platforms.emplace_back(newplatform8);
	platforms.emplace_back(newplatform9);
	platforms.emplace_back(newplatform10);
	platforms.emplace_back(newplatform11);
	platforms.emplace_back(newplatform12);
	platforms.emplace_back(newplatform13);
	platforms.emplace_back(newplatform14);
	platforms.emplace_back(newplatform15);
	platforms.emplace_back(newplatform16);
	platforms.emplace_back(newplatform17);
	platforms.emplace_back(newplatform18);
	platforms.emplace_back(newplatform19);
	platforms.emplace_back(newplatform20);
	platforms.emplace_back(newplatform21);
	platforms.emplace_back(newplatform22);
	platforms.emplace_back(newplatform23);
	platforms.emplace_back(newplatform24);
	platforms.emplace_back(newplatform25);
	platforms.emplace_back(newplatform26);
	platforms.emplace_back(newplatform27);
	platforms.emplace_back(newplatform28);
	platforms.emplace_back(newplatform29);
	platforms.emplace_back(newplatform30);
	platforms.emplace_back(newplatform31);
	platforms.emplace_back(newplatform32);
	platforms.emplace_back(newplatform33);
	platforms.emplace_back(newplatform34);
	platforms.emplace_back(newplatform35);
	platforms.emplace_back(newplatform36);
	platforms.emplace_back(newplatform37);
	platforms.emplace_back(newplatform38);
	platforms.emplace_back(newplatform39);
	platforms.emplace_back(newplatform40);
	platforms.emplace_back(newplatform41);
	platforms.emplace_back(newplatform42);
	platforms.emplace_back(newplatform43);
	platforms.emplace_back(newplatform44);
	platforms.emplace_back(newplatform45);
	platforms.emplace_back(newplatform46);
	platforms.emplace_back(newplatform47);
	platforms.emplace_back(newplatform48);
	platforms.emplace_back(newplatform49);
	platforms.emplace_back(newplatform50);
	platforms.emplace_back(newplatform51);
	platforms.emplace_back(newplatform52);
	platforms.emplace_back(newplatform53);
	platforms.emplace_back(newplatform54);
	platforms.emplace_back(newplatform55);
	platforms.emplace_back(newplatform56);
	platforms.emplace_back(newplatform57);
	platforms.emplace_back(newplatform58);
	platforms.emplace_back(newplatform59);
	platforms.emplace_back(newplatform60);
	platforms.emplace_back(newplatform61);
	platforms.emplace_back(newplatform62);
	platforms.emplace_back(newplatform63);
	platforms.emplace_back(newplatform64);
	platforms.emplace_back(newplatform65);
	platforms.emplace_back(newplatform66);
	platforms.emplace_back(newplatform67);
	platforms.emplace_back(newplatform68);
	platforms.emplace_back(newplatform69);
	platforms.emplace_back(newplatform70);
	platforms.emplace_back(newplatform71);
	platforms.emplace_back(newplatform72);
	platforms.emplace_back(newplatform73);
	platforms.emplace_back(newplatform74);
	platforms.emplace_back(newplatform75);
	platforms.emplace_back(newplatform76);
	platforms.emplace_back(newplatform77);
	platforms.emplace_back(newplatform78);
	platforms.emplace_back(newplatform79);
	platforms.emplace_back(newplatform80);
	platforms.emplace_back(newplatform81);
	platforms.emplace_back(newplatform82);
	platforms.emplace_back(newplatform83);
	platforms.emplace_back(newplatform84);
	platforms.emplace_back(newplatform85);
	platforms.emplace_back(newplatform86);
	platforms.emplace_back(newplatform87);
	platforms.emplace_back(newplatform88);
	platforms.emplace_back(newplatform89);
	platforms.emplace_back(newplatform90);
	platforms.emplace_back(newplatform91);
	platforms.emplace_back(newplatform92);
	platforms.emplace_back(newplatform93);
	platforms.emplace_back(newplatform94);
	platforms.emplace_back(newplatform95);
	platforms.emplace_back(newplatform96);
	platforms.emplace_back(newplatform97);
	platforms.emplace_back(newplatform98);
	platforms.emplace_back(newplatform99);
	platforms.emplace_back(newplatform100);
	platforms.emplace_back(newplatform101);
	platforms.emplace_back(newplatform102);
	platforms.emplace_back(newplatform103);
	platforms.emplace_back(newplatform104);
	platforms.emplace_back(newplatform105);
	platforms.emplace_back(newplatform106);
	platforms.emplace_back(newplatform107);
	platforms.emplace_back(newplatform108);
	platforms.emplace_back(newplatform109);
	platforms.emplace_back(newplatform110);
	platforms.emplace_back(newplatform111);
	platforms.emplace_back(newplatform112);
	platforms.emplace_back(newplatform113);
	platforms.emplace_back(newplatform114);
	platforms.emplace_back(newplatform115);
	platforms.emplace_back(newplatform116);
	platforms.emplace_back(newplatform117);
	platforms.emplace_back(newplatform118);
	platforms.emplace_back(newplatform119);
	platforms.emplace_back(newplatform120);
	platforms.emplace_back(newplatform121);
	platforms.emplace_back(newplatform122);
	platforms.emplace_back(newplatform123);
	platforms.emplace_back(newplatform124);
	platforms.emplace_back(newplatform125);
	platforms.emplace_back(newplatform126);
	platforms.emplace_back(newplatform127);
	platforms.emplace_back(newplatform128);
	platforms.emplace_back(newplatform129);
	platforms.emplace_back(newplatform130);
	platforms.emplace_back(newplatform131);
	platforms.emplace_back(newplatform132);
	platforms.emplace_back(newplatform133);
	platforms.emplace_back(newplatform134);
	platforms.emplace_back(newplatform135);
	platforms.emplace_back(newplatform136);
	platforms.emplace_back(newplatform137);
	platforms.emplace_back(newplatform138);
	platforms.emplace_back(newplatform139);
	platforms.emplace_back(newplatform140);
	platforms.emplace_back(newplatform141);
	platforms.emplace_back(newplatform142);
	platforms.emplace_back(newplatform143);
	platforms.emplace_back(newplatform144);
	platforms.emplace_back(newplatform145);
	platforms.emplace_back(newplatform146);
	platforms.emplace_back(newplatform147);
	platforms.emplace_back(newplatform148);
	platforms.emplace_back(newplatform149);
	platforms.emplace_back(newplatform150);
	platforms.emplace_back(newplatform151);
	platforms.emplace_back(newplatform152);
	platforms.emplace_back(newplatform153);
	platforms.emplace_back(newplatform154);
	platforms.emplace_back(newplatform155);
	platforms.emplace_back(newplatform156);
	platforms.emplace_back(newplatform157);
	platforms.emplace_back(newplatform158);
	platforms.emplace_back(newplatform159);
	platforms.emplace_back(newplatform160);
	platforms.emplace_back(newplatform161);
	platforms.emplace_back(newplatform162);
	platforms.emplace_back(newplatform163);
	platforms.emplace_back(newplatform164);
	platforms.emplace_back(newplatform165);
	platforms.emplace_back(newplatform166);
	platforms.emplace_back(newplatform167);
	platforms.emplace_back(newplatform168);
	platforms.emplace_back(newplatform169);
	platforms.emplace_back(newplatform170);
	platforms.emplace_back(newplatform171);
	platforms.emplace_back(newplatform172);
	platforms.emplace_back(newplatform173);
	platforms.emplace_back(newplatform174);
	platforms.emplace_back(newplatform175);
	platforms.emplace_back(newplatform176);
	platforms.emplace_back(newplatform177);
	platforms.emplace_back(newplatform178);
	platforms.emplace_back(newplatform179);
	platforms.emplace_back(newplatform180);
	platforms.emplace_back(newplatform181);
	platforms.emplace_back(newplatform182);
	platforms.emplace_back(newplatform183);
	platforms.emplace_back(newplatform184);
	platforms.emplace_back(newplatform185);
	platforms.emplace_back(newplatform186);
	platforms.emplace_back(newplatform187);
	platforms.emplace_back(newplatform188);
	platforms.emplace_back(newplatform189);
	platforms.emplace_back(newplatform190);
	platforms.emplace_back(newplatform191);
	platforms.emplace_back(newplatform192);
	platforms.emplace_back(newplatform193);
	platforms.emplace_back(newplatform194);
	platforms.emplace_back(newplatform195);
	platforms.emplace_back(newplatform196);
	platforms.emplace_back(newplatform197);
	platforms.emplace_back(newplatform198);
	platforms.emplace_back(newplatform199);
	platforms.emplace_back(newplatform200);
}

void Game::makePotion()
{
	newpotion1 = new Potion;
	newpotion2 = new Potion;
	newpotion3 = new Potion;
	newpotion4 = new Potion;
	newpotion5 = new Potion;
	newpotion6 = new Potion;
	newpotion7 = new Potion;
	newpotion8 = new Potion;
	newpotion9 = new Potion;
	newpotion10 = new Potion;
	newpotion11 = new Potion;
	newpotion12 = new Potion;
	newpotion13 = new Potion;
	newpotion14 = new Potion;
	newpotion15 = new Potion;
	newpotion16 = new Potion;
	newpotion17 = new Potion;
	newpotion18 = new Potion;
	newpotion19 = new Potion;
	newpotion20 = new Potion;
	potions.emplace_back(newpotion1);
	potions.emplace_back(newpotion2);
	potions.emplace_back(newpotion3);
	potions.emplace_back(newpotion4);
	potions.emplace_back(newpotion5);
	potions.emplace_back(newpotion6);
	potions.emplace_back(newpotion7);
	potions.emplace_back(newpotion8);
	potions.emplace_back(newpotion9);
	potions.emplace_back(newpotion10);
	potions.emplace_back(newpotion11);
	potions.emplace_back(newpotion12);
	potions.emplace_back(newpotion13);
	potions.emplace_back(newpotion14);
	potions.emplace_back(newpotion15);
	potions.emplace_back(newpotion16);
	potions.emplace_back(newpotion17);
	potions.emplace_back(newpotion18);
	potions.emplace_back(newpotion19);
	potions.emplace_back(newpotion20);
}

void Game::renderPlatform()
{
	for (auto& o : platforms)
	{
		o->Draw(window);
	}
}

void Game::makeEnemy()
{
	newenemy1 = new Enemy;
	newenemy2 = new Enemy;
	newenemy3 = new Enemy;
	newenemy4 = new Enemy;
	newenemy5 = new Enemy;
	newenemy6 = new Enemy;
	newenemy7 = new Enemy;
	newenemy8 = new Enemy;
	newenemy9 = new Enemy;
	newenemy10 = new Enemy;
	newenemy11 = new Enemy;
	newenemy12 = new Enemy;
	newenemy13 = new Enemy;
	newenemy14 = new Enemy;
	newenemy15 = new Enemy;
	newenemy16 = new Enemy;
	newenemy17 = new Enemy;
	newenemy18 = new Enemy;
	newenemy19 = new Enemy;
	newenemy20 = new Enemy;
	newenemy21 = new Enemy;
	newenemy22 = new Enemy;
	newenemy23 = new Enemy;
	newenemy24 = new Enemy;
	newenemy25 = new Enemy;
	newenemy26 = new Enemy;
	newenemy27 = new Enemy;
	newenemy28 = new Enemy;
	newenemy29 = new Enemy;
	newenemy30 = new Enemy;
	newenemy31 = new Enemy;
	newenemy32 = new Enemy;
	newenemy33 = new Enemy;
	newenemy34 = new Enemy;
	newenemy35 = new Enemy;
	newenemy36 = new Enemy;
	newenemy37 = new Enemy;
	newenemy38 = new Enemy;
	newenemy39 = new Enemy;
	newenemy40 = new Enemy;
	enemies.emplace_back(newenemy1);
	enemies.emplace_back(newenemy2);
	enemies.emplace_back(newenemy3);
	enemies.emplace_back(newenemy4);
	enemies.emplace_back(newenemy5);
	enemies.emplace_back(newenemy6);
	enemies.emplace_back(newenemy7);
	enemies.emplace_back(newenemy8);
	enemies.emplace_back(newenemy9);
	enemies.emplace_back(newenemy10);
	enemies.emplace_back(newenemy11);
	enemies.emplace_back(newenemy12);
	enemies.emplace_back(newenemy13);
	enemies.emplace_back(newenemy14);
	enemies.emplace_back(newenemy15);
	enemies.emplace_back(newenemy16);
	enemies.emplace_back(newenemy17);
	enemies.emplace_back(newenemy18);
	enemies.emplace_back(newenemy19);
	enemies.emplace_back(newenemy20);
	enemies.emplace_back(newenemy21);
	enemies.emplace_back(newenemy22);
	enemies.emplace_back(newenemy23);
	enemies.emplace_back(newenemy24);
	enemies.emplace_back(newenemy25);
	enemies.emplace_back(newenemy26);
	enemies.emplace_back(newenemy27);
	enemies.emplace_back(newenemy28);
	enemies.emplace_back(newenemy29);
	enemies.emplace_back(newenemy30);
	enemies.emplace_back(newenemy31);
	enemies.emplace_back(newenemy32);
	enemies.emplace_back(newenemy33);
	enemies.emplace_back(newenemy34);
	enemies.emplace_back(newenemy35);
	enemies.emplace_back(newenemy36);
	enemies.emplace_back(newenemy37);
	enemies.emplace_back(newenemy38);
	enemies.emplace_back(newenemy39);
	enemies.emplace_back(newenemy40);
}

void Game::renderEnemy()
{
	for (auto& o : enemies)
	{
		o->Draw(window);
	}
}

void Game::renderPotion()
{
	for (auto& o : potions)
	{
		o->Draw(window);
	}
}

void Game::makeCrown()
{
	newcrown = new Crown;
}

void Game::renderCrown()
{
	newcrown->Draw(window);
}

void Game::updateCrown()
{
	newcrown->move();
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
			newplayer->changeLife(-1);
		}
		else
		{
			++itr;
		}
	}
}

void Game::CollisionWithPotions()
{
	for (auto itr = potions.begin(); itr != potions.end();)
	{
		if (newplayer->getGlobalBounds().intersects((*itr)->getGlobalBounds()))
		{
			itr = potions.erase(itr);
			if (newplayer->getLifes() < 5)
			{
				newplayer->changeLife(1);
			}
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

void Game::updatePotions()
{
	for (auto& o : potions)
	{
		o->move();
	}
}

void Game::setEnemies(Platform *platform, Enemy *enemy)
{
	enemy->setPosition(platform->getGlobalBounds().left + platform->getGlobalBounds().width / 2 - enemy->getGlobalBounds().width / 2, platform->getGlobalBounds().top + 5.3*enemy->getGlobalBounds().height + 35);
}

void Game::updateEnemiesVelocity(Platform* platform, Enemy* enemy)
{
	if (enemy->getGlobalBounds().left + enemy->getGlobalBounds().width > platform->getGlobalBounds().left + platform->getGlobalBounds().width || enemy->getGlobalBounds().left < platform->getGlobalBounds().left)
	{
		enemy->setVelocity();
	}
}

void Game::setPotions(Platform* platform, Potion* potion)
{
	potion->setPosition(platform->getGlobalBounds().left + platform->getGlobalBounds().width / 2 + potion->getGlobalBounds().width, platform->getGlobalBounds().top + potion->getGlobalBounds().height);
}

void Game::setCrown(Platform* platform, Crown* crown)
{
	crown->setPosition(platform->getGlobalBounds().left + platform->getGlobalBounds().width / 2 - crown->getGlobalBounds().width / 2, platform->getGlobalBounds().top + crown->getGlobalBounds().height);
}

void Game::EndGame()
{
	if (!newplayer->isAlive() || newplayer->getGlobalBounds().top + newplayer->getGlobalBounds().height >= window.getSize().y || newplayer->getGlobalBounds().intersects(newcrown->getGlobalBounds()))
	{
		window.close();
	}
}