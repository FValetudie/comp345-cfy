#ifndef				TALISMAN_ARMOR
#define				TALISMAN_ARMOR

#include			<iostream>
#include			"AdventureCard.h"
#include			"Equipment.h"
using namespace std;

class				Armor : public Equipment{
private:
	string			name;
	string			type;
};

#endif TALISMAN_ARMOR