/*
 *	Program:	Islands
 *	License:	GNU GPL 2.0
 *	Author:		dsonyy
 *	GitHub:		https://github.com/dsonyy/Islands
 */


#pragma once

#include <string>
#include <vector>

#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

#include "window-manager.h"
#include "graphics-manager.h"
#include "state-i.h"
#include "buffer.h"

class Game
{
public:
	Game(std::vector<StateI *> avalible_states, GraphicsManager * graphics, WindowManager * window);
	~Game();

	void Loop();
	void HandleInput(const sf::Event & event);
	void Update();
	void Render();


private:
	WindowManager * window_;
	GraphicsManager * graphics_;
	bool running_;
	std::vector<StateI *> states_;
};
