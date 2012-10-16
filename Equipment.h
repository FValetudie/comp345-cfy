#ifndef				TALISMAN_EQUIPMENT
#define				TALISMAN_EQUIPMENT

#include			<iostream>
#include			<list>
#include			"AdventureCard.h"
using namespace std;

class				Equipment : public AdventureCard{
public:
	Equipment(int id, string name, list<string> restrictions);
	list<string> getRestrictions() const;
	void addRestriction(string restriction);
	void remRestriction(string restriction);
private:
	list<string> restrictions;
};
#endif TALISMAN_EQUIPMENT