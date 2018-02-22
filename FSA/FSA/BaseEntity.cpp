#include "stdafx.h"
#include "BaseEntity.h"

int BaseEntity::m_iID = 0;
int BaseEntity::m_iNextID;

BaseEntity::BaseEntity()
{
	m_iID++;
	m_iNextID = m_iID;
}

BaseEntity::~BaseEntity()
{

}

void BaseEntity::Update()
{
}

int BaseEntity::ID()
{
	return m_iID;
}
