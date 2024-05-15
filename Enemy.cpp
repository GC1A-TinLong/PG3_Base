#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::~Enemy(){}

const unsigned int waitingTime = 500;
void (Enemy::* Enemy::phaseFuncTable[])() = {
	&Enemy::GettingClose,
	&Enemy::Shooting,
	&Enemy::Backoff
};

void Enemy::GettingClose()
{
	for (int i = 0; i < 4; i++) {
		Sleep(waitingTime);
		if (i < 3) {
			std::cout << "�E";
		}
	}
	std::cout << std::endl;
	std::cout << "�ڋߒ�" << std::endl;
}

void Enemy::Shooting()
{
	for (int i = 0; i < 4; i++) {
		Sleep(waitingTime);
		if (i < 3) {
			std::cout << "�E";
		}
	}
	std::cout << std::endl;
	std::cout << "�ˌ��I" << std::endl;
}

void Enemy::Backoff()
{
	for (int i = 0; i < 4; i++) {
		Sleep(waitingTime);
		if (i < 3) {
			std::cout << "�E";
		}
	}
	std::cout << std::endl;
	std::cout << "���E�I" << std::endl;
}

void Enemy::Update()
{
	for (int i = 0; i < 3; i++) {
		(this->*phaseFuncTable[i])();
	}
	Sleep(waitingTime);
}