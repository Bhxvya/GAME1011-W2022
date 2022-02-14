#pragma once
#include <fstream>
#include "AnimationFrame.h"
#include <iostream>
using namespace std;

class CreatureBase : public AnimationFrame
{
private:
	int creatureTurn[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int currentCreature;
public:
	CreatureBase(){}
	CreatureBase(int i)
	{
		creatureTurn[i] = currentCreature;
	}
	void setCurrentCreatre(int i) const
	{
		i = currentCreature;
	}
};