#include "Player.h"

unsigned int Player::GetCalmness() {
	return this->calmness;
}

unsigned int Player::GetMind() {
	return this->mind;
}

unsigned int Player::GetStrength() {
	return this->strength;
}

unsigned int Player::GetSpeed() {
	return this->speed;
}

unsigned int Player::GetFear() {
	return this->Fear;
}

void Player::TakeFear(Enemy& enemy) {
	Fear -= enemy.Sum() * 1.2;
}