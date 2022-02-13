#pragma once
#include <iostream>
using namespace std;

class ThisExample
{
private:
	int somethingSpecific;
public:
	ThisExample(int somethingSpecific)
	{
		(*this).somethingSpecific = somethingSpecific;
	}

	// Functions
	void setValue(int somethingSpecific)
	{
		this->somethingSpecific = somethingSpecific;
	}
	void printAddressAndValue()
	{
		cout << "The object at address " << this << " has value " << this->somethingSpecific << endl;
	}
};
