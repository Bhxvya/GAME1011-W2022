#pragma once
#include "CreatureBase.h"

class Creature1 : public CreatureBase
{
public:
	Creature1()
	{
		fstream Creature1;
		Creature1.open("Creature1.txt");
	}
};