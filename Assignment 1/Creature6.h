#pragma once
#include "CreatureBase.h"

class Creature6 : public CreatureBase
{
public:
	string currentLine1, currentLine2, currentLine3;
	ifstream creature6Input;
	ofstream creature6Output;
	void drawCreature();
};