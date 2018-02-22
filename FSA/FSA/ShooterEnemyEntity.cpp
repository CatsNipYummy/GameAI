#include "stdafx.h"
#include "ShooterEnemyEntity.h"

ShooterEnemyEntity::ShooterEnemyEntity(int NumberOfBullets, int Health, int Stamina, bool IsSafe)
{
	m_iNumberOfBullets = NumberOfBullets;
	m_iHealth = Health;
	m_iStamina = Stamina;
	m_bIsSafe = IsSafe;
}

ShooterEnemyEntity::~ShooterEnemyEntity()
{

}

void ShooterEnemyEntity::Update()
{

}
