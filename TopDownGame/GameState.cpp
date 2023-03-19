//
// Created by Daniel on 16.03.2023.
//

#include "GameState.h"

bool GameState::isQuit() const
{
	return _isQuit;
}

bool GameState::isPaused() const
{
	return _isPaused;
}

void GameState::pause()
{
	_isPaused = true;
}

void GameState::end()
{
	_isQuit = true;
}

void GameState::resume()
{
	_isPaused = false;
}

void GameState::run()
{
	_isQuit = false;
}

GameState::GameState()
{
	run();
	resume();
}
