#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"


int main()
{
	Opener();
	std::string username;
	username = InputName();
	std::cout << "Your Name is " << username << "\n";
	YearOne *playerOne = new YearOne {username, 10000, 1000, 1000};
	playerOne->welcome();
	playerOne->challengeOne(playerOne); 
	playerOne->challengeTwo(playerOne);
	playerOne->waterDisease();
	playerOne->endYear(playerOne);
	YearTwo *playerOne2 = new YearTwo {playerOne->getUser(playerOne), playerOne->getFinances(playerOne),
										playerOne->getMorale(playerOne), playerOne->getPop(playerOne)};
	//playerOne2->giveSummary(playerOne2);
	playerOne2->challengeOne(playerOne2);
	playerOne2->outputArray();
	playerOne2->challengeTwo(playerOne2);
	int x;
	std::cin >> x;
    return 0;
}

void Opener()
{
	std::cout << "Welcome to 10 years survival! \n";
	std::cout << "In this survival- simulation game you will be tasked with leading a society \n";
	std::cout << "of 1000 people through a ten year Ice Age. \n";
	std::cout << "To do this, you must make a series of correct decisions that maintain three factors: \n";
	std::cout << "Population size \n";
	std::cout << "Morale \n";
	std::cout << "Finances \n";
}

std::string InputName()
{
Start:
	std::string username;
	std::cout << "Please enter your name: \n";
	std::getline(std::cin, username);
	std::cout << "Ok " << username << " Are you ready? \n";
	std::string x; 
	std::getline(std::cin, x);
	while (!x.compare("no")||!x.compare("No"))
	{
		std::cout << "Returning to beginning.\n";
		goto Start;
	}
	return username;
}

