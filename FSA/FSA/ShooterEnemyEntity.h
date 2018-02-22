#pragma once
#include "BaseEntity.h"
class ShooterEnemyEntity :
	public BaseEntity
{
private:
	int m_iNumberOfBullets;
	int m_iHealth;
	int m_iStamina;
	bool m_bIsSafe;

public:
	ShooterEnemyEntity(int NumberOfBullets,
					   int Health,
					   int Stamina,
					   bool IsSafe);
	~ShooterEnemyEntity();

	void Update();
};