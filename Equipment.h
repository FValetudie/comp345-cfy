#ifndef				TALISMAN_EQUIPMENT
#define				TALISMAN_EQUIPMENT

#include			<iostream>
#include			<vector>
#include			"AdventureCard.h"
using namespace std;

class				Equipment : public AdventureCard{
public:
	Equipment(int id, string name, vector<string> specials);
	vector<string>	getSpecials() const;
	bool			hasSpecial(string);
private:
	vector<string>	specials;
};
#endif TALISMAN_EQUIPMENT