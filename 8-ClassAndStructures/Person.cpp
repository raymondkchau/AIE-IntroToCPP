#include "Person.h"
#include <iostream>


void describePerson(Person person)
{
	std::cout << "Age: " << person.age << std::endl;
	std::cout << "Weight: " << person.weight << std::endl;
	std::cout << "Charisma: " << person.charisma << std::endl;
	std::cout << "Strength: " << person.strength << std::endl;
	std::cout << "Dexterity: " << person.dexterity << std::endl;
	std::cout << "Cash: " << person.cash << std::endl;

	person.age = -1;
}

//& reference. Changes in this function affect the original value.
void levelUp(Person &person)
{
	person.age = person.age + 1;
}