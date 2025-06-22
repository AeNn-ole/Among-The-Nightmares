#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Loader.h"
#include <iostream>
#include <windows.h>


class Game {
private:
	Player player;
	Loader loader;
	int location = 1;
	std::vector<Room> rooms;
	int current_id = 0;
	int prev_id = 0;
public:
	void SetPRId(int id);
	void SetId(int Id);
	void Menu();
	void Run();
	Game();
};

#endif 