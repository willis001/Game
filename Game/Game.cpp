#include "Game.h"


void Game::initVariables()
{
	this->window = nullptr;
}

void Game::initWindow()
{
	this->videoMode.height = 720;
	this->videoMode.width = 1080;
	this->window = new sf::RenderWindow(this->videoMode, "Title", sf::Style::Close | sf::Style::Titlebar);
}

Game::Game()
{
	this->initVariables();
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

const bool Game::getWindowIsOpen() const 
{
	return this->window->isOpen();
}


void Game::updateDT()
{
	this->dt = this->dtClock.restart().asSeconds();

	system("cls");
	std::cout << this->dt << "\n";
}

void Game::pollEvent()
{
	while (this->window->pollEvent(this->event))
	{
		if (this->event.type == sf::Event::Closed)
		{
			this->window->close();
		}
	}
}

void Game::update()
{
	this->pollEvent();
}

void Game::render()
{
	this->window->clear();

	this->window->display();
}
void Game::run()
{
	while (this->window->isOpen())
	{
		this->updateDT();
		this->update();
		this->render();
	}
}
