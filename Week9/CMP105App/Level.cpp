#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	srand(time(NULL));
	window = hwnd;
	input = in;

	// initialise game objects
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Space)) {
		input->setKeyUp(sf::Keyboard::Space);
		ballmanager.spawn();
	}
}

// Update game objects
void Level::update(float dt)
{
	ballmanager.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	ballmanager.render(window);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}