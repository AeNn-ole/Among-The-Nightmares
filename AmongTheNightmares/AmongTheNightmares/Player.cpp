#include "Player.h"

unsigned int Player::GetCalmness() const {
	return calmness;
}

unsigned int Player::GetMind() const {
	return mind;
}

unsigned int Player::GetStrength() const {
	return strength;
}

unsigned int Player::GetSpeed() const {
	return speed;
}

unsigned int Player::GetFear() const {
	return Fear;
}

void Player::ApplyFear(unsigned int FearAmount) {
	Fear += FearAmount;
}

void Player::AddItem(Weapon& weapon) {
	inventory.push_back(weapon);
}

void Player::DelItem(int i) {
	if(inventory.size() > i){
		inventory.erase(inventory.begin() + i);
	}
	
}

Weapon Player::GetWeapon(int i) {
	return inventory[i];
}