#pragma once
#include "Weapon.h"
#include "Player.h"
#include <iostream>

class Enemy {
private:
	unsigned int Dilligence;
	unsigned int Summary;
	unsigned int Strength;
	unsigned int Speed;
	std::string Name;
public:
	std::string GetName() const;
	unsigned int GetDilligence()const;
	unsigned int GetSummary()const;
	unsigned int GetStrength()const;
	unsigned int GetSpeed()const;
	unsigned int Sum()const;
	void TakeDMG(Weapon& weapon);
	void DealDMG(Player& player);
	void TakeFear(Player& player);
	Enemy(unsigned int one = 0, unsigned int two= 0, unsigned int three = 0, unsigned int four = 0, std::string name = "Bub") : Dilligence(one), Summary(two), Strength(three), Speed(four) , Name(name){};
};