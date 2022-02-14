#pragma once
#include "CreatureBase.h"

class Creature6 : public CreatureBase
{
public:
	Creature6()
	{
		fstream Creature6;
		Creature6.open("Creature6.txt");
	}
};