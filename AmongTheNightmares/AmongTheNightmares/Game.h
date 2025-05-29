#pragma once
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
	int CurrentId = 0;
	int PrevId = 0;
public:
	void SetPRId(int id);
	void SetId(int Id);
	void Menu();
	void Run();
	Game();
};