#include <iostream>
#include "closedActivity.h"

void closed1()
{
	char name[80];
	std::cout << "Please enter your name." << std::endl;
	std::cin >> name;
	std::cout << "Hello " << name << "!" << std::endl;
}

void closed2()
{
	char color[80];
	char orange[80] = "orange";
	std::cout << "Please enter your favorite color." << std::endl;
	std::cin >> color;
	
	if (strcmp(color, "orange") == 0 || strcmp(color, "Orange") == 0)
	{
		std::cout << "Orange is also a fruit!" << std::endl;
	}
	else if (strcmp(color, "red") == 0 || strcmp(color, "Red") == 0)
	{
		std::cout << "Red? Like the color of roses?" << std::endl;
	}
	else
	{
		std::cout << "I've never heard of that color before." << std::endl;
	}
}

void closed3()
{
	char removeSpaces[80] = "Dinosaurs are amazing!";
	int count = 0;

	for (int i = 0; removeSpaces[i]; i++)
	{
		if (removeSpaces[i] != ' ')
		{
			removeSpaces[count++] = removeSpaces[i];
		}
	}
	removeSpaces[count] = '\0';

	std::cout << removeSpaces << std::endl;

	/*
	//ignores next \n character. one sits at the begining of each line.
	//takes the entire line of input to the max limit and up to the first Enter
	std::cin.ignore(80, '\n');
	std::cin.getline(input, 80);

	int j = 0;
	for (int i = 0; i < strlen(input)+1; i++)
	{
		if(input[i] != ' ' && input[i] != '\t' && input[i] != "\n")
		{
			buffer[j++] = input[i];
		}
	}
	*/
}

void palindromeTest(char rinput[], int size)
{
	//reverse an array
	char temp = 0;
	char input[80];

	for (int i = 0; i < size; i++)
	{
		input[i] = rinput[i];
	}

	for (int i = 0; i < size / 2; ++i)
	{
		rinput[i] = temp;
		temp = rinput[size - i - 1];
		rinput[size - i - 1] = rinput[i];
		rinput[i] = temp;
	}

	std::cout << rinput << std::endl;
	std::cout << input << std::endl;
}

void open1()
{
	char input1[80] = "Race Car";
	char input2[80] = "Dinosaur";
	char input3[80] = "boob";
	int size;

	size = strlen(input1);
	palindromeTest(input1, size);
	size = strlen(input2);
	palindromeTest(input2, size);
	size = strlen(input3);
	palindromeTest(input3, size);
}

void open2()
{
	int size;
	char input[80] = "dinosaur";
	char input2[80] = "orange";
	char pigLatin[3] = "ay";
	char temp = 0;

	input[0] = temp;
	size = strlen(input);
	for (int i = 0; i < size; i++)
	{
		input[i] = input[i++];
	}

	input[size] = temp;
	strcat_s(input, pigLatin);

	std::cout << input << std::endl;

}

void open3()
{

}