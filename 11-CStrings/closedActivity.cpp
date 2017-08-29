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

bool isAlpha(char query)
{
	return query >= 'A' && query <= 'Z' ||
		query >= 'a' && query <= 'z'; //Asks if its between a and z and A and Z
}

char toLower(char query)
{
	if (query >= 'A' && query <= 'Z')
	{
		query += 'a' - 'A';
	}
	return query;
}

//What should I return? Whatever you want.
////If no alpha-characters are in the string, will return false.
bool isPalindrome(char string[])
{
	/*
	Precondition your data so that it matches the problem. 
	In this case, remove all non-alphabet characters and lower casing them. 
	Dynamic approaches would skip things that don't matter while comparing
	or just find a way to always assume you are working in lower case.
	*/

	//boob,
	/*
	i = 0, b, 1, o, 2, o, 3, b
	j = 5, b, 4;    2, o, 1, b
	*/

	//starting from left and right side of string
	int i = 0, j = strlen(string)-1;
	//special case if the string has no characters
	bool hasChar = false;

	do
	{
		//find the first valid indices from left and right
		//                         or string[i] != 0
		while (!isAlpha(string[i]) && i < strlen(string)) i++;
		while (!isAlpha(string[j]) && j >= 0) j--;

		//if my search for characters has left me out of range
		if (i >= strlen(string) || j < 0)
		{
			return hasChar; //I'm either a palindrome of have no characters
		}
		//compares lower case only
		if (toLower(string[i]) != toLower(string[j]));
		{
			return false; //if a comparison fails, its not a palindrome
		}

		i++; //next characters
		j--;
		hasChar = true;

	} while (j >= 0); //there are remaining characters to test

	return true;

	/*
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
	*/
}

void open1()
{
	char input1[80] = "Race Car";
	char input2[80] = "Dinosaur";
	char input3[80] = "boob";
	int size;
	char buffer[80];

	std::cin.getline(buffer, 80);
	std::cout << isPalindrome(buffer) << std::endl;

	std::cout << isPalindrome(input1) << std::endl;
	isPalindrome(input2);
	isPalindrome(input3);
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
		if (input[i++] != 0)
		{
			input[i] = input[i++];
		}
	}

	input[size] = temp;
	strcat_s(input, pigLatin);

	std::cout << input << std::endl;


}

void open3()
{

}