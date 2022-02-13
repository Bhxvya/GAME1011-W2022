// This program demosntrates something
#include <iostream>
#include <iomanip>
#include "Source.cpp"
using namespace std;

int main()
{
	NumberArray first(5, 33.75);

	NumberArray second = first; // Trigger the copy constructor

	cout << setprecision(2) << showpoint << fixed;
	cout << "Value stored in the first object is: ";
	first.print();
	cout << endl << "Value stored in the second object is: ";
	second.print();
	cout << endl << endl;

	return 0;
}
