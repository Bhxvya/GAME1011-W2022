#include <iostream>
#include "SimpleVector.h"
using namespace std;

//int main()
//{
//	const int SIZE = 10;
//
//	SimpleVector<int> intTable(SIZE);
//	SimpleVector<double> doubleTable(SIZE);
//
//	// Store value in the array
//	for (int i = 0; i < SIZE; i++)
//	{
//		intTable[i] = (i * 2);
//		doubleTable[i] = (i * 2.12);
//	}
//
//	// Display the values in the array
//	cout << "These are the values in the intTable\n";
//	intTable.print();
//
//	cout << "These are the values in the doubleTable\n";
//	doubleTable.print();
//
//	// Demo the built in + operator
//	for (int i = 0; i < SIZE; i++)
//	{
//		intTable[i] += 5;
//		doubleTable[i] += 5.3;
//	}
//
//	cout << "These are the values in the intTable\n";
//	intTable.print();
//
//	cout << "These are the values in the doubleTable\n";
//	doubleTable.print();
//
//	// Demo the ++ operator
//	for (int i = 0; i < SIZE; i++)
//	{
//		intTable[i]++;
//		doubleTable[i]++;
//	}
//
//	cout << "These are the values in the intTable\n";
//	intTable.print();
//
//	cout << "These are the values in the doubleTable\n";
//	doubleTable.print();
//
//	return 0;
//}