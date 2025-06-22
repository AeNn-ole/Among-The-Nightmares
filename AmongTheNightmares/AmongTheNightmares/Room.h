#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <vector>
#include "Enemy.h"

class Room {
private:
	int room_id;
	std::string room_text;
	Weapon weapon;
	Enemy enemy;
	std::vector<int> roomids;
public:
	Room(int id, std::string text, Enemy enemy, std::vector<int> ids, Weapon weapon) : room_id(id), room_text(text), enemy(enemy), weapon(weapon) {
		roomids = ids;
	};
	std::vector<int> GetIds();
	void RoomInfo();
	bool IsEnemy() const;
	Weapon& GetWeapon();
	Enemy& GetEnemy();
};

#endif 