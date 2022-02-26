#include "Creature6.h"
#include <string>

void Creature6::drawCreature()
{
	creature6Input.open("Creature6.txt");
	getline(creature6Input, currentLine1);
	creature6Input >> currentLine2;
	creature6Input >> currentLine3;

	for (int i = 2; i < MAX_FRAMES; i++)
	{
		cout << "     " << currentLine1;
		AnimationFrame::bufferInput();
		cout << "     " << currentLine2;
		AnimationFrame::bufferInput();
		cout << "     " << currentLine3;
		AnimationFrame::bufferInput();
		AnimationFrame::clearOutput();
	}
}
