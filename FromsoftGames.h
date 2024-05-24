#pragma once
#include <iostream>

using namespace std;

class FromsoftGames
{
public:
	FromsoftGames(const char* gameTitle);
	virtual ~FromsoftGames();

	virtual void CallTitle() = 0;

protected:
	const char* gameTitle_;
};

