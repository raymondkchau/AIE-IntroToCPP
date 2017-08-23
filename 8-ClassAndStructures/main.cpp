#include <iostream>
#include "Person.h"
#include "student.h"
#include "battle.h"


int main()
{

	Person me;
	me.age = 22;
	me.weight = 109.0f;

	me.charisma = 6;
	me.strength = 300;
	me.dexterity = 0;

	me.cash = 120.f;

	Person you = { 90, 120.0f, 23, 0, 300, 0.0f };

	describePerson(you);
	levelUp(me);

	Student student1 = { 12006, 1 ,45 };
	Student student2 = { 12007, 2, 29 };
	Student student3 = { 12008, 2, 32 };
	Student student4 = { 12009, 1, 40 };
	Student student5 = { 12010, 2, 47 };
	Student student6 = { 12011, 2, 28 };

	Student classroom[] =
	{
		{ 12006, 1 ,45 },
		{ 12007, 2, 29 },
		{ 12008, 2, 32 },
		{ 12009, 1, 40 },
		{ 12010, 2, 47 },
		{ 12011, 2, 28 }
	};

	Student studentArray[]{ student1,student2,student3,student4,student5,student6 };

	std::cout << "Student Average: " << averageExam(studentArray, 6) << std::endl;
	std::cout << "Student Median: " << medianExam(studentArray, 6) << std::endl;

	Entity fighterA = { 20, 8, 1 };
	Entity fighterB = { 30, 7,12 };

	battle(fighterA, fighterB);

	while (true) {}
}