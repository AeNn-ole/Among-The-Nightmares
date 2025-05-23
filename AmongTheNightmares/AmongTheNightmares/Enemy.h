#pragma once
#include "Player.h"
class Enemy {
private:
	unsigned int Dilligence;
	unsigned int Summary;
	unsigned int Strength;
	unsigned int Speed;
public:
	unsigned int GetDilligence();
	unsigned int GetSummary();
	unsigned int GetStrength();
	unsigned int GetSpeed();
	unsigned int Sum();
	void TakeDMG();
	void DealDMG(Player& player);
	void TakeFear(Player& player);
};