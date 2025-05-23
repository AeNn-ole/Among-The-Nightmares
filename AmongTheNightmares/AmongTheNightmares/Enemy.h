#pragma once
#include "Weapon.h"
#include "Player.h"

class Enemy {
private:
	unsigned int Dilligence;
	unsigned int Summary;
	unsigned int Strength;
	unsigned int Speed;
public:
	unsigned int GetDilligence()const;
	unsigned int GetSummary()const;
	unsigned int GetStrength()const;
	unsigned int GetSpeed()const;
	unsigned int Sum()const;
	void TakeDMG(Weapon& weapon);
	void DealDMG(Player& player);
	void TakeFear(Player& player);
};