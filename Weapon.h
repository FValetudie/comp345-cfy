#ifndef				TALISMAN_WEAPON
#define				TALISMAN_WEAPON

#include			<iostream>
#include			<list>
#include			"AdventureCard.h"
#include			"Equipment.h"
using namespace		std;

class				Weapon : public Equip::Equipment{
private:
	int				strength;
	int				craft;
	bool			oneUse;
	list<string>	abilities;
};

#endif TALISMAN_WEAPON