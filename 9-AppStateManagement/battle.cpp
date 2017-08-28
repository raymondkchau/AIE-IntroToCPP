#include <iostream>;
#include "battle.h";

void battle()
{
	bool defending = false;
	char choice;
	char phase = 0;
	int state = 0;

	Fighter player;
	Fighter tiger;
	tiger.strength = 7;
	tiger.dexterity = 5;
	tiger.constitution = 50;
	tiger.intelligence = 2;

	switch (state)
	{
	case 0:
		switch (phase)
		{
		case 0: //Narrative
			std::cout << "You find yourself in a gladiator arena, surrounded by cheering fans." << std::endl;
			std::cout << "On the other side of the arena from you, a large gate opens and a tiger strolls out and roars. The crowd cheers and screams for blood." << std::endl;
			std::cout << "There seems to be no other way out but to fight the tiger." << std::endl;

		case 1: //Setup
			std::cout << "Do you prefer:\n1) Using brute force\n2) Withstanding punishment and dishing back what you took" << std::endl;
			std::cin >> choice;

			if (choice == '1')
			{
				player.strength = 10;
				player.constitution = 50;
			}
			else if (choice == '2')
			{
				player.strength = 5;
				player.constitution = 75;
			}

			std::cout << "Do you prefer:\n1) Hitting you opponent accurately\n2) Landing critical attacks" << std::endl;
			std::cin >> choice;

			if (choice == '1')
			{
				player.dexterity = 10;
				player.intelligence = 2;
			}
			else if (choice == '2')
			{
				player.dexterity = 7;
				player.intelligence = 6;
			}

		case 2: //Battle
			while (tiger.constitution > 0 && player.constitution > 0)
			{
				std::cout << "You have " << player.constitution << " health." << std::endl;
				std::cout << "\nWhat will you do?\n1) Attack\n2) Defend\n3) Examine" << std::endl;
				std::cin >> choice;

				switch (choice)
				{
				case '1':
					std::cout << "\nYou attack the tiger!" << std::endl;
					tiger.constitution -= player.strength;
					std::cout << "You dealt " << player.strength << " of damage!" << std::endl;
					std::cout << "The tiger has " << tiger.constitution << " health!" << std::endl;
					break;

				case '2':
					std::cout << "\nYou brace yourself!" << std::endl;
					defending = true;
					break;

				case '3':
					std::cout << "\nYou examine the tiger!" << std::endl;
					std::cout << "The tiger has " << tiger.strength << " strength!" << std::endl;
					std::cout << "The tiger has " << tiger.constitution << " constitution!" << std::endl;
					std::cout << "The tiger has " << tiger.dexterity << " dexterity!" << std::endl;
					std::cout << "The tiger has " << tiger.intelligence << " intelligence!" << std::endl;
					break;

				default:
					std::cout << "\nInvalid answer." << std::endl;
				}

				std::cout << "\nThe tiger attacks!" << std::endl;
				if (defending == true)
				{
					std::cout << "The tiger deals " << tiger.strength / 2 << " damage!" << std::endl;
					player.constitution -= tiger.strength / 2;
					std::cout << "You build up adrenaline from the defense!" << std::endl;
					player.strength += 5;
					defending = false;
				}
				else
				{
					std::cout << "The tiger deals " << tiger.strength << " damage!" << std::endl;
					player.constitution -= tiger.strength;
				}
			}

			if (player.constitution <= 0)
			{
				std::cout << "\nYou lost the fight." << std::endl;
			}
			else if (tiger.constitution <= 0)
			{
				std::cout << "\nYou won!" << std::endl;
			}

		case 3: //Exit
			std::cout << "Would you like to play again? Y/N" << std::endl;
			std::cin >> choice;

			if (choice == 'Y' || choice == 'y')
			{
				phase = 1;
				break;
			}
			else if (choice == 'N' || choice == 'n')
			{
				std::cout << "Are you sure you want to quit?" << std::endl;
				std::cin >> choice;

				if (choice == 'Y' || choice == 'y')
				{
					state = 1;
					break;
				}
				else if (choice == 'N' || choice == 'n')
				{
					phase = 1;
					break;
				}
			}

		default:
			std::cout << "Invalid Input" << std::endl;
		}

	case 1:
		std::cout << "Thanks for playing!" << std::endl;
	}

}