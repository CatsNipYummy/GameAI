#pragma once
#include "BaseEntity.h"

class State
{
public:

	virtual ~State() {};

	virtual void Enter(BaseEntity *) = 0;

	virtual void Execute(BaseEntity *) = 0;

	virtual void Exit(BaseEntity *) = 0;
};

