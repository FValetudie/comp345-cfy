#ifndef				__COMP345_WIZARD__
#define				__COMP345_WIZARD__

#include			"Character.hpp"

enum				eSpell
{
	DEATH_SPELL,
	HEAL_SPELL
}

class				Wizard : public Character
{
public:
	Wizard(std::string, int, int);
	int		getLifePoint() const;
	int		getMana() const;
	pos		getPosition() const;

	bool	moveTo(int, int);
	bool	attack(Character &);
	void	setMana(int);
	void	setLifePoint(int);
	void	earnLifePoint(int amount);
	void	looseLifePoint(int amount);
	void	makeSpell(eSpell, Character &);
};

#endif				__COMP345_WIZARD__