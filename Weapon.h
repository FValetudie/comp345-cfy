#ifndef				TALISMAN_WEAPON
#define				TALISMAN_WEAPON

#include			<iostream>
#include			<vector>
#include			"AdventureCard.h"
#include			"Equipment.h"
using namespace		std;

class				Weapon : public Equipment{
public:
	Weapon(int id,string name,int strength);
	int				getStrength() const;

private:
	int				strength;
};

#endif TALISMAN_WEAPON