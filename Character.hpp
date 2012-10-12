#ifndef				__COMP345_CHARACTER__
#define				__COMP345_CHARACTER__

#include			<iostream>

#define				MAX_LIFE	100
#define				MAX_MANA	100
#define				EPIC_WARRIOR_SMASH_BASE_STRENGTH	15
#define				DEATH_SPELL_BASE_STRENGTH	10
#define				HEAL_SPELL_BASE_STRENGTH	10


struct				pos{
	int				x;
	int				y;
};

class				Character
{
	std::string		_name;
	int				_lifePoint;
	int				_mana;
	pos				_pos;

public:
	virtual int		getLifePoint() const;
	virtual int		getMana() const;
	virtual pos		getPosition() const;

	virtual bool	moveTo(int, int);
	virtual bool	attack(Character &);
	virtual void	setMana(int);
	virtual void	setLifePoint(int);
	virtual void	earnLifePoint(int amount);
	virtual void	looseLifePoint(int amount);
};

#endif				__COMP345_CHARACTER__