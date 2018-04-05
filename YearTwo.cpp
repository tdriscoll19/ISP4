#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"

void YearTwo::giveSummary(YearTwo *user)
{
	std::cout << "Your totals so far are: \n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
}

void YearTwo::challengeOne(YearTwo *user)
{
	std::cout << "Congradualtions on reaching year two\n";
	std::cout << "In this year you will face challenges with establishing secondary heatlth needs\n";
	std::cout << "throughout your society\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Problem 1: Eyesight.\n";
	std::cout << "Much of your population is in need of glasses.\n";
	std::cout << "You have three options:\n";
	std::cout << "Invest in eyecare (amount unknown)\n";
	std::cout << "Ignore the issue\n";
	std::cout << "Appoint someone else to deal wiht the issue\n";
	std::string x;
	std::getline(std::cin, x);
	int y;
	y = setVal(x);
	switch (y)
	{
		case(1):
		{
			std::cout << "To determine how much money you spend, you must determine\n";
			std::cout << "How much of your population needs glasses\n";
			std::cout << "Insert a number between 1 and 10\n";
			int n;
			std::cin >> n;
			std::cin.ignore(32767, '\n');
			std::cout << "\n";
			TRY:
			while (n <= 0 || n > 10)
			{
				std::cout << "Value must be between 1 and 10. Try again.\n";
				std::cin >> n;
				goto TRY;
			}
			popGlasses(n);
			break;
		}
		case (2):
		{
			std::cout << "To determine how much of your population you neglected, you must determine\n";
			std::cout << "How much of your population needed glasses\n";
			std::cout << "Insert a number between 1 and 10\n";
			int n;
			std::cin >> n;
			std::cin.ignore(32767, '\n');
			std::cout << "\n";
		TRY2:
			while (n <= 0 || n > 10)
			{
				std::cout << "Value must be between 1 and 10. Try again.\n";
				std::cin >> n;
				goto TRY2;
			}
			popMad(n);
			break; 
		}
		case (3):
		{
			makeArray();
			break;
		}
	}

}

	int YearTwo::setVal(std::string x)
{
START:
	int y;
	if (!x.compare("Invest") || !x.compare("invest") || !x.compare("invest in eyecare"))
	{
		y = 1;
		
	}
	else if (!x.compare("Ignore") || !x.compare("ignore") || !x.compare("ignore the issue"))
	{
		y = 2;
	}
	else if (!x.compare("Appoint") || !x.compare("appoint") || !x.compare("appoint someone else"))
	{
		y = 3;
	}
	else
	{
		std::cout << "Input not recognized, try again\n";
		std::getline(std::cin, x);
		goto START;
	}
	return y; 
}

void YearTwo::popGlasses(int n)
{
	switch(n)
	{ 
		case (1):
	{
		std::cout << "Ten percent of your population needs glasses\n";
		std::cout << "This will cost $" << population << "\n";
		finances = finances - population;
		break;
	}
		case (2):
		{
		std::cout << "Ten percent of your population needs glasses\n";
		std::cout << "This will cost $" << population << "\n";
		finances = finances - population;
		break;
		}
		case (3):
		{
			std::cout << "Ten percent of your population needs glasses\n";
			std::cout << "This will cost $" << population << "\n";
			finances = finances - population;
			break;
		}
		case (4):
		{
			std::cout << "Ten percent of your population needs glasses\n";
			std::cout << "This will cost $" << population << "\n";
			finances = finances - population;
			break;
		}
		case (5):
		{
			std::cout << "Ten percent of your population needs glasses\n";
			std::cout << "This will cost $" << population << "\n";
			finances = finances - population;
			break;
		}
		case (6):
		{
			std::cout << "Only five percent of your population needs glasses.\n";
			std::cout << "this will cost $" << population / 2 << "\n";
			finances = finances - (population / 2);
			break;
		}
		case (7):
		{
			std::cout << "Only five percent of your population needs glasses.\n";
			std::cout << "this will cost $" << population / 2 << "\n";
			finances = finances - (population / 2);
			break;
		}
		case (8):
		{
			std::cout << "Fifteen percent of your population needs glasses\n";
			std::cout << "This will cost $" << population * 1.5 << "\n";
			finances = finances - (population *1.5);
			break;
		}
		case (9):
		{
			std::cout << "Fifteen percent of your population needs glasses\n";
			std::cout << "This will cost $" << population * 1.5 << "\n";
			finances = finances - (population *1.5);
			break;
		}
		case (10):
		{
			std::cout << "Fifteen percent of your population needs glasses\n";
			std::cout << "This will cost $" << population * 1.5 << "\n";
			finances = finances - (population *1.5);
			break;
		}
		}
}

void YearTwo::popMad(int n)
{
	switch (n)
	{
	case (1):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (2):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (3):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (4):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (5):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (6):
	{
		std::cout << "Only five percent of your population needs glasses.\n";
		break;
	}
	case (7):
	{
		std::cout << "Only five percent of your population needs glasses.\n";
		break;
	}
	case (8):
	{
		std::cout << "Fifteen percent of your population needs glasses\n";
		bool aggro = true;
		bool superAggro = true;
		break;
	}
	case (9):
	{
		std::cout << "Fifteen percent of your population needs glasses\n";
		bool aggro = true;
		bool superAggro = true;
		break;
	}
	case (10):
	{
		std::cout << "Fifteen percent of your population needs glasses\n";
		bool aggro = true;
		bool superAggro = true;
		break;
	}
	}
}

std::string YearTwo::getName()
{
	static int x;

	std::cout << "Insert the name for eyedoctor #" << x + 1 << "\n";
	std::string name;
	std::getline(std::cin, name);
	x++; 
	return name;
}

void YearTwo::makeArray()
{
	std::cout << "How many people do you want to assign to the job\n";
	RETRY:
	int doc;
	std::cin >> doc;
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	while (doc <= 0)
	{
		std::cout << "You must input an integer value greater than 0. Try Again\n";
		goto RETRY;
	}
	if (doc > 2 && morale < 800)
	{
		bool coupThreat = true;
	}
	optos.resize(doc);
	int count;
	for (count = 0; count < doc; count++)
	{
		optos[count] = getName();
	}
}

void YearTwo::outputArray()
{
	int count;
	int total;
	total = optos.size();
	for (count = 0; count < total; count++)
	{
		std::cout << "Dr " << count + 1 << " " << optos[count] << "\n";
	}
}

void YearTwo::challengeTwo(YearTwo *user)
{
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Many of the people in your population are beginning\n";
	std::cout << "to wonder if it is OK for them to have kids.\n";
	std::cout << "Would you like to ban or allow such action\n";
RETRY:
	std::string kids;
	std::getline(std::cin, kids);
	if (!kids.compare("ban"))
	{
		bool haveKids = false;
		std::cout << "You have avoided the financial burden of supporting children.\n";
	}
	else if (!kids.compare("allow"))
	{
		std::cout << "The children will be a financial burden until they can exist on their own\n";
		std::cout << "At age 7 (year 9)\n";
		bool haveKids = true;
		std::cout << "Until year 9, your finances will decrease by 5% annually.\n";
		finances = .95* finances;
		giveSummary(user);
	}
	else
	{
		std::cout << "Invalid input detected, try again\n";
		goto RETRY;
	}
}

void YearTwo::challengeThree(YearTwo *user)
{
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "challenge Three: Education\n";
	std::cout << "Would you like to invest in schools?\n";
	std::string school;
	std::getline(std::cin, school);
	if (!school.compare("yes"))
	{
		educationLevel = schoolFunding();
	}
}

		
	int YearTwo::schoolFunding()
	{
		RESTART:
		std::cout << "How much would you like to invest in schools?\n";
		int x;
		std::cin >> x;
		std::cin.ignore(32767, '\n');
		while (x > .3 * finances)
		{
			std::cout << "That's too risky of an investment, try again\n";
			goto RESTART;
		}
		if (x > .2 * finances)
		{
			std::cout << "Your population will be highly educated\n";
			finances = finances - x;
			return 3;
		}
		else if (x > .1 * finances && x < .2 * finances)
		{
			finances = finances - x;
			return 2;
		}
		else
		{
			finances = finances - x;
			return 1;
		}

	}
