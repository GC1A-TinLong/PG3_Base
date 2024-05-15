#include <stdio.h>
#include "Enemy.h"

int main() {

	Enemy* enemy = new Enemy;

	std::cout << "Start" << std::endl;
	enemy->Update();
	std::cout << "End" << std::endl;

	return 0;
}