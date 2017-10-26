#include <cstdlib>
#include <iostream>

#include "state-menu.h"
#include "window-manager.h"
#include "states-manager.h"

void StateMenu::Init(ResourcesManager & resources)
{
	// initialize variables
	paused_ = false;
	resources_ = resources;

	InitBackground();
	InitDialog();

}

void StateMenu::InitBackground()
{
	if (!resources_.ImportTexture("resources/textures/bg-menu.png", "bg-menu"))
	{
		std::cout << "Unable to load bg-menu";
	}
	background_texture_ = resources_.GetTexture("bg-menu");
	background_.setTexture(background_texture_);
	float x = float(Window::Width) / float(background_texture_.getSize().x);
	float y = float(Window::Height) / float(background_texture_.getSize().y);

	background_.setScale(sf::Vector2f(
		float(Window::Width) / float(background_texture_.getSize().x),
		float(Window::Height) / float(background_texture_.getSize().y)
	));
}

void StateMenu::InitDialog()
{
	dialog_.AddHeader("Main Menu");

	dialog_.AddButton("Load Game");
	dialog_.AddButton("New Game");
	dialog_.AddButton("Delete Game");
	dialog_.AddButton("Miscellaneous");
	dialog_.AddButton("Exit");

	dialog_.AddText("No copyright (c) 2017 dsonyy");
}

void StateMenu::Cleanup()
{

}

void StateMenu::HandleInput(const InputRecord & input_record)
{
	if (input_record.MouseMoved())
	{
		if (click_box_manager_.Check(input_record.UnpackMousePos(), "test"))
		{
		}
		else
		{
		}
	}

}

void StateMenu::Update()
{
	
}

void StateMenu::Draw(WindowManager & window)
{
	window.draw(background_);
	window.draw(dialog_);

}

void StateMenu::Pause()
{

}

void StateMenu::Resume()
{

}

StateI * StateMenu::IsCompleted(StatesManager & states_manager)
{
	return &states_manager.Menu();
}

