#ifndef LOADER_H
#define LOADER_H

#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include "Room.h"
#include "Enemy.h"
#include <sstream>

class Loader {
public:
	void LoadLocation(int LocId, std::vector<Room>& rooms);
	//void LoadText();
	Weapon LoadWeapon(int id);
	Enemy LoadEnemy(int id);
};

#endif 