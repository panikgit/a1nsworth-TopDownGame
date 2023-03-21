//
// Created by Daniel on 16.03.2023.
//

#include "MoveLeftCommand.h"
void MoveLeftCommand::execute(Tank* t, float dt)
{
	//t->turnLeft(dt);
	t->rotateCCW(dt);
}
MoveLeftCommand::MoveLeftCommand(sf::Keyboard::Key key) : KeyCommand(key)
{
}
