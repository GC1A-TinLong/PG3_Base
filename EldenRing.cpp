#include "EldenRing.h"

EldenRing::EldenRing(const char* gameTitle)
	:FromsoftGames(gameTitle)
{
}

EldenRing::~EldenRing()
{
	cout << "Delete Elden Ring" << endl;
}

void EldenRing::CallTitle()
{
	cout << "2022: " << gameTitle_ << endl;
}
