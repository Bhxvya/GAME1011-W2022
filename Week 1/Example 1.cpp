#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
public:
	// Constructors
	Circle()
	{
		radius = 10;
	}
	Circle(double r) // Overloaded contructor, has arguments
	{
		radius = r;
	}


	// Properties (aka variables)
private:
	double radius;

	// Behaviours (aka functions)
public:
	void setRadius(double r);
	double getRadius() { return radius; }
	double calcArea()
	{
		// Area of a cirlce is Pi*r^2
		return 3.14 * pow(radius, 2);
	}
};

void Circle::setRadius(double r)
{
	if (r > 0)
	{
		radius = r;
	}
	else
	{
		cout << "Enter a number greater than 0!" << endl;
	}
}

//int main()
//{
//	Circle circle1, circle2(2.5);
//
//	circle1.setRadius(1);
//	//circle2.setRadius(2.5);
//
//	// Print out area
//	cout << "The area of the circle 1 is " << circle1.calcArea() << endl;
//	cout << "The area of the circle 2 is " << circle2.calcArea() << endl;
//
//	return 0;
//}