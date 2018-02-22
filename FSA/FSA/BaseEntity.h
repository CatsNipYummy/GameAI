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
	void Update();

	static int ID();
};

