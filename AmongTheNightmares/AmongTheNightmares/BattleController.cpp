#include "BattleController.h"

void BattleController::SetTurn(bool value) {
	player_turn = value;
}

bool BattleController::Fight(Enemy& enemy, Player& player) {
	enemy.Stats();
	while (enemy.IsAlive()) {
		if (player_turn) {
			int k = player.ChooseWeapon();
			enemy.TakeDMG(player.GetWeapon(k));
			enemy.Stats();
			player.DelItem(k);
			SetTurn(false);
		}
		else {
			enemy.DealDMG(player);
			if (player.IsAlive()) {
				player.Death();
				return false;
			}
			SetTurn(true);
		}
	}
	SetTurn(true);
	return true;
}

bool BattleController::TakeFear(Enemy& enemy, Player& player) {
	unsigned int fear_amount = enemy.Sum() * 1.4;
	player.ApplyFear(fear_amount);
	enemy.SetName("Bub");
	if (player.IsAlive()) {
		player.Death();
		return false;
	}
	std::cout << "You met face to face with a nightmare, and he disappeared." << std::endl;
	return true;
}