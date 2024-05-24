#pragma once
#include "FromsoftGames.h"
#include <iostream>

using namespace std;

class Sekiro:public FromsoftGames
{
public:
	Sekiro(const char* gameTitle);
	~Sekiro();

	void CallTitle() override;
};

