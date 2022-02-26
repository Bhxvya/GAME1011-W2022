#include "Creature3.h"
#include <string>

void Creature3::drawCreature()
{
	creature3Input.open("Creature3.txt");
	getline(creature3Input, currentLine1);
	creature3Input >> currentLine2;
	creature3Input >> currentLine3;

	for (int i = 2; i < MAX_FRAMES; i++)
	{
		cout << "  " << currentLine1;
		AnimationFrame::bufferInput();
		cout << "  " << currentLine2;
		AnimationFrame::bufferInput();
		cout << "  " << currentLine3;
		AnimationFrame::bufferInput();
		AnimationFrame::clearOutput();
	}
}
