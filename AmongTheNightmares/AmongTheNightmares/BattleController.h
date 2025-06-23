#ifndef BATTLECONTROLLER_H
#define BATTLECONTROLLER_H
#include "Enemy.h"


class BattleController {
private:
	bool player_turn;
public:
	bool Fight(Enemy& enemy, Player& player);
	bool TakeFear(Enemy& enemy, Player& player);
	void SetTurn(bool value);
	BattleController() : player_turn(true) {}
};

#endif