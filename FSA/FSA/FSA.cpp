// FSA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ShooterEnemyEntity.h"

int main()
{
	ShooterEnemyEntity entity(10, 10, 20, 10);
	std::cout << entity.ID();

	ShooterEnemyEntity entity2(40, 20, 20, 10);
	std::cout << entity2.ID();

	for (int i = 0; i < 10; i++) {
		entity.Update();
		Sleep(800);
	}

	while (!_kbhit()) {}
    return 0;
}

