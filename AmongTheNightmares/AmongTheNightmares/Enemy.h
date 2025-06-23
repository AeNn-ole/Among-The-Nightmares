#ifndef ENEMY_H
#define ENEMY_H
#include "Weapon.h"
#include "Player.h"
#include <iostream>

class Enemy {
private:
	unsigned int dilligence;
	unsigned int summary;
	unsigned int strength;
	unsigned int speed;
	std::string name;
	bool alive;
public:
	std::string GetName() const;
	unsigned int GetDilligence()const;
	unsigned int GetSummary()const;
	unsigned int GetStrength()const;
	unsigned int GetSpeed()const;
	unsigned int Sum()const;
	bool IsAlive() const;
	void SetAlive();
	void TakeDMG(Weapon& weapon);
	void DealDMG(Player& player);
	void Stats();
	void SetName(std::string name);
	Enemy(unsigned int one = 0, unsigned int two= 0, unsigned int three = 0, unsigned int four = 0, std::string name = "Bub") : dilligence(one), summary(two), strength(three), speed(four) , name(name), alive(true){};
};

#endif 