#ifndef						TALISMAN_CHARACTER
#define						TALISMAN_CHARACTER

#include					<iostream>
#include					<vector>
#include					"Equipment.h"
#include					"Weapon.h"
#include					"Armor.h"

using namespace		std;

class				Character
{
	public:
	//--------------Accessors
	Character(string name, int bStrength, int bCraft, int bHealth, int bFate, int gold, string align, vector<string> abilities /*Tile start*/);
	string					getCharName() const;
	int						getBaseStrength() const;
	int						getBaseCraft() const;
	int						getBaseHealth() const;
	int						getBaseFate() const;
	int						getTotalStrength() const;
	int						getTotalCraft() const;
	int						getTotalHealth() const;
	int						getTotalFate() const;
	int						getGold() const;
	string					getAlignment() const;
	int						getFate() const;
	vector<string>			getAbilities() const;
	//Tile					getStartTile() const;

	vector<Equipment>		getEquipment() const;
	vector<Weapon>			getWeapons() const;
	Weapon					getWeapon() const;
	vector<Armor>			getArmors() const;
	Armor					getArmor() const;
	//vector<Equipment>		getMagic() const;

	//[]Spell				getSpells() const;
	//vector<Trophy>		getTrophies() const;
	//vector<Follower>		getFollowers() const;
	int						getSkipTurns() const;
	int						getToadTurns() const;
	//Tile					getPosition();

	//--------------Mutators
	void					setTotalHealth(int newHealth);
	void					setAlignment(string alignment);
	void					setFate(int fate);
	void					setGold(int gold);
	void					setArmor();
	void					setWeapon();
	//void					setPosition(Tile t);

	//--------------Methods
	bool					hasTalisman();

	int						calcTotalStrength(int addStrength);
	int						calcTotalCraft(int addCraft);

	void					gainStrength(int strength);
	void					loseStrength(int strength);
	void					gainCraft(int craft);
	void					loseCraft(int craft);
	void					gainHealth(int health);
	void					loseHealth(int health);

	void					gainEquipment(vector<Equipment> e);
	void					loseEquipment(vector<Equipment> e);
	//void					addSpell(Spell);
	//void					useSpell(Spell);
	//void					addTrophy(Trophy);
	//void					useTrophies(vector<Trophy>);
	//void					addFollower(Follower);
	//void					loseFollower(vector<Follower>);

	int						skipTurns(int num);
	int						toadTurns(int num);

	virtual bool			attack(Character *c);
	//virtual bool			attack(Enemy *e);
	vector<Equipment>		dropEquipment();
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

	Weapon					weapon;
	Armor					armor;

	vector<string>			abilities;

	int						gold;
	string					alignment;
	//Tile					startTile;

	vector<Equipment>		equipment;
	//Spell					spells[3];
	//vector<Trophy>		trophies;
	//vector<Follower>		followers;
	
	int						skipTurns;
	int						toadTurns;
	//Tile					position;


};

#endif						TALISMAN_CHARACTER