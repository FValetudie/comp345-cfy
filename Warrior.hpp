#ifndef				__COMP345_WARRIOR__
#define				__COMP345_WARRIOR__

#include			"Character.hpp"

class				Warrior : public Character
{
public:
	Warrior(std::string, int, int);
	int		getLifePoint() const;
	int		getMana() const;
	int		getArmorLevel() const;
	pos		getPosition() const;

	//bool	playTurn();
	// bool	moveTo(int, int);
	bool	attack(Character &);
	// bool	takeWeapon(Weapon *);
	// bool	takeArmor(Armor *);
	// bool	dropWeapon();
	// bool	dropArmor();
	void	setPosition(int, int);
	void	setMana(int);
	void	setArmorLevel(int);
	void	setLifePoint(int);
	void	earnLifePoint(int amount);
	void	looseLifePoint(int amount);
	void	epicWarriorSmash(Character &);
};

#endif				/* __COMP345_WARRIOR__ */