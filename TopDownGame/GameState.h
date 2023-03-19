//
// Created by Daniel on 16.03.2023.
//

#ifndef _GAMESTATE_H_
#define _GAMESTATE_H_

class GameState
{
private:
	bool _isQuit;
	bool _isPaused;

public:
	bool isQuit() const;

	bool isPaused() const;

	void pause();

	void end();

	void resume();

	void run();

	GameState();

	virtual void render() = 0;

	virtual void update() = 0;
};

#endif //_GAMESTATE_H_
