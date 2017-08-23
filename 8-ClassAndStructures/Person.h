#pragma once

struct Person
{
	int age;
	float weight;

	int charisma;
	int strength;
	int dexterity;

	float cash;
};

void describePerson(Person person);
void levelUp(Person &person);