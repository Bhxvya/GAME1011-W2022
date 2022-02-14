#pragma once
#include "CreatureBase.h"

class Creature2 : public CreatureBase
{
public:
	Creature2()
	{
		fstream Creature2;
		Creature2.open("Creature2.txt");
	}
};