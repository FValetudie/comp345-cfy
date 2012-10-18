#ifndef				TALISMAN_WEAPON
#define				TALISMAN_WEAPON

#include			<iostream>
#include			<vector>
#include			"AdventureCard.h"
#include			"Equipment.h"
using namespace		std;

class				Weapon : public Equipment{
public:
	Weapon(int id,string name,vector<string> specials,int strength,int craft);
	int				getStrength() const;
	int				getCraft() const;

private:
	int				strength;
	int				craft;
};

#endif TALISMAN_WEAPON