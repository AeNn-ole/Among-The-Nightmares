#ifndef PLAYER_H
#define PLAYER_H
#include "Weapon.h"
#include <vector>

class Player {
private:
	unsigned int calmness;
	unsigned int mind;
	unsigned int strength;
	unsigned int speed;
	std::vector<Weapon> inventory;
	unsigned int fear;
public:
	unsigned int GetFear()const;
	unsigned int GetCalmness()const;
	unsigned int GetMind()const;
	unsigned int GetStrength()const;
	unsigned int GetSpeed()const;
	bool IsAlive();
	void Inventory();
	void SetStats(Weapon& weapon);
	void ApplyFear(unsigned int fear_amount);
	void AddItem(Weapon& item);
	void DelItem(int i);
	Weapon& GetWeapon(int i);
	int ChooseWeapon();
	void Status();
};

#endif 