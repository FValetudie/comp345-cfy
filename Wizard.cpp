#include			"Wizard.hpp"

Wizard::Wizard(std::string n, int x, int y)
{
	_name = n;
	_lifePoint = MAX_LIFE;
	_mana = MAX_MANA;
	_strength = BASE_STRENGTH;
	_level = 1;
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

int		Wizard::getArmorLevel() const
{
	return (this->_armorLevel);
}

pos		Wizard::getPosition() const
{
	return(this->_pos);
}

/*bool	Wizard::playTurn()
{
	std::string s;
	std::cin >> s;
	if (s == "move")
	{
		int x,y;

		std::cout << "X position : ";
		std::cin >> x;
		std::cout << "Y position : ";
		std::cin >> y;
		if (this->_map->moveCharacter(this, this->_pos.x, this->_pos.y, x, y))
		{
			this->_pos.x = x;
			this->_pos.y = y;
		}
	}
}*/

// bool	Wizard::moveTo(int x, int y)
// {
	// return (this->_controller->move(this, x, y));
// }

bool	Wizard::attack(Character & c)
{
	c.looseLifePoint(this->_strength);
	return true;
}

// bool	Wizard::takeWeapon(Weapon * w)
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

void	Wizard::setPosition(int x, int y)
{
	this->_pos.x = x;
	this->_pos.y = y;
}

void	Wizard::setMana(int m)
{
	this->_mana = m % MAX_MANA;
}

void	Wizard::setArmorLevel(int l)
{
	this->_armorLevel = l;
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
		c.earnLifePoint(HEAL_SPELL_BASE_STRENGTH * this->_level);
	else if (e == DEATH_SPELL)
		c.looseLifePoint(DEATH_SPELL_BASE_STRENGTH * this->_level);
}