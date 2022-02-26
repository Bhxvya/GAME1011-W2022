#include "Creature1.h"
#include <string>

void Creature1::drawCreature()
{
	creature1Input.open("Creature1.txt");
	getline(creature1Input, currentLine1);
	creature1Input >> currentLine2;
	creature1Input >> currentLine3;
	
	for (int i = 2; i < MAX_FRAMES; i++)
	{
		cout << currentLine1;
		AnimationFrame::bufferInput();
		cout << currentLine2;
		AnimationFrame::bufferInput();
		cout << currentLine3;
		AnimationFrame::bufferInput();
		AnimationFrame::clearOutput();
	}
}

void Creature1::drawCreature2()
{
	creature1Input.open("Creature1.txt");
	getline(creature1Input, currentLine1);
	creature1Input >> currentLine2;
	creature1Input >> currentLine3;

	for (int i = 2; i < MAX_FRAMES; i++)
	{
		cout << "      " << currentLine1;
		AnimationFrame::bufferInput();
		cout << "      " << currentLine2;
		AnimationFrame::bufferInput();
		cout << "      " << currentLine3;
		AnimationFrame::bufferInput();
		AnimationFrame::clearOutput();
	}
}
