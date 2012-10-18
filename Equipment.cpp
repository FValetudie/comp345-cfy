#include			<iostream>
#include			<vector>
#include			"Equipment.h"

using namespace		std;

Equipment::Equipment(int i, string n, vector<string> s): AdventureCard(i,n),specials(s)
{}

vector<string> Equipment::getSpecials() const
{
	return this->specials;
}

bool Equipment::hasSpecial(string s)
{
	for(int i=0; i < specials.size; i++)
	{
		if(specials[i].compare(s)==0)
			return true;
		else
			return false;
	}
}