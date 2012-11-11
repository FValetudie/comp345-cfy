#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>
#include "Character.h"

using namespace			std;

Character::Character(string name, int bStrength, int bCraft, int bHealth, int bFate, int gold, string align,vector<string> abilities /*Tile start*/)
{}

bool Character::attack(Character *c)
{
	//special abilities
	//choose weapon/armor/spell
	//roll for both characters/fate
	//calc strengths/crafts
	//fight
	//spell/item
	//result -> win/lose/death
}

//bool Character::attack(Enemy *e)
//{}

int Character::calcTotalStrength(int dice)
{
	return baseStrength + weapon.getStrength + dice;
}

int Character::calcTotalCraft(int c)
{}

void Character::setTotalHealth(int h)
{}

void Character::setAlignment(string a)
{}

void Character::useFate() // consume a fate coin
{
   int temp = totalFate - 1;
   if (temp < 0)
      totalFate = 0;
   else
      totalFate -= 1;

}

void Character::gainFate(int fate)  
{
   if (fate>0)
   {
      totalFate += fate;
   }   
}

void Character::replenishFate(int fate)
{
   if (fate>0)
   {
      int temp = totalFate + fate;
      if (temp > baseFate)
         totalfate = baseFate;
      else
         totalFate = temp; 
   }
}

void Character::setWeapon()
{
	int num;
	cout << "Enter the number of the weapon you wish to use:" << endl;
	for(int i=0; i < getWeapons().size(); i++)
	{
		string tmp = getWeapons()[i].getName();
		cout << (i+1) << ". " << tmp << endl;
	}
	cin >> num;
	weapon = getWeapons()[num-1];
}

Weapon Character::getWeapon() const
{
	
}

void Character::setArmor()
{
	int num;
	cout << "Enter the number of the armor you wish to use:" << endl;
	for(int i=0; i < getArmors().size(); i++)
		cout << (i+1) << ". " << getArmors()[i].getName() << endl;
	cin >> num;
	weapon = getWeapons()[num-1];
}

Armor Character::getArmor() const
{
	
}

void Character::death()
{}

void Character::heal()
{
	totalHealth = baseHealth;
}

void Character::gainCraft(int c)
{}

void Character::gainStrength(int s)
{}

void Character::gainHealth(int h)
{}

void Character::loseCraft(int c)
{}

void Character::loseStrength(int s)
{}

void Character::loseHealth(int h)
{
	if()
}

void Character::loseEquipment(vector<Equipment> e)
{}

void Character::gainEquipment(vector<Equipment> e)
{}

int Character::getBaseCraft() const
{}

string Character::getAlignment() const
{}

vector<Armor> Character::getArmors() const
{
	for(int i=0; i < equipment.size(); i++)
		if(typeid(equipment[i]).name().compare() ==0)
}

int Character::getBaseFate() const
{}

int Character::getBaseHealth() const
{}

int Character::getBaseStrength() const
{}

string Character::getCharName() const
{}

vector<Equipment> Character::getEquipment() const
{}

int Character::getFate() const
{}

int Character::getGold() const
{}

int Character::getSkipTurns() const
{}

int Character::getToadTurns() const
{}

vector<string> Character::getAbilities() const
{}

vector<Weapon> Character::getWeapons() const
{}

vector<Equipment> Character::dropEquipment()
{}