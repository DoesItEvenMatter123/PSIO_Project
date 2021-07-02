#include "Including.h"
#include "Player.h"
#include "Platform.h"
#include "Enemy.h"
#include "Potion.h"
#include "Crown.h"
#pragma once
class Game
{
public:
	Game();
	~Game();
	sf::RenderWindow& getWindow();
	void update();
	void render();
	void updatePlayer();
	void renderPlayer();
	void renderPlatform();
	void renderEnemy();
	void renderPotion();
	void renderCrown();
	void collisionWithScreen();
	void collisionWithObjects();
	void updatePlatform();
	void updateEnemies();
	void updatePotions();
	void updateCrown();
	void setEnemies(Platform* platform, Enemy* enemy);
	void setPotions(Platform* platform, Potion* potion);
	void setCrown(Platform* platform, Crown* crown);
	void updateEnemiesVelocity(Platform* platform, Enemy* enemy);
	void CollisionWithEnemies();
	void CollisionWithPotions();
	void EndGame();
private:
	sf::RenderWindow window;
	sf::Event event;
	Player* newplayer;
	Platform* newplatform1;
	Platform* newplatform2;
	Platform* newplatform3;
	Platform* newplatform4;
	Platform* newplatform5;
	Platform* newplatform6;
	Platform* newplatform7;
	Platform* newplatform8;
	Platform* newplatform9;
	Platform* newplatform10;
	Platform* newplatform11;
	Platform* newplatform12;
	Platform* newplatform13;
	Platform* newplatform14;
	Platform* newplatform15;
	Platform* newplatform16;
	Platform* newplatform17;
	Platform* newplatform18;
	Platform* newplatform19;
	Platform* newplatform20;
	Platform* newplatform21;
	Platform* newplatform22;
	Platform* newplatform23;
	Platform* newplatform24;
	Platform* newplatform25;
	Platform* newplatform26;
	Platform* newplatform27;
	Platform* newplatform28;
	Platform* newplatform29;
	Platform* newplatform30;
	Platform* newplatform31;
	Platform* newplatform32;
	Platform* newplatform33;
	Platform* newplatform34;
	Platform* newplatform35;
	Platform* newplatform36;
	Platform* newplatform37;
	Platform* newplatform38;
	Platform* newplatform39;
	Platform* newplatform40;
	Platform* newplatform41;
	Platform* newplatform42;
	Platform* newplatform43;
	Platform* newplatform44;
	Platform* newplatform45;
	Platform* newplatform46;
	Platform* newplatform47;
	Platform* newplatform48;
	Platform* newplatform49;
	Platform* newplatform50;
	Platform* newplatform51;
	Platform* newplatform52;
	Platform* newplatform53;
	Platform* newplatform54;
	Platform* newplatform55;
	Platform* newplatform56;
	Platform* newplatform57;
	Platform* newplatform58;
	Platform* newplatform59;
	Platform* newplatform60;
	Platform* newplatform61;
	Platform* newplatform62;
	Platform* newplatform63;
	Platform* newplatform64;
	Platform* newplatform65;
	Platform* newplatform66;
	Platform* newplatform67;
	Platform* newplatform68;
	Platform* newplatform69;
	Platform* newplatform70;
	Platform* newplatform71;
	Platform* newplatform72;
	Platform* newplatform73;
	Platform* newplatform74;
	Platform* newplatform75;
	Platform* newplatform76;
	Platform* newplatform77;
	Platform* newplatform78;
	Platform* newplatform79;
	Platform* newplatform80;
	Platform* newplatform81;
	Platform* newplatform82;
	Platform* newplatform83;
	Platform* newplatform84;
	Platform* newplatform85;
	Platform* newplatform86;
	Platform* newplatform87;
	Platform* newplatform88;
	Platform* newplatform89;
	Platform* newplatform90;
	Platform* newplatform91;
	Platform* newplatform92;
	Platform* newplatform93;
	Platform* newplatform94;
	Platform* newplatform95;
	Platform* newplatform96;
	Platform* newplatform97;
	Platform* newplatform98;
	Platform* newplatform99;
	Platform* newplatform100;
	Platform* newplatform101;
	Platform* newplatform102;
	Platform* newplatform103;
	Platform* newplatform104;
	Platform* newplatform105;
	Platform* newplatform106;
	Platform* newplatform107;
	Platform* newplatform108;
	Platform* newplatform109;
	Platform* newplatform110;
	Platform* newplatform111;
	Platform* newplatform112;
	Platform* newplatform113;
	Platform* newplatform114;
	Platform* newplatform115;
	Platform* newplatform116;
	Platform* newplatform117;
	Platform* newplatform118;
	Platform* newplatform119;
	Platform* newplatform120;
	Platform* newplatform121;
	Platform* newplatform122;
	Platform* newplatform123;
	Platform* newplatform124;
	Platform* newplatform125;
	Platform* newplatform126;
	Platform* newplatform127;
	Platform* newplatform128;
	Platform* newplatform129;
	Platform* newplatform130;
	Platform* newplatform131;
	Platform* newplatform132;
	Platform* newplatform133;
	Platform* newplatform134;
	Platform* newplatform135;
	Platform* newplatform136;
	Platform* newplatform137;
	Platform* newplatform138;
	Platform* newplatform139;
	Platform* newplatform140;
	Platform* newplatform141;
	Platform* newplatform142;
	Platform* newplatform143;
	Platform* newplatform144;
	Platform* newplatform145;
	Platform* newplatform146;
	Platform* newplatform147;
	Platform* newplatform148;
	Platform* newplatform149;
	Platform* newplatform150;
	Platform* newplatform151;
	Platform* newplatform152;
	Platform* newplatform153;
	Platform* newplatform154;
	Platform* newplatform155;
	Platform* newplatform156;
	Platform* newplatform157;
	Platform* newplatform158;
	Platform* newplatform159;
	Platform* newplatform160;
	Platform* newplatform161;
	Platform* newplatform162;
	Platform* newplatform163;
	Platform* newplatform164;
	Platform* newplatform165;
	Platform* newplatform166;
	Platform* newplatform167;
	Platform* newplatform168;
	Platform* newplatform169;
	Platform* newplatform170;
	Platform* newplatform171;
	Platform* newplatform172;
	Platform* newplatform173;
	Platform* newplatform174;
	Platform* newplatform175;
	Platform* newplatform176;
	Platform* newplatform177;
	Platform* newplatform178;
	Platform* newplatform179;
	Platform* newplatform180;
	Platform* newplatform181;
	Platform* newplatform182;
	Platform* newplatform183;
	Platform* newplatform184;
	Platform* newplatform185;
	Platform* newplatform186;
	Platform* newplatform187;
	Platform* newplatform188;
	Platform* newplatform189;
	Platform* newplatform190;
	Platform* newplatform191;
	Platform* newplatform192;
	Platform* newplatform193;
	Platform* newplatform194;
	Platform* newplatform195;
	Platform* newplatform196;
	Platform* newplatform197;
	Platform* newplatform198;
	Platform* newplatform199;
	Platform* newplatform200;
	
	Enemy* newenemy1;
	Enemy* newenemy2;
	Enemy* newenemy3;
	Enemy* newenemy4;
	Enemy* newenemy5;
	Enemy* newenemy6;
	Enemy* newenemy7;
	Enemy* newenemy8;
	Enemy* newenemy9;
	Enemy* newenemy10;
	Enemy* newenemy11;
	Enemy* newenemy12;
	Enemy* newenemy13;
	Enemy* newenemy14;
	Enemy* newenemy15;
	Enemy* newenemy16;
	Enemy* newenemy17;
	Enemy* newenemy18;
	Enemy* newenemy19;
	Enemy* newenemy20;
	Enemy* newenemy21;
	Enemy* newenemy22;
	Enemy* newenemy23;
	Enemy* newenemy24;
	Enemy* newenemy25;
	Enemy* newenemy26;
	Enemy* newenemy27;
	Enemy* newenemy28;
	Enemy* newenemy29;
	Enemy* newenemy30;
	Enemy* newenemy31;
	Enemy* newenemy32;
	Enemy* newenemy33;
	Enemy* newenemy34;
	Enemy* newenemy35;
	Enemy* newenemy36;
	Enemy* newenemy37;
	Enemy* newenemy38;
	Enemy* newenemy39;
	Enemy* newenemy40;
	
	Potion* newpotion1;
	Potion* newpotion2;
	Potion* newpotion3;
	Potion* newpotion4;
	Potion* newpotion5;
	Potion* newpotion6;
	Potion* newpotion7;
	Potion* newpotion8;
	Potion* newpotion9;
	Potion* newpotion10;
	Potion* newpotion11;
	Potion* newpotion12;
	Potion* newpotion13;
	Potion* newpotion14;
	Potion* newpotion15;
	Potion* newpotion16;
	Potion* newpotion17;
	Potion* newpotion18;
	Potion* newpotion19;
	Potion* newpotion20;

	Crown* newcrown;

	std::vector<Platform*> platforms;
	std::vector<Enemy*> enemies;
	std::vector<Potion*> potions;
	void makewindow();
	void makePlayer();
	void makePlatform();
	void makeEnemy();
	void makePotion();
	void makeCrown();
};

