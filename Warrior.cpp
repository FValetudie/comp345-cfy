#include			"Warrior.hpp"

Warrior::Warrior(std::string n, int x, int y)
{
	_name = n;
	_lifePoint = MAX_LIFE;
	_mana = MAX_MANA;
	_strength = BASE_STRENGTH;
	_level = 1;
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

int		Warrior::getArmorLevel() const
{
	return (this->_armorLevel);
}

pos		Warrior::getPosition() const
{
	return(this->_pos);
}

/*bool	Warrior::playTurn()
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

// bool	Warrior::moveTo(int x, int y)
// {
	// return (this->_controller->move(this, x, y));
// }

bool	Warrior::attack(Character & c)
{
	c.looseLifePoint(this->_strength);
	return true;
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

void	Warrior::setPosition(int x, int y)
{
	this->_pos.x = x;
	this->_pos.y = y;
}

void	Warrior::setMana(int m)
{
	this->_mana = m % MAX_MANA;
}

void	Warrior::setArmorLevel(int l)
{
	this->_armorLevel = l;
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