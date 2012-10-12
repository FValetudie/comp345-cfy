#include			"Wizard.hpp"

Wizard::Wizard(std::string n, int x, int y)
: _name(n), _lifePoint(MAX_LIFE), _mana(MAX_MANA), _level(1)
{
	this->_pos.x = x;
	this->_pos.y = y;
}

int		Wizard::getLifePoint() const
{
	return(this->_lifePoint);
}

int		Wizard::getMana() const
{
	return(this->_mana);
}

pos		Wizard::getPosition() const
{
	return(this->_pos);
}

bool	Wizard::moveTo(int x, int y)
{
	return (this->_controller->move(this, x, y));
}

bool	Wizard::attack(Character & c)
{
	c.looseLifePoint(this->_strength);
}

void	Wizard::setMana(int m)
{
	this->_mana = m % MAX_MANA;
}

void	Wizard::setLifePoint(int lp)
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

void	Wizard::makeSpell(eSpell e, Character & c)
{
	if (e == HEAL_SPELL)
		c.earnLifePoint(HEAL_SPELL_BASE_STRENGTH * this->level);
	else if (e == DEATH_SPELL)
		c.looseLifePoint(DEATH_SPELL_BASE_STRENGTH * this->level);
}