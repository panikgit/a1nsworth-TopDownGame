//
// Created by Daniel on 16.03.2023.
//

#ifndef _MOVEDOWNCOMMAND_H_
#define _MOVEDOWNCOMMAND_H_

#include "Command.h"
#include "KeyCommand.h"

class MoveDownCommand : public KeyCommand, public Command
{
public:
	MoveDownCommand(sf::Keyboard::Key);

	void execute(Tank* t, float dt) override;
};

#endif //_MOVEDOWNCOMMAND_H_
