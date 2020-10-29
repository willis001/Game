#pragma once

#include<iostream>
#include<SFML\Graphics.hpp>

class Player
{
public:
	Player() {

	}

	Player(std::string imgDirectory) {
		if (!pTexture.loadFromFile(imgDirectory)) {
			std::cout << "Load player failed\n" << std::endl;
		}
		pSprite.setTexture(pTexture);
		pSprite.setTextureRect(sf::IntRect(0, 0, 18, 18));
	}

	void drawPlayer(sf::RenderWindow& window) {
		window.draw(pSprite);
	}

	void movePlayer(char direction, float moveSpeed) {
		if (direction == 'u') {
			pSprite.move(0, -moveSpeed);
		}
		if (direction == 'd') {
			pSprite.move(0, moveSpeed);
		}
		if (direction == 'l') {
			pSprite.move(-moveSpeed, 0);
		}
		if (direction == 'r') {
			pSprite.move(moveSpeed, 0);
		}
	}
private:
	sf::Texture pTexture;
	sf::Sprite pSprite;
};

