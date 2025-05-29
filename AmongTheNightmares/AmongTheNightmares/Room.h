#pragma once
#include <iostream>
#include <vector>
#include "Enemy.h"

class Room {
private:
	int RoomId;
	std::string RoomText;
	Weapon weapon;
	Enemy enemy;
	std::vector<int> roomids;
public:
	Room(int id, std::string text, Enemy enemy, std::vector<int> ids, Weapon weapon) : RoomId(id), RoomText(text), enemy(enemy), weapon(weapon) {
		roomids = ids;
	};
	std::vector<int> GetIds();
	void RoomInfo();
	bool IsEnemy() const;
	Weapon& GetWeapon();
};