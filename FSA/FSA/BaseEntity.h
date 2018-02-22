#pragma once
class BaseEntity
{
private:
	static int m_iID;
	static int m_iNextID;

public:
	BaseEntity();
	~BaseEntity();

	// Every entity has an update
	virtual void Update() = 0;

	static int ID();
};

