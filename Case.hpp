#ifndef			__COMP345_CASE__
#define			__COMP345_CASE__

#include		<vector>
#include		"Character.hpp"
#include		"TerritoriesTypes.hpp"

class			Character;

class			Case
{
	std::vector<Character*>	_characters;
	/*std::vector<Enemy*>	_enemies;
	std::vector<Weapon*>	_weapons;
	std::vector<Armor*>		_armors;*/
	eCaseType	_type;
	
 public:
	Case(eCaseType t = OUTER_TERRITORIES);
	~Case();
	
	std::vector<Character*> const	getCharactersList() const;
	/*std::vector<Weapon*> const		getWeaponsList() const;
	std::vector<Enemy*> const		getEnemiesList() const;
	std::vector<Armor*> const		getArmorsList() const;*/
	eCaseType						getType() const;
	
	bool		addCharacter(Character *);
	/*bool		addWeapon(Weapon *);
	bool		addArmor(Armor *);
	bool		addEnemy(Enemy *);*/

	Character *	dropCharacter(int);
	/*Weapon *	dropWeapon(int);
	Armor *		dropArmor(int);
	Enemy *		dropEnemy(int);*/
};

#endif		/* __COMP345_CASE__ */