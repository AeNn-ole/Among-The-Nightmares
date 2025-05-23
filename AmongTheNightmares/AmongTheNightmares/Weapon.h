#pragma once


class Weapon {
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
	Weapon(unsigned int calmness, unsigned int mind, unsigned int strength, unsigned int speed) : calmness(calmness), mind(mind), strength(strength), speed(speed){};
};