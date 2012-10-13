#include			"Warrior.hpp"

Warrior::Warrior(std::string n, int x, int y)
: _name(n), _lifePoint(MAX_LIFE), _mana(MAX_MANA), _level(1)
{
	this->_pos.x = x;
	this->_pos.y = y;
}

int		Warrior::getLifePoint() const
{
	return(this->_lifePoint);
}

int		Warrior::getMana() const
{
	return(this->_mana);
}

// int		Wizard::getArmorLevel() const
// {
	// return (this->_armorLevel);
// }

pos		Warrior::getPosition() const
{
	return(this->_pos);
}

// bool	Warrior::moveTo(int x, int y)
// {
	// return (this->_controller->move(this, x, y));
// }

bool	Warrior::attack(Character & c)
{
	c.looseLifePoint(this->_strength);
}

// bool	Warrior::takeWeapon(Weapon * w)
// {
	// this->dropWeapon();
	// this->_weapon = w;
// }

// bool	Wizard::takeArmor(Armor * a)
// {
	// this->dropArmor();
	// this->_armorLevel -= a->getArmorValue();
	// this->_armorItem = a;
// }

// bool	Wizard::dropWeapon()
// {
	// if (this->_weapon != NULL)
		// delete this->_weapon;
// }

// bool	Wizard::dropArmor()
// {
	// if (this->_armorItem != NULL){
		// this->_armorLevel -= this->_armorItem->getArmorValue();
		// delete this->_armorItem;
	// }
// }

void	Warrior::setMana(int m)
{
	this->_mana = m % MAX_MANA;
}

void	Warrior::setLifePoint(int lp)
{
	this->_lifePoint = lp % MAX_LIFE;
}

void	Warrior::earnLifePoint(int amount)
{
	this->_lifePoint += amount;
}

void	Warrior::looseLifePoint(int amount)
{
	this->_lifePoint -= amount;
}

void	Warrior::epicWarriorSmash(Character & c)
{
	c.looseLifePoint(EPIC_WARRIOR_SMASH_BASE_STRENGTH * this->_level);
}