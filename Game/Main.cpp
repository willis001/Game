#include <iostream>
#include "Game.h"
#include "Player.h"
int main()
{
	/*sf::RenderWindow renderWindow(sf::VideoMode(1080, 720), "Title", sf::Style::Close | sf::Style::Titlebar);

	sf::Event event;*/

	Game game;

	sf::Texture bg;
	if (!bg.loadFromFile("res/image/background.png"))
	{
		std::cout << "Load bg failed" << std::endl;
	}

	sf::Sprite s(bg);
	s.setTextureRect(sf::IntRect(0, 0, 1080, 720));

	sf::RectangleShape collision(sf::Vector2f(200,40));
	collision.setPosition(200.f, 200.f);
	collision.setFillColor(sf::Color::White);

	Player myPlayer("res/image/mainCharacter.png");
	
	/*sf::Texture mcSprite;
	if (!mcSprite.loadFromFile("res/image/mainCharacter.png"))
	{
		std::cout << "Load mainC failed" << std::endl;
	}

	sf::Sprite mainCharacter;
	mainCharacter.setTexture(mcSprite);
	mainCharacter.setTextureRect(sf::IntRect(0, 0, 18, 18));
	
	int spriteSizeX = mcSprite.getSize().x / 7;
	int spriteSizeY = mcSprite.getSize().y / 2;

	mainCharacter.setTextureRect(sf::IntRect(0, 0, spriteSizeX, spriteSizeY));

	int animationFrame2 = 0;*/

	sf::Clock clock;

	while (game.getWindowIsOpen())
	{
		game.run();
		/*while (renderWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				renderWindow.close();
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			mainCharacter.move(-0.05f, 0.0f);
			mainCharacter.setTextureRect(sf::IntRect(spriteSizeX * animationFrame2, spriteSizeY * 1, spriteSizeX, spriteSizeY));
			myPlayer.movePlayer('l', 0.05f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			mainCharacter.move(0.05f, 0.0f);
			mainCharacter.setTextureRect(sf::IntRect(spriteSizeX * animationFrame2, spriteSizeY * 1, spriteSizeX, spriteSizeY));
			myPlayer.movePlayer('r', 0.05f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			mainCharacter.move(0.0f, -0.05f);
			mainCharacter.setTextureRect(sf::IntRect(spriteSizeX * animationFrame2, spriteSizeY * 1, spriteSizeX, spriteSizeY));
			myPlayer.movePlayer('u', 0.05f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			mainCharacter.move(0.0f, 0.05f);
			mainCharacter.setTextureRect(sf::IntRect(spriteSizeX * animationFrame2, spriteSizeY * 1, spriteSizeX, spriteSizeY));
			myPlayer.movePlayer('d', 0.05f);
		}
		if (collision.getGlobalBounds().intersects(mainCharacter.getGlobalBounds())) {
			mainCharacter.setPosition(10.f,10.f);
		}
		animationFrame2++;

		if (animationFrame2 >= 7) {
			animationFrame2 = 0;
		}
		renderWindow.clear();
		renderWindow.draw(s);
		//renderWindow.draw(mainCharacter);
		myPlayer.drawPlayer(renderWindow);
		renderWindow.draw(collision);
		renderWindow.display();*/
	}
	return 0;
}