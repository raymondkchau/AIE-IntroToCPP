#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

void printMe()
{
	cout << "Hello Fucntions!\n" << endl;
}

int returnSquare(int squareMe)
{
	int answer;
	answer = sqrt(squareMe);
	return answer;
}

void someCommaStuff(int commaNum1, int commaNum2)
{
	cout << commaNum1 << ", " << commaNum2 << endl;
}

void sumOfThreesNuts(int sumNut1, int sumNut2, int sumNut3)
{
	int deezNuts = sumNut1 + sumNut2 + sumNut3;
	cout << deezNuts << endl;
}

int main()
{
	printMe();

	int userNum;
	cout << "Input a number for me to square!" << endl;
	cin >> userNum;

	userNum = returnSquare(userNum);
	cout << userNum << endl;

	int someCommaNum1;
	int someCommaNum2;

	cout << "Wanna comma some numbers? I can hook you up." << endl;
	cin >> someCommaNum1 >> someCommaNum2;

	someCommaStuff(4, 1);
	someCommaStuff(2, 2);
	someCommaStuff(0, 3);
	someCommaStuff(someCommaNum1, someCommaNum2);

	cout << endl;

	sumOfThreesNuts(1, 8, 3);
	sumOfThreesNuts(5, 8, 1);
	sumOfThreesNuts(-5, 6, 2);
	sumOfThreesNuts(0, 12, 7);
	sumOfThreesNuts(7, 3, 4);



	system("pause");
}