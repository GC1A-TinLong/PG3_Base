#pragma once
#include "FromsoftGames.h"
#include <iostream>

using namespace std;

class ArmoredCoreVI :public FromsoftGames
{
public:
	ArmoredCoreVI(const char* gameTitle) :FromsoftGames(gameTitle)
	{
	}

	~ArmoredCoreVI()
	{
		cout << "Deleted Armored Core VI" << endl;
	}

	void CallTitle()override;
};


