#include "EntityProperties.h"

EntityProperties::EntityProperties() = default;

EntityProperties::EntityProperties(const float x, const float y)
{
	direct_ = sf::Vector2f(x, y);
}

void EntityProperties::setDirect(const sf::Vector2f direct)
{
	direct_ = direct;
}

sf::Vector2f EntityProperties::getDirect() const
{
	return direct_;
}
