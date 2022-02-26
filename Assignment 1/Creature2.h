#pragma once
#include "CreatureBase.h"

class Creature2 : public CreatureBase
{
public:
	string currentLine1, currentLine2, currentLine3;
	ifstream creature2Input;
	ofstream creature2Output;
	void drawCreature();
};