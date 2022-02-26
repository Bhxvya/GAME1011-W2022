#include "AnimationFrame.h"

void AnimationFrame::clearOutput()
{
	for (int i = 0; i < 1; i++)
	{
		cout << "\x1B[2J\x1B[H";
	}
}

void AnimationFrame::printCurrentAnim(fstream object)
{
}
