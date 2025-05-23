#pragma once
#include "Item.h"

class Enemy;

class Weapon : public Item {
private:
	unsigned int calmness;
	unsigned int mind;
	unsigned int strength;
	unsigned int speed;
public:
	unsigned int GetCalmness_W()const;
	unsigned int GetMind_W()const;
	unsigned int GetStrength_W()const;
	unsigned int GetSpeed_W()const;
	void Use(Enemy& enemy);
};