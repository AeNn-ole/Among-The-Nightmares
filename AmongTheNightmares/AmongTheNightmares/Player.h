#pragma once
#include "Weapon.h"
#include <vector>

class Player {
private:
	unsigned int calmness;
	unsigned int mind;
	unsigned int strength;
	unsigned int speed;
	std::vector<Weapon> inventory;
	unsigned int Fear;
public:
	unsigned int GetFear()const;
	unsigned int GetCalmness()const;
	unsigned int GetMind()const;
	unsigned int GetStrength()const;
	unsigned int GetSpeed()const;
	void ApplyFear(unsigned int FearAmount);
	void AddItem(Weapon& item);
	void DelItem(int i);
	Weapon GetWeapon(int i);
};