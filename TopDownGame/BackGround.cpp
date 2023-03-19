//
// Created by Daniel on 16.03.2023.
//

#include "BackGround.h"
void BackGround::render(sf::RenderWindow* target)
{
	auto window = target;
	for (int i = 0; i < MAP.size(); ++i)
	{
		for (int j = 0; j < MAP[0].size(); ++j)
		{
			switch (MAP[i][j])
			{
			case Earth1:
				_mapSprite.setTextureRect(sf::IntRect(290, 105, 79, 79));
				break;
			case Blue:
				_mapSprite.setTextureRect(sf::IntRect(105, 70, 79, 79));
				break;
			}

			_mapSprite.setPosition(j * 79, i * 79);
			window->draw(_mapSprite);
		}
	}
}
BackGround::BackGround()
{
	_mapImage.loadFromFile("../Textures/Tiles.png");
	_mapTexture.loadFromImage(_mapImage);
	_mapSprite.setTexture(_mapTexture);
}

