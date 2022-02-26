#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class AnimationFrame
{
public:
	const int MIN_FRAMES = 0;
	const int MAX_FRAMES = 3;
	AnimationFrame() {}
	void printCurrentAnim(fstream object);

	void bufferInput()
	{
		cin.ignore();
	}

	void clearOutput()
	{
		for (int i = 0; i < 30; i++)
		{
			cout << endl;
		}
	}
};