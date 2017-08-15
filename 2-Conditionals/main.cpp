#include <iostream>
#include <string>
using namespace std;

int currentHealth = 50;

void minMaxHP(int minHealth, int maxHealth)
{
	if (currentHealth > maxHealth)
	{
		currentHealth = maxHealth;
	}
	else if (currentHealth < minHealth)
	{
		currentHealth = minHealth;
	}
}

int main()
{
	/*
	bool isHappy = false;

	if (isHappy)
	{
		cout << "I is happy <3" << endl;
	}
	else
	{
		cout << "I am mucho sadness" << endl;
	}

	int happiness = 80;

	if (happiness > 75)
	{
		cout << "You are very happy!" << endl;
	}
	else if (happiness > 30)
	{
		cout << "You are content." << endl;
	}
	else
	{
		cout << "Woe is you." << endl;
	}

	int userInput1 = 0;
	int userInput2 = 0;
	
	cout << "\nPlease input 2 numbers and I will check if the first number is bigger than the second." << endl;
	cin >> userInput1 >> userInput2;

	if (userInput1 > userInput2)
	{
		cout << userInput1 << " is bigger than " << userInput2 << endl;
	}
	else
	{
		cout << userInput1 << " is not bigger than " << userInput2 << endl;
	}
	*/

	/*
	1. true
	2. true
	3. true
	4. false
	5. false
	6. true
	7. true
	*/

	/*
	a 30
	b 15
	c 24
	d 0
	e 56
	f 6
	g 3
	*/

	/*
	float judge = 0.0f;

	cout << "\nInput a number to be judged!" << endl;
	cin >> judge;

	if (judge > 50)
	{
		cout << judge << " is greater than 50! It is a fairly large number!" << endl;
	}
	else if (judge < 50)
	{
		cout << judge << " is less than 50! It is a fairly small number!" << endl;
	}
	else if (judge == 50)
	{
		cout << judge << " is exactly 50! It is a balanced number!" << endl;
	}

	int userAge;

	cout << "\nWhat is your age, by the way?" << endl;
	cin >> userAge;

	if (userAge < 18)
	{
		cout << "Hey! You're under 18! Minors aren't allowed." << endl;
	}
	else if (userAge >= 18)
	{
		cout << "Hey! You're 18+! Welcome to the Meme Club." << endl;
		if (userAge >= 50)
		{
			cout << "You're old enough to be eligible join the AARP as well." << endl;
		}
		if (userAge >= 65)
		{
			cout << "You're also old enough to be eligible for retirement benefits." << endl;
		}
	}

	int userChoice1;
	int userChoice2;
	int userChoice3;

	cout << "\nInsert 3 numbers and I will tell you the smallest of the 3." << endl;
	cin >> userChoice1 >> userChoice2 >> userChoice3;

	if (userChoice1 == userChoice2 && userChoice1 == userChoice3)
	{
		cout << "Now that's just stupid. They're the same." << endl;
	}
	else if (userChoice1 < userChoice2 && userChoice1 < userChoice3)
	{
		cout << userChoice1 << " is the smallest." << endl;
	}
	else if (userChoice2 < userChoice1 && userChoice2 < userChoice3)
	{
		cout << userChoice2 << " is the smallest." << endl;
	}
	else if (userChoice3 < userChoice1 && userChoice3 < userChoice2)
	{
		cout << userChoice3 << " is the smallest." << endl;
	}
	else
	{
		cout << "Two numbers might be the same." << endl;
	}

	int userNum;
	cout << "\nInput a number to check whether it is odd or even." << endl;
	cin >> userNum;

	userNum %= 2;

	if (userNum == 0)
	{
		cout << "The number is even." << endl;
	}
	else
	{
		cout << "The number is odd." << endl;
	}

	int minHP = 0;
	int maxHP = 100;
	int userDH;

	cout << "\nYou currently have 50 hp. Put in a positive number to heal, negative to damage." << endl;
	cin >> userDH;

	currentHealth = currentHealth + userDH;
	minMaxHP(minHP, maxHP);
	cout << "You now have " << currentHealth << " hp." << endl;
	if (currentHealth == 0)
	{
		cout << "You have died. GAME OVER" << endl;
	}
	else if (currentHealth == 100)
	{
		cout << "You have max hp! You're feeling great!" << endl;
	}
	*/
	
	/*
	int thaiSpiceRating = 0;
	cout << "How spicy should your food be?" << endl;
	cin >> thaiSpiceRating;

	if (thaiSpiceRating > 5) { thaiSpiceRating = 5; }
	else if (thaiSpiceRating < 0) { thaiSpiceRating = 0; }

	cout << "You ordered with a spiciness rating of " << thaiSpiceRating << "!" << endl;

	int cookieNum;
	int cookieBatch;

	cout << "\nYou decided to buy some cookies while you wait for your food." << endl;
	cout << "You can only order batches of 23 cookies. How many cookies would you like?" << endl;
	cin >> cookieNum;

	if (cookieNum < 23)
	{
		cookieNum = 23;
	}

	cookieBatch = cookieNum / 23;

	cout << "You ordered " << cookieBatch << " batch(es) of cookies." << endl;

	string operation;
	float sum = 0.0f;
	float inputNum1 = 0.0f;
	float inputNum2 = 0.0f;

	cout << "\nThis is now a calculator. What would you like to do?\nUsable operations:\nMultiply (*)\nDivision (/)\nAddition (+)\nSubtraction (-)\nEx) 5 / 2" << endl;
	cin >> inputNum1 >> operation >> inputNum2;

	if (operation == "/")
	{
		sum = inputNum1 / inputNum2;
	}
	else if (operation == "*")
	{
		sum = inputNum1 * inputNum2;
	}
	else if (operation == "+")
	{
		sum = inputNum1 + inputNum2;
	}
	else if (operation == "-")
	{
		sum = inputNum1 - inputNum2;
	}

	cout << sum << endl;
	*/

	/*
	int wins;
	int userWins;
	int userStrength;
	int userFight;
	int vitaminC;
	bool wellRested;
	bool mangoBlade;
	string yesNo;

	cout << "You have encountered a Wild Baby Dino!" << endl;
	cout << "It has challenged you to a test of mind and body!" << endl;

	cout << "How would you rate your strength? (Scale 1-10)" << endl;
	cin >> userStrength;
	
	if (userStrength > 4)
	{
		cout << "You beat them!" << endl;
		wins++;
	}
	else
	{
		cout << "Oh no! They beat you!" << endl;
	}

	cout << "The Wild Baby Dino has challenged you to (1)Rock (2)Paper (3)Scissors! (How they know about scissors is beyond me.)\nWhat do you use?" << endl;
	cin >> userFight;

	if (userFight = 3)
	{
		cout << "You won!" << endl;
		wins++;
	}
	else
	{
		cout << "They used paper! They beat you!" << endl;
	}

	cout << "How many battles have you won so far?" << endl;
	cin >> userWins;

	if (userWins == wins)
	{
		cout << "Right! (This one counts now.)" << endl;
		wins++;
	}
	else if (userWins < wins)
	{
		cout << "Don't sell yourself short!" << endl;
	}
	else if (userWins > wins)
	{
		cout << "Pfft. Yeah. And I'm Grand Master in Overwatch." << endl;
	}

	cout << "Did you get enough sleep?(y/n)" << endl;
	cin >> yesNo;

	if (yesNo == "yes" || yesNo == "y")
	{
		cout << "Good." << endl;
		wellRested = true;
		wins++;
	}
	else
	{
		cout << "Get some sleep!" << endl;
	}

	cout << "How much Vitamin C do you get everyday?" << endl;
	cin >> vitaminC;

	if (vitaminC >= 75)
	{
		cout << "Due to having sufficient Vitamin C, you have attained the Mango Blade!" << endl;
		mangoBlade;
		wins++;
	}
	else if (vitaminC < 75)
	{
		cout << "Get some more Vitamin C in your system!" < endl;
	}

	cout << "With your " << wins << " wins, you decide to finish this fight!" << endl;
	if (wellRested)
	{
		cout << "You are feeling pumped and full of energy, due to being well rested!" << endl;
	}
	if (mangoBlade)
	{
		cout << "You pull out your powerful Mango Blade!" << endl;
	}
	cout << "You do that anime samurai-ninja slash that literally everything ever has done and the Wild Baby Dino explodes in the background. A holy chorus sings as heavenly euphoric sunglasses descend upon your face." << endl;
	*/
	
	char capLetter;
	cout << "Hey guy. C'mere. I wanna see if I can tell if you're using capitals or\nnot, ya dig? Enter a letter." << endl;
	cin >> capLetter;

	if (islower(capLetter))
	{
		cout << "Its a lower letter." << endl;
	}
	else
	{
		cout << "Its a capital letter." << endl;
	}

	int number = 23;
	if (number >= 20)
	{
		number *= 5;
	}

	int number2 = 6;
	number2 < 20 ? -5 : number2 / 2;

	int number3 = 6;
	number3 < 35 ? 1 : number3 < 60 ? 2 : number3 < 70 ? 3 : 0;

	system("pause");
}