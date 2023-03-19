//
// Created by Daniel on 16.03.2023.
//

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Tank.h"

class Command
{
public:
	virtual void execute(Tank* t, float dt) = 0;
};

#endif //_COMMAND_H_
