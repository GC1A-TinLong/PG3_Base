#include <stdio.h>
#include "FromsoftGames.h"
#include "Sekiro.h"
#include "EldenRing.h"
#include "ArmoredCoreVI.h"

int main() {

	const int kNumTitle = 3;

	FromsoftGames* fromsoftGames[kNumTitle]{};
	for (int i = 0; i < kNumTitle; i++)
	{
		if (i == 0) { fromsoftGames[i] = new Sekiro("Sekiro"); }
		else if (i == 1) { fromsoftGames[i] = new EldenRing("Elden Ring"); }
		else { fromsoftGames[i] = new ArmoredCoreVI("Armored Core VI"); }
	}

	for (int i = 0; i < kNumTitle; i++)
	{
		fromsoftGames[i]->CallTitle();
	}

	cout << endl;
	for (int i = 0; i < kNumTitle; i++)
	{
		delete fromsoftGames[i];
	}

	return 0;
}