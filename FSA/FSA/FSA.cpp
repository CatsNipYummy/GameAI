// FSA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

#include "BaseEntity.h"

int main()
{
	BaseEntity entity;
	std::cout << entity.ID();

	BaseEntity entity2;
	std::cout << entity2.ID();

	while (!_kbhit()) {}
    return 0;
}

