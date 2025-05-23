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