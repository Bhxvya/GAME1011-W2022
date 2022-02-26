#pragma once
#include "CreatureBase.h"

class Creature5 : public CreatureBase
{
public:
	string currentLine1, currentLine2, currentLine3;
	ifstream creature5Input;
	ofstream creature5Output;
	void drawCreature();
};