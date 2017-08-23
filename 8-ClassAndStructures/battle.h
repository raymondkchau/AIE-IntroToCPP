#pragma once


struct Entity
{
	float hitPoints;
	float attackPoints;
	float defensePoints;
};

void battle(Entity combatantA, Entity combatantb);