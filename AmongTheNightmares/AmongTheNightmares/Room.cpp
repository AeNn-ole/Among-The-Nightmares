#include "Room.h"

void Room::RoomInfo() {
	std::cout << room_text << std::endl;
	if (enemy.GetName() != "Bub") {
		std::cout << "You have enemy in room. His name is: " << enemy.GetName() << std::endl;
	}
	if (weapon.GetName() != "kek") {
		std::cout << "You can take a soft toy: " << weapon.GetName() << std::endl;
	}
}

bool Room::IsEnemy() const {
	return enemy.GetName() != "Bub";
}

std::vector <int> Room::GetIds(){
	return roomids;
}

Weapon& Room::GetWeapon() {
	return weapon;
}

Enemy& Room::GetEnemy() {
	return enemy;
}