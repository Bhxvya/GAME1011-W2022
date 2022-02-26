#pragma once
#include "CreatureBase.h"

class Creature1 : public CreatureBase
{
public:
	string currentLine1, currentLine2, currentLine3;
	ifstream creature1Input;
	ofstream creature1Output;
	void drawCreature();
};