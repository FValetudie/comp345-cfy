#ifndef						TALISMAN_CHARACTER
#define						TALISMAN_CHARACTER

#include					<iostream>
#include					<list>
#include					"Equipment.h"

using namespace		std;

class				Character
{
	public:
	//--------------Accessors
	int						getCharName() const;
	int						getBaseStrength() const;
	int						getBaseCraft() const;
	int						getBaseHealth() const;
	int						getBaseFate() const;
	int						getTotalStrength() const;
	int						getTotalCraft() const;
	int						getTotalHealth() const;
	int						getTotalFate() const;
	int						getGold() const;
	int						getAlignment() const;
	int						getFate() const;
	int						getStartTile() const;

	list<Equipment>			getEquipment() const;
	list<Equipment>			getWeapons() const;
	list<Equipment>			getArmor() const;
	//list<Equipment>		getMagic() const;

	//[]Spell				getSpells() const;
	//list<Trophy>			getTrophies() const;
	//list<Follower>		getFollowers() const;
	int						getSkipTurns() const;
	int						getToadTurns() const;
	//Tile					getPosition();

	//--------------Mutators
	void					setTotalStrength(int strength);
	void					setTotalCraft(int strength);
	void					setTotalHealth(int health);
	void					setAlignment(string alignment);
	void					setFate(int fate);

	//void					setPosition(Tile t);

	//--------------Methods
	bool					hasTalisman();

	void					gainStrength(int strength);
	void					loseStrength(int strength);
	void					gainCraft(int craft);
	void					loseCraft(int craft);
	void					gainHealth(int health);
	void					loseHealth(int health);

	void					gainEquipment(Equipment e);
	void					loseEquipment(Equipment e);
	//void					addSpell(Spell);
	//void					useSpell(Spell);
	//void					addTrophy(Trophy);
	//void					useTrophies(list<Trophy>);
	//void					addFollower(Follower);
	//void					loseFollower(list<Follower>);
	void					addGold(int gold);
	void					useGold(int gold);

	int						skipTurns(int num);
	int						toadTurns(int num);

	virtual bool			attack(Character *c);
	//virtual bool			attack(Enemy *e);
	list<Equipment>			dropEquipment();
	void					heal();
	void					death();

private:
	string					charName;

	int						baseStrength;
	int						baseCraft;
	int						baseHealth;
	int						baseFate;
	int						totalStrength;
	int						totalCraft;
	int						totalHealth;
	int						totalFate;

	int						gold;
	string					alignment;
	//Tile					startTile;

	list<Equipment>	equipment;
	//Spell					spells[3];
	//list<Trophy>			trophies;
	//list<Follower>		followers;
	
	int						skipTurns;
	int						toadTurns;
	//Tile					position;


};

#endif						TALISMAN_CHARACTER