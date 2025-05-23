#pragma once
#include "Item.h"
#include "Enemy.h"
#include<vector>

class Player {
private:
	unsigned int calmness;
	unsigned int mind;
	unsigned int strength;
	unsigned int speed;
	std::vector<Item> inventory;
	unsigned int Fear;
public:
	unsigned int GetFear();
	unsigned int GetCalmness();
	unsigned int GetMind();
	unsigned int GetStrength();
	unsigned int GetSpeed();
	void TakeFear(Enemy& Enemy);
};