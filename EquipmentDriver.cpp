#include			<iostream>
#include			<vector>
#include			"Warrior.h"
#include			"Sword.h"
#include			"Axe.h"
#include			"Shield.h"

using namespace		std;

int main()
{
	Character *warrior = new Warrior();

	Equipment *sword = new Sword();
	Equipment *axe = new Axe();
	Equipment *shield = new Shield();

	vector<Equipment> equip(3,(*sword,*axe,*shield));
	warrior->gainEquipment(equip);

	//simulate rolled 3
	warrior->calcTotalStrength(3);

	cout << warrior->getTotalStrength();

	return 0;
}