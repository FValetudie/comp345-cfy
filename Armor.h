#ifndef				TALISMAN_ARMOR
#define				TALISMAN_ARMOR

#include			<iostream>
#include			"Equipment.h"
using namespace		std;

class				Armor : public Equipment{
public:
	Armor(int id,string name,int roll);
	int			getRollLimit();

private:
	int			rollLimit;
};

#endif TALISMAN_ARMOR