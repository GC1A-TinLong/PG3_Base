#pragma once
#include <iostream>
#include <Windows.h>

class Enemy
{
public:
	Enemy();
	~Enemy();

	void GettingClose();
	void Shooting();
	void Backoff();

	void Update();

private:
	static void (Enemy::*phaseFuncTable[])();
};

