#include<SFML/Graphics.hpp>
#include<stdio.h>

int main()
{
	sf::RenderWindow renderWindow(sf::VideoMode(1080, 720), "Title");

	sf::Event event;

	sf::CircleShape circleShape(10);
	circleShape.setPosition(100.f, 100.f);
	circleShape.setFillColor(sf::Color::Red);
	circleShape.setOrigin(circleShape.getRadius(),circleShape.getRadius());

	sf::RectangleShape collision(sf::Vector2f(200,40));
	collision.setPosition(200.f, 200.f);
	collision.setFillColor(sf::Color::White);

	while (renderWindow.isOpen())
	{
		while (renderWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				renderWindow.close();
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			circleShape.move(-0.1f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			circleShape.move(0.1f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			circleShape.move(0.0f, -0.1f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			circleShape.move(0.0f, 0.1f);
		}
		if (collision.getGlobalBounds().intersects(circleShape.getGlobalBounds())) {
			circleShape.setPosition(10.f,10.f);
		}
		renderWindow.clear();
		renderWindow.draw(circleShape);
		renderWindow.draw(collision);
		renderWindow.display();
	}
	return 0;
}