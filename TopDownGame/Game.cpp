//
// Created by Daniel on 09.03.2023.
//

#include "Game.h"


// TODO разобратьс€ с усправление . ¬ цикле медленнее вне быстрее
// TODO sf::VideoMode::height

Game* Game::_instance = nullptr;

Game::Game()
{
	_window = new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), TITLE, sf::Style::Close);
	_window->setFramerateLimit(FPS);
	_window->setVerticalSyncEnabled(true);

	_bg = new BackGround();
	_t1 = new Tank(YellowBlack, sf::Keyboard::Key::A, sf::Keyboard::Key::D, sf::Keyboard::Key::W, sf::Keyboard::Key::S);

	_t2 = new Tank(RedBlack, sf::Keyboard::Key::Left, sf::Keyboard::Key::Right, sf::Keyboard::Key::Up,
	               sf::Keyboard::Key::Down);

	_t1->setPositionSprite(sf::VideoMode(WIDTH / 4, HEIGHT / 4));
	_t2->setPositionSprite(sf::VideoMode(WIDTH / 2, HEIGHT / 2));
	inputController_ = new TwoPlayerInputController(_t1, _t2);
}

void Game::run()
{
	while (_window->isOpen())
	{
		updateDeltaTime();
		update();
		render();
	}
}

void Game::update()
{
	updateEvents();

	if (!_states.empty())
	{
		_states.top()->update();

		if (!_window->hasFocus())
		{
			if (_states.top()->isQuit())
			{
				_states.top()->end();
				delete _states.top();
				_states.pop();
			}
		}
	}
}


void Game::updateEvents()
{
	sf::Event ev;

	while (_window->pollEvent(ev))
	{
		if (ev.type == sf::Event::Closed)
		{
			_window->close();
		}
	}

	// ƒвижение персонажей
	inputController_->keysProcessing(_deltaTime);
}

void Game::updateDeltaTime()
{
	_deltaTime = _deltaClock.restart().asMilliseconds() / 1000.f;
}

void Game::render()
{
	_window->clear();
	_bg->render(_window);
	_t1->render(_window);
	_t2->render(_window);

	if (!_states.empty())
	{
		_states.top()->render();
	}

	_window->display();
}

Game* Game::instance()
{
	if (_instance == nullptr)
		_instance = new Game();
	return _instance;
}

Game::~Game()
{
	delete _instance;
	delete _t1;
	delete _t2;
	delete _bg;
}
