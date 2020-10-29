#ifndef GAME_H
#define GAME_H

#include "State.h"

class Game
{
private:

	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event event;

	sf::Clock dtClock;
	float dt;

	void initVariables();
	void initWindow();

public:
	Game();
	virtual ~Game();

	const bool getWindowIsOpen() const;

	void updateDT();
	void pollEvent();
	void update();
	void render();
	void run();
};
#endif

