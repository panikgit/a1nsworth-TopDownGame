#include "Game.h"

int main()
{
	Game::instance()->run();

	std::cout << sin(0 * 3.14 / 180) << ' ' << cos(0 * 3.14 / 180) << '\n';
}
