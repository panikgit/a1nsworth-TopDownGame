//
// Created by Daniel on 16.03.2023.
//

#ifndef _MOVEUPCOMMAND_H_
#define _MOVEUPCOMMAND_H_

#include "Command.h"
#include "KeyCommand.h"

class MoveUpCommand : public KeyCommand, public Command
{
public:
	MoveUpCommand(sf::Keyboard::Key);

	void execute(Tank* t, float dt) override;
};

#endif //_MOVEUPCOMMAND_H_
