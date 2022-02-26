#include "Creature4.h"
#include <string>

void Creature4::drawCreature()
{
	creature4Input.open("Creature4.txt");
	getline(creature4Input, currentLine1);
	creature4Input >> currentLine2;
	creature4Input >> currentLine3;

	for (int i = 2; i < MAX_FRAMES; i++)
	{
		cout << "   " << currentLine1;
		AnimationFrame::bufferInput();
		cout << "   " << currentLine2;
		AnimationFrame::bufferInput();
		cout << "   " << currentLine3;
		AnimationFrame::bufferInput();
		AnimationFrame::clearOutput();
	}
}

void Creature4::drawCreature2()
{
	creature4Input.open("Creature4.txt");
	getline(creature4Input, currentLine1);
	creature4Input >> currentLine2;
	creature4Input >> currentLine3;

	for (int i = 2; i < MAX_FRAMES; i++)
	{
		cout << "        " << currentLine1;
		AnimationFrame::bufferInput();
		cout << "        " << currentLine2;
		AnimationFrame::bufferInput();
		cout << "        " << currentLine3;
		AnimationFrame::bufferInput();
		AnimationFrame::clearOutput();
	}
}
