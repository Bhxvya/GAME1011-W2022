#pragma once
#include "CreatureBase.h"

class Creature3 : public CreatureBase
{
public:
	Creature3()
	{
		fstream Creature3;
		Creature3.open("Creature3.txt");
	}
};