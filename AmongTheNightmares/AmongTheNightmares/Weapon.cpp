#include "Weapon.h"

unsigned int Weapon::GetCalmness_W() const {
	return calmness;
}

unsigned int Weapon::GetMind_W() const {
	return mind;
}

unsigned int Weapon::GetStrength_W() const {
	return strength;
}

unsigned int Weapon::GetSpeed_W() const {
	return speed;
}

std::string Weapon::GetName() const {
	return name;
}

void Weapon::SetName(std::string n) {
	name = n;
}

