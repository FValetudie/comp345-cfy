#ifndef				__COMP345_CHARACTER__
#define				__COMP345_CHARACTER__

#include			<iostream>
#include			<string>
//#include			"Map.hpp"
// #include			"Weapon.hpp"
// #include			"Armor.hpp"

//class				Map;

#define				MAX_LIFE	100
#define				MAX_MANA	100
#define				EPIC_WARRIOR_SMASH_BASE_STRENGTH	15
#define				DEATH_SPELL_BASE_STRENGTH	10
#define				HEAL_SPELL_BASE_STRENGTH	10
#define				BASE_STRENGTH	5

struct				pos{
	int				x;
	int				y;
};

class				Character
{
protected:
	std::string		_name;
	int				_lifePoint;
	int				_mana;
	int				_strength;
	int				_armorLevel;
	int				_level;
	pos				_pos;
	// Weapon			*_weapon;
	// Armor			*_armorItem;
	// Map *			_map;

public:
	virtual int		getLifePoint() const = 0;
	virtual int		getMana() const = 0;
	virtual int		getArmorLevel() const = 0;
	virtual pos		getPosition() const = 0;

	//virtual bool	playTurn();
	// virtual bool	moveTo(int, int);
	virtual bool	attack(Character &) = 0;
	// virtual bool	takeWeapon(Weapon *);
	// virtual bool	takeArmor(Armor *);
	// virtual bool	dropWeapon();
	// virtual bool	dropArmor();
	virtual void	setPosition(int, int) = 0;
	virtual void	setMana(int) = 0;
	virtual void	setArmorLevel(int) = 0;
	virtual void	setLifePoint(int) = 0;
	virtual void	earnLifePoint(int amount) = 0;
	virtual void	looseLifePoint(int amount) = 0;
};

#endif				/* __COMP345_CHARACTER__ */