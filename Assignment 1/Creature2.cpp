#include "Creature2.h"
#include <string>


void Creature2::drawCreature()
{
	creature2Input.open("Creature2.txt");
	getline(creature2Input, currentLine1);
	creature2Input >> currentLine2;
	creature2Input >> currentLine3;

	for (int i = 2; i < MAX_FRAMES; i++)
	{
		cout << " " << currentLine1;
		AnimationFrame::bufferInput();
		cout << " " << currentLine2;
		AnimationFrame::bufferInput();
		cout << " " << currentLine3;
		AnimationFrame::bufferInput();
		AnimationFrame::clearOutput();
	}
}
