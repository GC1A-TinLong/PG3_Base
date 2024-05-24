#include "Sekiro.h"

Sekiro::Sekiro(const char* gameTitle) :FromsoftGames(gameTitle)
{
}

Sekiro::~Sekiro()
{
	cout << "Delete Sekiro" << endl;
}

void Sekiro::CallTitle()
{
	cout << "2019: " << gameTitle_ << endl;
}
