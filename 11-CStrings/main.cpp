#include <iostream>
#include <cstring>
#include "closedActivity.h"

char end;
/*
//pass by reference, writes to original
void doSomething(int &x)
{
	x += 10;
}

//dst is destination, src is source
void addStrings(char dst[], int size, char src1[], char src2[])
{
	//copies data from scr1 to dst buffer
	strcpy_s(dst, size, src1);
	//concatenates data from src2 into the dst buffer
	strcat_s(dst, size, src2);
	//result should be src1+src2
}

struct Player
{
	char name[80];
};
*/

void main()
{
	/*
	//definition
	char buffer[80];

	//instantiation
	char cstring[] = "Dinosaurs are cool!";
	char buffer2[80] = {0};

	//assignment
	//buffer = "String"; will not work
	strcpy_s(buffer, "String");

	//length
	int length = strlen(buffer);

	//string concatenation
	//left is added to, right is whats being added
	//StringDinosaurs are cool!
	//might get screwy if it goes over the predetermined size
	strcat_s(buffer, cstring);

	//-1 is in order, 0 is the same, 1 is not in order
	int result = strcmp(buffer, cstring);

	doSomething(result);
	*/

	//closed1();
	//closed2();
	//closed3();
	//open1();
	open2();
	open3();

	std::cout << "Enter any key to continue..." << std::endl;
	std::cin >> end;
}