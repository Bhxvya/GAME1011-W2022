#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class AnimationFrame
{
private:
	const int MIN_FRAMES = 0;
	const int MAX_FRAMES = 3;
public:
	AnimationFrame() {}
	void printCurrentAnim(fstream object);
};