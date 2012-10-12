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

pos		Warrior::getPosition() const
{
	return(this->_pos);
}

bool	Warrior::moveTo(int x, int y)
{
	return (this->_controller->move(this, x, y));
}

bool	Warrior::attack(Character & c)
{
	c.looseLifePoint(this->_strength);
}

void	Warrior::setMana(int m)
{
	this->_mana = m % MAX_MANA;
}

void	Warrior::setLifePoint(int lp)
{
	this->_lifePoint = lp % MAX_LIFE;
}

void	Wizard::earnLifePoint(int amount)
{
	this->_lifePoint += amount;
}

void	Wizard::looseLifePoint(int amount)
{
	this->_lifePoint -= amount;
}

void	Warrior::epicWarriorSmash(Character & c)
{
	c.looseLifePoint(EPIC_WARRIOR_SMASH_BASE_STRENGTH * this->level);
}