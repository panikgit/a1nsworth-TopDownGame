#ifndef _ENTITYPROPERTIES_H_
#define _ENTITYPROPERTIES_H_

#include "SFML/Graphics.hpp"

class EntityProperties
{
protected:
	sf::Vector2f direct_;

public:
	EntityProperties();

	EntityProperties(float x, float y);

	void setDirect(sf::Vector2f direct);

	sf::Vector2f getDirect() const;
};

#endif
