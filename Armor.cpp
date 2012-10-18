#include			<iostream>
#include			"Armor.h"
using namespace		std;

Armor::Armor(int id, string name, int roll):Equipment(id,name),rollLimit(roll)
{}

int Armor::getRollLimit()
{
	return rollLimit;
}