#include <iostream>;
#include "battle.h";

char end;
void main()
{
	/*
	int choice;
	std::cout << "Hey there and welcome to the Q&A with the programmer!" << std::endl;
	std::cout << "Please select a question to ask by providing a number." << std::endl;
	std::cout << "1) What is your favorite color?\n2) What is your favorite food?\n3) What kind of programmer do you want to be?" << std::endl;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		std::cout << "White." << std::endl;
		break;

	case 2:
		std::cout << "Any kind of Thai curry." << std::endl;
		break;

	case 3:
		std::cout << "I want to be a decent technical artist, able to prototype a game by myself at least." << std::endl;
		break;

	default:
		std::cout << "Invalid number." << std::endl;
	}
	*/
	
	battle();

	std::cout << "Enter any key to continue..." << std::endl;
	std::cin >> end;
}