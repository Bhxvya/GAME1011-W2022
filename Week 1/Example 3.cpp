#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Person
{
	// Constructor
public:
	Person()
	{
		name = "DEFAULT";
		age = 1;
	}
	Person(string n)
	{
		name = n;
		age = 1;
	}
	Person(int a)
	{
		name = "DEFAULT";
		age = a;
	}
	Person(string n, int a)
	{
		name = n;
		age = a;
	}

	// Functions
public:
	string getName() { return name; };
	void setName(string n) { name = n; };

	int getAge() { return age; };
	void setAge(int a) { age = a; };
	// Variables
private:
	string name;
	int age;
};

struct Rectangle
{
	int width, height;
};


int main()
{
	Rectangle* pRect = nullptr;
	Person* pPerson = nullptr;

	Rectangle rect; // Instance of rectangle struct
	pRect = &rect;

	(*pRect).width = 10;
	pRect->height = 20; // Preferred way to dereference a pointer to an object

	cout << "Area of the rectangle is: " << pRect->width * pRect->height << endl;

	// Dynamicaly allocate object through the pointer!
	pRect = new Rectangle;
	pRect->width = 6;
	pRect->height = 5;
	cout << "Area of the rectangle is: " << pRect->width * pRect->height << endl;
	delete pRect;
	pRect = nullptr;

	pPerson = new Person("Bhavya Patel", 18);
	cout << pPerson->getName() << "is " << pPerson->getAge() << " years old" << endl;
	delete pPerson;
	pPerson = nullptr;

	return 0;
}