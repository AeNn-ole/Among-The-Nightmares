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
	return fear;
}

void Player::SetStats(Weapon& weapon) {
	calmness += weapon.GetCalmness_W();
	mind += weapon.GetMind_W();
	strength += weapon.GetStrength_W();
	speed += weapon.GetSpeed_W();
}

void Player::ApplyFear(unsigned int fear_amount) {
	fear += fear_amount;
}

void Player::AddItem(Weapon& weapon) {
	inventory.push_back(weapon);
	SetStats(weapon);
}

void Player::DelItem(int i) {
	calmness -= inventory[i].GetCalmness_W();
	mind -= inventory[i].GetMind_W();
	strength -= inventory[i].GetStrength_W();
	speed -= inventory[i].GetSpeed_W();
	if(inventory.size() > i){
		inventory.erase(inventory.begin() + i);
	}
	
	
}

Weapon& Player::GetWeapon(int i) {
	return inventory[i];
}

void Player::Status() {
	std::cout << "Your Status: " << std::endl;
	std::cout << "You are scared at " << fear << " out of 100" << std::endl;
	std::cout << "Your Stats:" << std::endl;
	std::cout << "Calmness: " << calmness << std::endl;
	std::cout << "Mind: " << mind << std::endl;
	std::cout << "Strength: " << strength << std::endl;
	std::cout << "Speed: " << speed << std::endl;
	Inventory();
}

void  Player::Inventory() {
	int k = 0;
	std::cout << "Your inventory: " << std::endl;
	for (auto& i : inventory) {
		std::cout << k << ". " << i.GetName() << std::endl;
		k++;
	}
	
}

int Player::ChooseWeapon() {
	int m = 0;
	Inventory();
	std::cout << "Choose weapon number: " << std::endl;
	std::cin >> m;
	return m;
}

bool Player::IsAlive() {
	return fear >= 100;
}
