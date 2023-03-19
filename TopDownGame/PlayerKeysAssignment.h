//
// Created by Daniel on 16.03.2023.
//

#ifndef _PLAYERKEYSASSIGNMENT_H_
#define _PLAYERKEYSASSIGNMENT_H_

#include "SFML/Window.hpp"

class MoveDownCommand;
class MoveUpCommand;
class MoveLeftCommand;
class MoveRightCommand;

enum KeyAction
{
	MoveLeft,
	MoveRight,
	MoveUp,
	MoveDown,
	Attack
};

class PlayerKeysAssignment
{
public:
	MoveRightCommand* moveRightCommand;
	MoveLeftCommand* moveLeftCommand;
	MoveUpCommand* moveUpCommand;
	MoveDownCommand* moveDownCommand;

	PlayerKeysAssignment(sf::Keyboard::Key left, sf::Keyboard::Key right, sf::Keyboard::Key up, sf::Keyboard::Key down);

	~PlayerKeysAssignment();
};

#endif //_PLAYERKEYSASSIGNMENT_H_
