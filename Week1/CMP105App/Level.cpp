#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	//J. Constructor
	//Original
	///rect.setSize(sf::Vector2f(50, 5));
	///rect.setPosition(100, 100);
	///rect.setFillColor(sf::Color::Red);
	//3.
	circle.setPosition(500,100);
	circle.setRadius(30);
	circle.setFillColor(sf::Color::Cyan);
	//4.
	rect.setSize(sf::Vector2f(50, 50));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(30, 30));
	rect2.setPosition(110, 110);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(10, 10));
	rect3.setPosition(120, 120);
	rect3.setFillColor(sf::Color::Blue);
	//5.
	font.loadFromFile("font/arial.ttf");
	text.setString("Hello world");
	text.setFont(font);
	text.setFillColor(sf::Color::Red);
	text.setCharacterSize(50);
	text.setPosition(100,20);
	//6.
	rect4.setSize(sf::Vector2f(30, 30));
	rect4.setFillColor(sf::Color::Green);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	pos = window->getSize();
	rect4.setPosition(pos.x - 30, pos.y - 30);
	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);
	window->draw(circle);
	window->draw(text);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}