//
// Created by Daniel on 16.03.2023.
//

#include "PlayerKeysAssignment.h"

#include "MoveDownCommand.h"
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"
#include "MoveUpCommand.h"


PlayerKeysAssignment::PlayerKeysAssignment(const sf::Keyboard::Key left,
                                           const sf::Keyboard::Key right,
                                           const sf::Keyboard::Key up,
                                           const sf::Keyboard::Key down)
{
	moveRightCommand = new MoveRightCommand(right);
	moveLeftCommand = new MoveLeftCommand(left);
	moveUpCommand = new MoveUpCommand(up);
	moveDownCommand = new MoveDownCommand(down);
}

PlayerKeysAssignment::~PlayerKeysAssignment()
{
	delete moveUpCommand;
	delete moveDownCommand;
	delete moveLeftCommand;
	delete moveRightCommand;
}
