#pragma once
#include <iostream>

class Weapon {
private:
	unsigned int calmness;
	unsigned int mind;
	unsigned int strength;
	unsigned int speed;
	std::string name;
public:
	unsigned int GetCalmness_W()const;
	unsigned int GetMind_W()const;
	unsigned int GetStrength_W()const;
	unsigned int GetSpeed_W()const;
	std::string GetName() const;
	void SetName(std::string n);
	Weapon(unsigned int calmness = 0, unsigned int mind = 0, unsigned int strength = 0, unsigned int speed = 0, std::string name = "kek") : calmness(calmness), mind(mind), strength(strength), speed(speed), name(name){};
};