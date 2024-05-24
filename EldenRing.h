#pragma once
#include "FromsoftGames.h"
#include <iostream>

using namespace std;

class EldenRing : public FromsoftGames
{
public:
	EldenRing(const char* gameTitle);
	~EldenRing();

	void CallTitle() override;

private:
};

