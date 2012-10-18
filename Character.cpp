#include <iostream>
#include <vector>
#include "Equipment.h"
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

int Character::calcTotalStrength(int s)
{
	//var s: The combination of valid roll/weapon
}

int Character::calcTotalCraft(int c)
{}

void Character::setTotalHealth(int h)
{}

void Character::setAlignment(string a)
{}

void Character::setFate(int fate)
{}

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
{}

void Character::loseEquipment(vector<Equipment> e)
{}

void Character::gainEquipment(vector<Equipment> e)
{}

int Character::getBaseCraft() const
{}

string Character::getAlignment() const
{}

vector<Equipment> Character::getArmor() const
{}

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

vector<Equipment> Character::getWeapons() const
{}

vector<Equipment> Character::dropEquipment()
{}