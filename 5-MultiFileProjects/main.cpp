#include <iostream>
#include "func.h"
#include "mathutils.h"

int main()
{
	int numA = 1;
	int numB = 2;

	std::cout << "Sum: " << sum(numA, numB) << std::endl;
	std::cout << dist(4, 0, 4, 4) << std::endl;

	system("pause");
}