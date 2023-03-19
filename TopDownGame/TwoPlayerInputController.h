//
// Created by Daniel on 16.03.2023.
//

#ifndef _PLAYERINPUTCONTROLLER_H_
#define _PLAYERINPUTCONTROLLER_H_

#include <vector>
#include <ppl.h>


#include "Tank.h"
#include "MoveDownCommand.h"
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"
#include "MoveUpCommand.h"

#include "SFML/Window.hpp"

class TwoPlayerInputController
{
public:
	Tank* player1;
	Tank* player2;

	TwoPlayerInputController(Tank* player1, Tank* player2);

	void keyProcess(Tank* player, float dt) const;

	void keysProcessing(float dt) const;
};

#endif //_PLAYERINPUTCONTROLLER_H_
