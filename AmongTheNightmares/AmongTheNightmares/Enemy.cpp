#include "Enemy.h"



unsigned int Enemy::GetDilligence() const {
	return this->Dilligence;
}

unsigned int Enemy::GetSummary() const {
	return this->Summary;
}

unsigned int Enemy::GetStrength() const {
	return this->Strength;
}

unsigned int Enemy::GetSpeed() const {
	return this->Speed;
}
unsigned int Enemy::Sum() const {
	return GetDilligence() + GetSummary() + GetSpeed() + GetStrength();
}

void Enemy::TakeDMG(Weapon& weapon) {
	Dilligence -= weapon.GetCalmness_W();
	Summary -= weapon.GetMind_W();
	Strength -= weapon.GetStrength_W();
	Speed -= weapon.GetSpeed_W();
}

void Enemy::DealDMG(Player& player) {
	unsigned int FearAmount = Sum();
	player.ApplyFear(FearAmount);
}

void Enemy::TakeFear(Player& player) {
	unsigned int FearAmount = Sum() * 1.4;
	player.ApplyFear(FearAmount);
}

std::string Enemy::GetName() const {
	return Name;
}