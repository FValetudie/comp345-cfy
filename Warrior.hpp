#ifndef				__COMP345_WARRIOR__
#define				__COMP345_WARRIOR__

#include			"Character.hpp"

enum				eSpell
{
	DEATH_SPELL,
	HEAL
}

class				Warrior : public Character
{
public:
	Warrior(std::string, int, int);
	int		getLifePoint() const;
	int		getMana() const;
	pos		getPosition() const;

	bool	moveTo(int, int);
	bool	attack(Character &);
	void	setMana(int);
	void	setLifePoint(int);
	void	earnLifePoint(int amount);
	void	looseLifePoint(int amount);
	void	epicWarriorSmash(Character &);
};

#endif				__COMP345_WARRIOR__