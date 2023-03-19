//
// Created by Daniel on 16.03.2023.
//

#include "TwoPlayerInputController.h"


TwoPlayerInputController::TwoPlayerInputController(Tank* player1, Tank* player2)
{
	this->player1 = player1;
	this->player2 = player2;
}

void TwoPlayerInputController::keyProcess(Tank* player, const float dt) const
{
	player->updateDirect();
	if (sf::Keyboard::isKeyPressed(player->keysAssignment.moveUpCommand->getKey()))
	{
		player->keysAssignment.moveUpCommand->execute(player, dt);
	}
	if (sf::Keyboard::isKeyPressed(player->keysAssignment.moveDownCommand->getKey()))
	{
		player->keysAssignment.moveDownCommand->execute(player, dt);
	}
	if (sf::Keyboard::isKeyPressed(player->keysAssignment.moveLeftCommand->getKey()))
	{
		player->keysAssignment.moveLeftCommand->execute(player, dt);
	}
	if (sf::Keyboard::isKeyPressed(player->keysAssignment.moveRightCommand->getKey()))
	{
		player->keysAssignment.moveRightCommand->execute(player, dt);
	}
}

void TwoPlayerInputController::keysProcessing(const float dt) const
{
	keyProcess(player1, dt);
	keyProcess(player2, dt);
}
