#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Loader.h"
#include "BattleController.h"
#include <iostream>
#include <windows.h>


class Game {
private:
	Player player;
	Loader loader;
	int location;
	std::vector<Room> rooms;
	int current_id;
	int prev_id;
public:
	int GetCurrentId();
	void Win();
	bool IsWin();
	void SetPRId(int id);
	void SetId(int Id);
	void Menu();
	void Run();
	Game();
};

#endif 