#include <iostream>
using namespace std;
#include "Inheritance.h"

const string disc[] = { "None", "Game Developer", "Software Engineer", "Animator" };

int main()
{
	Person* p = new Person("Wallace Balanuic");
	Student* s = new Student("Jane Doe", Discipline::GAME_DEVELOPER, p);
	Faculty* f = new Faculty("Bob Dole", Discipline::SOFTWARE_ENGINEER);
	TFaculty* t = new TFaculty("Lisa Simpson", Discipline::ANIMATOR, "Lord Commander of the Night's watch");


	cout << "Hello, " << p->getName() << endl;
	cout << "Hello, " << s->getName() << " . You are a " << disc[static_cast<int>(s->getMajor())] << endl;
	cout << "Hello, " << f->getName() << ". Your department is " << disc[static_cast<int>(f->getDepartment())];
	cout << "Hello, " << t->getTitle() << t->getName() << ". Your department is " << disc[static_cast<int>(t->getDepartment())] << endl;

	delete t;
	delete f;
	delete s; 
	delete p;

	t = nullptr;
	f = nullptr;
	s = nullptr;
	p = nullptr;

	return 0;
}