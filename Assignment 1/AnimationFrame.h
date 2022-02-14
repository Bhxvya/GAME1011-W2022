#pragma once
#include <iostream>
#include "CreatureBase.h"
using namespace std;

class AnimationFrame
{
private:
	const int MIN_FRAMES = 0;
	const int MAX_FRAMES = 3;
public:
	void printCurrentAnim(fstream object);
};