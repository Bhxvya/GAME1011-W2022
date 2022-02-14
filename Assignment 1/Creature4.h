#pragma once
#include "CreatureBase.h"

class Creature4 : public CreatureBase
{
public:
	Creature4()
	{
		fstream Creature4;
		Creature4.open("Creature4.txt");
	}
};