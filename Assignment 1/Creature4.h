#pragma once
#include "CreatureBase.h"

class Creature4 : public CreatureBase
{
public:
	string currentLine1, currentLine2, currentLine3;
	ifstream creature4Input;
	ofstream creature4Output;
	void drawCreature();
	void drawCreature2();
};