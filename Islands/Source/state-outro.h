#pragma once

#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

#include "state-i.h"
#include "buffer.h"
#include "input-record.h"
#include "window-manager.h"

class StatesManager;

class StateOutro
	: public StateI
{
public:
	StateOutro() : paused_(true) {}
	~StateOutro() {}

	virtual void Init();
	virtual void Cleanup();

	virtual void HandleInput(const InputRecord & input_record);
	virtual void Update();
	virtual void Draw(WindowManager & window);

	virtual void Pause();
	virtual void Resume();

	virtual StateI * WaitForChange(StatesManager & states_manager);
private:
	bool paused_;

};