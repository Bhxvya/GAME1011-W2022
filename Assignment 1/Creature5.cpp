#include "Creature5.h"
#include <string>

void Creature5::drawCreature()
{
	creature5Input.open("Creature5.txt");
	getline(creature5Input, currentLine1);
	creature5Input >> currentLine2;
	creature5Input >> currentLine3;

	for (int i = 2; i < MAX_FRAMES; i++)
	{
		cout << "    " << currentLine1;
		AnimationFrame::bufferInput();
		cout << "    " << currentLine2;
		AnimationFrame::bufferInput();
		cout << "    " << currentLine3;
		AnimationFrame::bufferInput();
		AnimationFrame::clearOutput();
	}
}
