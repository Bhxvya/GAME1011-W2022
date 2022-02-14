#pragma once
#include "CreatureBase.h"

class Creature5 : public CreatureBase
{
public:
	Creature5()
	{
		fstream Creature5;
		Creature5.open("Creature5.txt");
	}
};