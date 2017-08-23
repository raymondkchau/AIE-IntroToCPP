#include "battle.h"
#include <iostream>


void printEntity(Entity target)
{
	std::cout << target.hitPoints << std::endl;
	std::cout << target.attackPoints << std::endl;
	std::cout << target.defensePoints << std::endl;
}

void battle(Entity combatantA, Entity combatantB)
{
	bool inProgress = true;

	while (inProgress)
	{
		//print playerA
		std::cout << "Player Stats" << std::endl;
		printEntity(combatantA);

		//print playerB
		std::cout << "Zombie Stats" << std::endl;
		printEntity(combatantB);

		//do battle
		combatantA.hitPoints -= combatantB.attackPoints - combatantA.defensePoints;
		combatantB.hitPoints -= combatantA.attackPoints - combatantB.defensePoints;

		//check if the battle is over
		inProgress = combatantA.hitPoints > 0 && combatantB.hitPoints > 0;
	}

	std::cout << "The battle is over!" << std::endl;

	if (combatantA.hitPoints > 0)
	{
		std::cout << "Player emerged victorious!" << std::endl;
	}
	else if (combatantB.hitPoints > 0)
	{
		std::cout << "Zombie emerged victorious!" << std::endl;
	}
	else
	{
		std::cout << "All fighters have perished." << std::endl;
	}

}