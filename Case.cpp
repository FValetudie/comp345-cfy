#include	"Case.hpp"
#include	"Character.hpp"

Case::Case(eCaseType t)
: _type(t)
{
}

Case::~Case()
{
	while (!this->_characters.empty())
		this->_characters.pop_back();
	/*
	while (!this->_weapons.empty())
		this->weapons.pop_back();
	while (!this->_armor.empty())
		this->_armor.pop_back();
	while (!this->_enemy.empty())
		this->_enemy.pop_back();*/
}

std::vector<Character*> const	Case::getCharactersList() const
{
	return _characters;
}

/*std::vector<Weapon*> const		Case::getWeaponsList() const
{
	return _weapons;
}

std::vector<Armor*> const		Case::getArmorsList() const
{
	return _armor;
}

std::vector<Enemy*> const		Case::getEnemiesList() const
{
	return _enemies;
}*/

eCaseType			Case::getType() const
{
	return _type;
}

bool		Case::addCharacter(Character * c)
{
	//if (c.canGoToArea(this->_type))
		_characters.push_back(c);
	return true;
}

/*bool		Case::addWeapon(Weapon * w)
{
	_weapons.push_back(w);
}

bool		Case::addArmor(Armor * a)
{
	_armor.push_back(a);
}

bool		Case::addEnemy(Enemy * e)
{
	_enemies.push_back(e);
}*/


Character *	Case::dropCharacter(int i)
{
	Character*	c;
	
	c = _characters[i];
	_characters.erase(_characters.begin()+i);
	return c;
}

/*Weapon *	Case::dropWeapon(int i)
{
	Weapon*	w;
	
	w = _weapons[i];
	_weapons.erase(_weapons.begin()+i);
	return w;
}

Armor *		Case::dropArmor(int i)
{
	Armor*	a;
	
	a = _armors[i];
	_armors.erase(_armors.begin()+i);
	return a;
}

Enemy *		Case::dropEnemy(int i)
{
	Enemy*	e;
	
	e = _enemies[i];
	_enemies.erase(_enemies.begin()+i);
	return e;
}*/