/*
 *	Program:	Islands
 *	License:	GNU GPL 2.0
 *	Author:		dsonyy
 *	GitHub:		https://github.com/dsonyy/Islands
 */


#pragma once

#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

namespace Window
{
	const unsigned int FrameRate = 60;
	const unsigned int Width = 800;
	const unsigned int Height = 450;
	const int Style = sf::Style::Close | sf::Style::Titlebar;
	const std::string Title = "Islands";
}

using namespace Window;

class WindowManager
	: public sf::RenderWindow
{
public:
	WindowManager() {};
	~WindowManager() {};

	void CreateWindow(size_t width = Width, size_t height = Height,
		const std::string & title = Title, size_t style = Style);

private:

};
