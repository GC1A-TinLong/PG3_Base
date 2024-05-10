#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	void Close();

	void Update();

private:
	static void (Enemy::*phaseTable[])();
};

