//
// Created by Daniel on 16.03.2023.
//

#ifndef _MOVELEFTCOMMAND_H_
#define _MOVELEFTCOMMAND_H_

#include "Command.h"
#include "KeyCommand.h"

class MoveLeftCommand : public KeyCommand, public Command
{
public:
	MoveLeftCommand(sf::Keyboard::Key);

	void execute(Tank* t, float dt) override;
};

#endif //_MOVELEFTCOMMAND_H_
