#include <iostream>

void printNumbers(int nums[], int size)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << nums[i] << std::endl;
	}
}

void walkthrough()
{
	//declare and define integer arrays
	int numbers[5];

	//individually initializing each element
	numbers[0] = 0;
	numbers[1] = 0;
	numbers[2] = 0;
	numbers[3] = 0;
	numbers[4] = 0;

	//initializing with a loop
	for (int i = 0; i < 5; i++)
	{
		numbers[i] = 0;
	}

	//initializing with an initializer list
	int numbersList[] = { 0,0,0,0,0 };


	//acessing arrays using indicies
	numbers[0] = 5; //assign to an arry at a given index
	std::cout << numbers[0] << std::endl;


	//iterating over an array
	for (int i = 0; i < 5; i++)
	{
		std::cout << numbers[i] << std::endl;
	}

	//assign one to every other element
	for (int i = 0; i < 5; i += 2)
	{
		numbers[i] = 1;
	}

	//passing arrays into a function
	std::cout << "\ntest funct" << std::endl;
	printNumbers(numbers, 5);

	system("pause");
}

void printArray(int nums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << nums[i] << std::endl;
	}
}

void closed1()
{
	int ele1[]{ 0,1,2,3 };
	int ele2[]{ 2,4,8,16,32,64 };
	int ele3[]{ 33,74,52,9 };

	std::cout << std::endl;
	printArray(ele1, 4);
	std::cout << std::endl;
	printArray(ele2, 6);
	std::cout << std::endl;
	printArray(ele3, 4);
	std::cout << std::endl;

	system("pause");
}

void addArray(int nums[], int size)
{
	int adding = 0;
	for (int i = 0; i < size; i++)
	{
		adding += nums[i];
	}
	std::cout << adding << std::endl;

	system("pause");
}

void closed2()
{
	int ele1[]{ 0,1,2,3 };
	int ele2[]{ 2,4,8,16,32,64 };
	int ele3[]{ 33,74,52,9 };

	addArray(ele1, 4);
	std::cout << std::endl;
	addArray(ele2, 6);
	std::cout << std::endl;
	addArray(ele3, 4);
	std::cout << std::endl;
}

void smolArray(int nums[], int size)
{
	int smolNum = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		if (smolNum > nums[i])
		{
			smolNum = nums[i];
		}
	}
	std::cout << smolNum << " is the smallest number of this array." << std::endl;
	system("pause");
}

void closed3()
{
	int ele1[]{ 0,1,2,3 };
	int ele2[]{ 2,4,8,16,32,64 };
	int ele3[]{ 33,74,52,9 };

	smolArray(ele1, 4);
	std::cout << std::endl;
	smolArray(ele2, 6);
	std::cout << std::endl;
	smolArray(ele3, 4);
	std::cout << std::endl;
}

void swolArray(int nums[], int size)
{
	int smolNum = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		if (smolNum < nums[i])
		{
			smolNum = nums[i];
		}
	}
	std::cout << smolNum << " is the largest number of this array." << std::endl;
	system("pause");
}

void closed4()
{
	int ele1[]{ 0,1,2,3 };
	int ele2[]{ 2,4,8,16,32,64 };
	int ele3[]{ 33,74,52,9 };

	swolArray(ele1, 4);
	std::cout << std::endl;
	swolArray(ele2, 6);
	std::cout << std::endl;
	swolArray(ele3, 4);
	std::cout << std::endl;
}

void findIndex(int nums[], int size, int value)
{
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (value == nums[i])
		{
			index = i;
		}
	}

	std::cout << index << std::endl;

	system("pause");
}

void open1()
{
	int ele1[]{ 4,5,7,8,9 };
	int ele2[]{ 1,2,6,8,2 };
	int ele3[]{ 3,2,1,7,5 };

	findIndex(ele1, 5, 5);
	std::cout << std::endl;
	findIndex(ele2, 5, 7);
	std::cout << std::endl;
	findIndex(ele3, 5, 5);
	std::cout << std::endl;
}

void isUnique(int nums[], int size)
{
	bool unique = true;
	for (int i = 0; i < size; i++)
	{
		int loop1 = i;
		for (int i = loop1+1; i < size; i++)
		{
			if (nums[loop1] == nums[i])
			{
				unique = false;
			}
			std::cout << nums[loop1] << " " << nums[i] << std::endl;
		}
	}

	if (unique == false)
	{
		std::cout << "This array is not unique." << std::endl;
	}
	else if (unique == true)
	{
		std::cout << "This array is a special snowflake." << std::endl;
	}

	system("pause");
}

void open2()
{
	int ele1[]{ 4,5,7,8,9 };
	int ele2[]{ 1,2,6,8,2 };
	int ele3[]{ 3,2,1,7,4 };

	isUnique(ele1, 5);
	std::cout << std::endl;
	isUnique(ele2, 5);
	std::cout << std::endl;
	isUnique(ele3, 5);
	std::cout << std::endl;
}

void backItUp(int nums[], int size)
{
	if (size == 5)
	{
		int backedUp[5]{ 0,0,0,0,0 };
		for (int i = size; i > 0; i--)
		{
			int l = i;
			for (int i = 0; i < size; i++)
			{
				backedUp[i] = nums[l];
			}
			std::cout << backedUp[i] << std::endl;
		}

	}
	else if (size == 8)
	{
		int backedUp[8]{ 0,0,0,0,0,0,0,0 };
		for (int i = size; i > 0; i--)
		{
			int l = i;
			for (int i = 0; i < size; i++)
			{
				backedUp[i] = nums[l];
			}
			std::cout << backedUp[i] << std::endl;
		}
	}

	system("pause");
}

void open3()
{
	int ele1[]{ 0,1,2,3,4 };
	int ele2[]{ 4,3,4,3,4 };
	int ele3[]{ 1,8,9,4,0,6,7,5 };

	backItUp(ele1, 5);
	std::cout << std::endl;
	backItUp(ele2, 5);
	std::cout << std::endl;
	backItUp(ele3, 8);
	std::cout << std::endl;
}

int main()
{
	//walkthrough();
	//closed1();
	//closed2();
	//closed3();
	//closed4();
	//open1();
	//open2();
	open3();
}