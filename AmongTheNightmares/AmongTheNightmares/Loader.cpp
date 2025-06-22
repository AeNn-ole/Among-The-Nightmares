#include "Loader.h"


void Loader::LoadLocation (int LocId, std::vector<Room>& rooms) {
	if (LocId == 1) {
		std::ifstream file("location1.txt");
		std::string line, text;
		int count = 0, room_id = 0,  enemy_id = 0, weap_id = 0;
		
		std::getline(file, line);
		count = stoi(line);
		
		for(int i = 0; i < count; i++){
		std::vector<int> nextid, itemid;
		std::getline(file, line);
		std::getline(file, text);
		
		std::getline(file, line);
		room_id = stoi(line);

		std::getline(file, line);
		std::istringstream ss(line);
		int num;
		while (ss >> num) {
			nextid.push_back(num);
		}
		std::getline(file, line);
		enemy_id = stoi(line);

		std::getline(file, line);
		weap_id = stoi(line);

		rooms.push_back(Room(room_id, text, LoadEnemy(enemy_id), nextid, LoadWeapon(weap_id)));
		}
	}
}

Enemy Loader::LoadEnemy(int id) {
	std::ifstream file("Enemy.txt");
	std::string line, name;
	unsigned int one, two, three, four;
	if (id == 0) {
		Enemy enemy;
		return enemy;
	}
	while (!file.eof()) {
		std::getline(file, line);
		if (id > stoi(line)) {
			getline(file, line);
		}
		else if (id == stoi(line)) {
			getline(file, line);
			std::stringstream ss(line);
			ss >> one >> two >> three >> four >> name;
			Enemy enemy(one, two, three, four, name);
			return enemy;
		}
	}
}

Weapon Loader::LoadWeapon(int id) {
	std::ifstream file("Weapon.txt");
	std::string line, name;
	unsigned int one, two, three, four;
	if (id == 0) {
		Weapon weapon;
		return weapon;
	}
	while (!file.eof()) {
		std::getline(file, line);
		if (id > stoi(line)) {
			getline(file, line);
		}
		else if (id == stoi(line)) {
			getline(file, line);
			std::stringstream ss(line);
			ss >> one >> two >> three >> four >> name;
			Weapon weapon(one, two, three, four, name);
			return weapon;
		}
	}
}