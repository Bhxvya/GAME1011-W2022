#include <iostream>
#include "NumberArray.h"
using namespace std;

NumberArray::NumberArray(int size, double value)
{
	arraySize = size;
	aPtr = new double[arraySize];
	setValue(value);
}

NumberArray::~NumberArray()
{
	if (arraySize > 0) // Ensure that there is an array that exists
	{
		delete[] aPtr;
		aPtr = nullptr;
	}
}

void NumberArray::print() const
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << aPtr[i] << " ";
	}
}

void NumberArray::setValue(double value)
{
	for (int i = 0; i < arraySize; i++)
	{
		aPtr[i] = value;
	}
}

int main()
{


	return 0;
}