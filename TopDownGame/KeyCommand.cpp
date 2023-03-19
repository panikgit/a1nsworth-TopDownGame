//
// Created by Daniel on 16.03.2023.
//

#include "KeyCommand.h"
void KeyCommand::setKey(sf::Keyboard::Key key)
{
	this->key = key;
}
sf::Keyboard::Key KeyCommand::getKey() const
{
	return key;
}
KeyCommand::KeyCommand(sf::Keyboard::Key key)
{
	setKey(key);
}
