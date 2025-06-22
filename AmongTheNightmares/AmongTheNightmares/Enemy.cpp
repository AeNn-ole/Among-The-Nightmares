#include "Enemy.h"

void Enemy::SetName(std::string new_name) {
	name = new_name;
}

bool Enemy::IsAlive() const {
	return alive;
}

void Enemy::SetAlive() {
	alive = false;
}

unsigned int Enemy::GetDilligence() const {
	return this->dilligence;
}

unsigned int Enemy::GetSummary() const {
	return this->summary;
}

unsigned int Enemy::GetStrength() const {
	return this->strength;
}

unsigned int Enemy::GetSpeed() const {
	return this->speed;
}
unsigned int Enemy::Sum() const {
	return GetDilligence() + GetSummary() + GetSpeed() + GetStrength();
}

void Enemy::TakeDMG(Weapon& weapon) {
	if (weapon.GetCalmness_W() >= GetDilligence()) {
		dilligence = 0;
		summary = 0;
		strength = 0;
		speed = 0;
		SetAlive();
		SetName("Bub");
	}
	else {
		dilligence -= weapon.GetCalmness_W();
		summary -= weapon.GetMind_W();
		strength -= weapon.GetStrength_W();
		speed -= weapon.GetSpeed_W();
	}
}

void Enemy::DealDMG(Player& player) {
	unsigned int fear_amount = Sum();
	std::cout << GetName() << "strikes you for " << fear_amount << std::endl;
	player.ApplyFear(fear_amount);
}

bool Enemy::TakeFear(Player& player) {
	unsigned int fear_amount = Sum() * 1.4;
	player.ApplyFear(fear_amount);
	SetName("Bub");
	if (player.IsAlive()) {
		return false;
	}
	return true;
}

std::string Enemy::GetName() const {
	return name;
}

bool Enemy::Fight(Player& player) {
	Stats();
	int i = 0;
	while (IsAlive()) {
		if (i == 0) {
			int k = player.ChooseWeapon();
			TakeDMG(player.GetWeapon(k));
			Stats();
			player.DelItem(k);
			i = 1;
		}
		else {
			DealDMG(player);
			i = 0;
			if (player.IsAlive()) {
				return false;
			}
		}
	}
	return true;
}

void Enemy::Stats() {
	std::cout << GetName() << " Stats: ";
	std::cout << dilligence << " " << summary << " " << strength << " " << speed << " " << "\n";
}