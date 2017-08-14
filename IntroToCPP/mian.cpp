#include <iostream>

int main()
{
	std::cout << "Task 1:" << std::endl;
	std::cout << "Hello AIE!" << std::endl;
	system("pause");

	std::cout << "\nTask 2:" << std::endl;
	std::cout << "\nSome of my favorite songs for my fire mixtape are:\n";
	std::cout << "\t-Elektra Heart (Teddy Killerz Remix) by Marina and the Diamonds" << std::endl;
	std::cout << "\t-Took a Pill in Ibiza (Seeb Remix)" << std::endl;
	std::cout << "\t-Senses Overload by Teminite & PsoGnar" << std::endl;
	system("pause");

	std::cout << "\nTask3:" << std::endl;
	int loop1 = 0;
	while (loop1 <= 5)
	{
		std::cout << loop1 << std::endl;
		loop1++;
	}
	system("pause");

	std::cout << "\nTask4:" << std::endl;
	int loop2 = 0;
	while (loop2 <= 4)
	{
		std::cout << loop2 << std::endl;
		loop2++;
	}
	while (loop2 >= 0)
	{
		std::cout << loop2 << std::endl;
		loop2--;
	}
	system("pause");

}