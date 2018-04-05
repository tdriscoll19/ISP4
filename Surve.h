
#ifndef Surve
#define Surve
#include "stdafx.h"
class YearOne
{
private:
	std::string username;
	int finances;
	int morale;
	int population;
	bool gather;
	bool invest;
public:
	YearOne(std::string w, int x, int y, int z) { finances = x; morale = y; population = z; }
	std::string getUser(YearOne *user);
	int getFinances(YearOne *user);
	int getMorale(YearOne *user);
	int getPop(YearOne *user);
	void adjustValues(YearOne *user);
	void giveSummary(YearOne *user);
	void welcome();
	void challengeOne(YearOne *user);
	void challengeTwo(YearOne *user);
	void waterDisease();
	int disease();
	void endYear(YearOne *user);
};
class YearTwo
{
private:
	std::string username;
	int finances;
	int morale;
	int population;
	bool aggro = false;
	bool superAggro = false;
	std::vector<std::string> optos;
	bool coupThreat;
	bool haveKids;
	int educationLevel; 
	//1 = minimal, 2 = moderate, 3 = high, 0 = none
public:
	YearTwo(std::string w, int x, int y, int z) { finances = x; morale = y; population = z; }
	void challengeOne(YearTwo *user);
	
		void giveSummary(YearTwo *user);
		int setVal(std::string x);
		void popGlasses(int n);
		void popMad(int n);
		std::string getName();
		void makeArray();
		void outputArray();
	
	void challengeTwo(YearTwo *user);
	void challengeThree(YearTwo *user);
	int schoolFunding();
};
void Opener();
std::string InputName();
#endif