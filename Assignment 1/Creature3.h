#pragma once
#include "CreatureBase.h"

class Creature3 : public CreatureBase
{
public:
	string currentLine1, currentLine2, currentLine3;
	ifstream creature3Input;
	ofstream creature3Output;
	void drawCreature();
	void drawCreature2();
};