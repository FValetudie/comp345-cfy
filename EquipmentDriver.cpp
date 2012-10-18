#include			<iostream>
#include			<vector>
#include			"Character.h"
#include			"Weapon.h"
#include			"Armor.h"

using namespace		std;

int main()
{
	Character *warrior = new Character();

	vector<string> specials;
	Equipment *sword = new Weapon(0, "Sword",specials,3,0);
	warrior->gainEquipment(*sword);

	return 0;
}