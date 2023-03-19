//
// Created by Daniel on 16.03.2023.
//

#ifndef _KEYCOMMAND_H_
#define _KEYCOMMAND_H_

#include "SFML/Window.hpp"

class KeyCommand
{
protected:
	sf::Keyboard::Key key;

public:
	void setKey(sf::Keyboard::Key key);

	sf::Keyboard::Key getKey() const;

	KeyCommand(sf::Keyboard::Key key);
};

#endif //_KEYCOMMAND_H_
