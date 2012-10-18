#ifndef				TALISMAN_WARRIOR
#define				TALISMAN_WARRIOR

#include <iostream>
#include <vector>
#include "Character.h"

using namespace			std;

class Warrior : public Character
{
public:
	Warrior();

private:
	vector<string>		abilities;
};
#endif				TALISMAN_WARRIOR