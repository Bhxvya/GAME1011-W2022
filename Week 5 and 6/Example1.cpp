#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
T square(T number)
{
	return number * number;
}


//int main()
//{
//	int iValue;
//	double dValue;
//	long lValue;
//	
//	cout << "Enter an integer: "; 
//	cin >> iValue;
//
//	// The compiler will create an "int square(int)" when the call occurs
//	cout << "The square is " << square(iValue) << endl;
//
//	cout << "Enter an double: ";
//	cin >> dValue;
//	cout << "The square is " << square(dValue) << endl;
//
//	cout << "Enter an long value: ";
//	cin >> lValue;
//	cout << "The square is " << square(lValue) << endl;
//
//
//
//	return 0;
//}