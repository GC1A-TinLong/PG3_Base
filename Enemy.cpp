#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::~Enemy(){}

const unsigned int waitingTime = 500;	// for tempo

void (Enemy::* Enemy::phaseFuncTable[])() = {	// member function table - enemy phase
	&Enemy::GettingClose,
	&Enemy::Shooting,
	&Enemy::Backoff
};

void Enemy::GettingClose()
{
	for (int i = 0; i < 4; i++) {
		Sleep(waitingTime);
		if (i < 3) {
			std::cout << "・";
		}
	}
	std::cout << std::endl;
	std::cout << "接近中" << std::endl;
}

void Enemy::Shooting()
{
	for (int i = 0; i < 4; i++) {
		Sleep(waitingTime);
		if (i < 3) {
			std::cout << "・";
		}
	}
	std::cout << std::endl;
	std::cout << "射撃！" << std::endl;
}

void Enemy::Backoff()
{
	for (int i = 0; i < 4; i++) {
		Sleep(waitingTime);
		if (i < 3) {
			std::cout << "・";
		}
	}
	std::cout << std::endl;
	std::cout << "離脱！" << std::endl;
}

void Enemy::Update()
{
	for (int i = 0; i < 3; i++) {	// run the function table 3 times
		(this->*phaseFuncTable[i])();
	}
	Sleep(waitingTime);
}