#include "Player.h"
#include "Enemy.h"

unsigned int Enemy::GetDilligence() {
	return this->Dilligence;
}

unsigned int Enemy::GetSummary() {
	return this->Summary;
}

unsigned int Enemy::GetStrength() {
	return this->Strength;
}

unsigned int Enemy::GetSpeed() {
	return this->Speed;
}
unsigned int Enemy::Sum() {
	return GetDilligence() + GetSummary() + GetSpeed() + GetSpeed();
}

void Enemy::DealDMG(Player& player) {
	
}

void Enemy::TakeFear(Player& player) {

}