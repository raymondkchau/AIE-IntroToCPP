#include <iostream>

void walkthrough()
{
	//while
	int iter = 0;
	while (iter < 11)
	{
		std::cout << iter << std::endl;
		iter++;
	}

	//for
	//	- init
	//	- cond
	//	- expr (at the end of interation)
	for (int i = 0; i < 11; ++i)
	{
		std::cout << i << std::endl;
	}

	//do-while
	int j = 0;
	do
	{
		std::cout << j << std::endl;
		j++;
	} while (j < 11);
	//simple input validation

	int userInput = -1;
	do
	{
		std::cout << "Give me a number between 1 and 5." << std::endl;
		std::cin >> userInput;
	} while (userInput < 1 || userInput > 5);

	std::cout << "Yay!" << std::endl;
	system("pause");
}

void closed()
{
	//closed worktime
	for (int k = 1; k <= 100; k++)
	{
		std::cout << k << std::endl;
	}

	int l = 100;
	while (l >= 0)
	{
		std::cout << l << std::endl;
		l--;
	}

	int m = 1995;
	do
	{
		std::cout << m << std::endl;
		m++;
	} while (m <= 2017);


	int userNum1 = 0;
	int userNum2 = 0;
	int userNum3 = 0;

	std::cout << "\nHowdy! What are your favorite positive numbers? Please answer one at a time." << std::endl;
	while (userNum1 <= 0)
	{
		std::cout << "What's the first number?" << std::endl;
		std::cin >> userNum1;

		if (userNum1 <= 0)
		{
			std::cout << "That doesn't look like a positive number." << std::endl;
		}
	}

	std::cout << "\nOkay, your first number is " << userNum1 << "." << std::endl;

	while (userNum2 <= 0)
	{
		std::cout << "What's the second number?" << std::endl;
		std::cin >> userNum2;

		if (userNum2 <= 0)
		{
			std::cout << "That doesn't look like a positive number." << std::endl;
		}
	}

	std::cout << "\nOkay, your favorites have been " << userNum1 << " and " << userNum2 << "." << std::endl;

	while (userNum3 <= 0)
	{
		std::cout << "What's the third number?" << std::endl;
		std::cin >> userNum3;

		if (userNum3 <= 0)
		{
			std::cout << "That doesn't look like a positive number." << std::endl;
		}
	}

	std::cout << "\nOkay, so your favorite numbers are " << userNum1 << ", " << userNum2 << ", and " << userNum3 << "." << std::endl;
	//eh, probably could have been shortened.

	system("pause");
}

void openX2Y(int minNum, int maxNum)
{
	while (minNum <= maxNum)
	{
		std::cout << minNum << std::endl;
		minNum++;
	}
}

void open1()
{
	int x;
	int y;
	std::cout << "Please input a minimum number and a maximum number to let me count up to. Please do one number at a time." << std::endl;
	std::cin >> x >> y;

	if (x < y)
	{
		std::cout << "\nI will be counting up from " << x << " to " << y << "." << std::endl;
		openX2Y(x, y);
	}
	else
	{
		std::cout << "\nI will be counting up from " << y << " to " << x << "." << std::endl;
		openX2Y(y, x);
	}

	system("pause");
}

void open2()
{
	int userInput = 0;
	std::cout << "I will tell you the largest number of the numbers you provide." << std::endl;
	if (userInput <= 0)
	{
		std::cout << "Please input how many numbers you are entering. Must be a positive number and above zero." << std::endl;
		std::cin >> userInput;
	}

	int bergNum = INT_MIN;
	int userNumcrud;
	while (userInput > 0)
	{
		std::cout << "Please input " << userInput << " more number(s)." << std::endl;
		std::cin >> userNumcrud;

		if (userNumcrud > bergNum)
		{
			bergNum = userNumcrud;
		}
		userInput--;
	}

	std::cout << "The biggest number is " << bergNum << "." << std::endl;

	system("pause");
}

void open3()
{
	int userInput = 0;
	std::cout << "I will tell you the smallest number of the numbers you provide." << std::endl;
	if (userInput <= 0)
	{
		std::cout << "Please input how many numbers you are entering. Must be a positive number and above zero." << std::endl;
		std::cin >> userInput;
	}

	int smolNum = INT_MAX;
	int userNumcrud;
	while (userInput > 0)
	{
		std::cout << "Please input " << userInput << " more number(s)." << std::endl;
		std::cin >> userNumcrud;

		if (userNumcrud < smolNum)
		{
			smolNum = userNumcrud;
		}
		userInput--;
	}

	std::cout << "The smallest number is " << smolNum << "." << std::endl;

	system("pause");
}

void open4EvenOdd(int minNum, int maxNum)
{
	int evenCheck;
	while (minNum <= maxNum)
	{
		evenCheck = minNum % 2;
		if (evenCheck == 0)
		{
			std::cout << minNum << " - EVEN" << std::endl;
		}
		else
		{
			std::cout << minNum << " - ODD" << std::endl;
		}
		minNum++;
	}

	system("pause");
}

void open4()
{
	int x;
	int y;
	std::cout << "Yo, I'm gonna check whether your range of numbers are odd or even. I'll always start with the lowest number first." << std::endl;
	std::cout << "Please enter two numbers, one at a time." << std::endl;
	std::cin >> x >> y;

	if (x < y)
	{
		open4EvenOdd(x, y);
	}
	else
	{
		open4EvenOdd(y, x);
	}
}

void fizzbuzz(int minNum, int maxNum)
{
	while (minNum <= maxNum)
	{
		if ((minNum % 3) == 0)
		{
			std::cout << "Fizz";
		}
		if ((minNum % 5) == 0)
		{
			std::cout << "Buzz";
		}
		else if ((minNum % 3) != 0 && (minNum % 5) != 0)
		{
			std::cout << minNum;
		}
		std::cout << std::endl;
		minNum++;
	}

	system("pause");
}

void open5()
{
	int x;
	int y;
	std::cout << "Let's play a game. You input the starting and ending number of a range, and I'll tell you which numbers are a multiple of a 3 with \"Fizz\" and a multiple of 5 with \"Buzz\"" << std::endl;
	std::cout << "Please put in two numbers, one at a time." << std::endl;
	std::cin >> x >> y;
	std::cout << std::endl;

	if (x < y)
	{
		fizzbuzz(x, y);
	}
	else
	{
		fizzbuzz(y, x);
	}
}

void gridgen(int width, int height)
{
	int store = width;
	while (height > 0)
	{
		while (width > 0)
		{
			std::cout << "X";
			width--;
		}
		std::cout << std::endl;
		height--;
		width = store;
	}

	system("pause");
}

void open6()
{
	int x;
	int y;
	std::cout << "Let's generate a grid of X's. Please enter a positive number for both width and height." << std::endl;
	std::cout << "Please enter the width." << std::endl;
	std::cin >> x;
	std::cout << "Please enter the height." << std::endl;
	std::cin >> y;

	gridgen(x, y);
}

void open7()
{
	int round = 1;
	int guess;
	int answer = rand() % 10 + 1; //Generates a "random" number between 1 and 10.
	std::cout << "Hey there! I'm gonna generate a number between 1 and 10. You have 5 tries to guess it!" << std::endl;

	while (round <= 5)
	{
		std::cout << "\nRound " << round << " - Make your guess!" << std::endl;
		std::cin >> guess;
		
		if (guess == answer)
		{
			std::cout << "That's it! You guessed the number!" << std::endl;
			break;
		}
		else if (round == 5)
		{
			std::cout << "Sorry, you lose. The answer was " << answer << "." << std::endl;
		}
		else
		{
			std::cout << "Sorry, that isn't quite right.";

			if (guess > answer)
			{
				std::cout << " Your guess is too high." << std::endl;
			}
			else if (guess < answer)
			{
				std::cout << " Your guess is too low." << std::endl;
			}
		}
		round++;
	}

	system("pause");
}

void main()
{
	//walkthrough();
	//closed();
	//open1();
	//open2();
	//open3();
	//open4();
	//open5();
	//open6();
	open7();
}