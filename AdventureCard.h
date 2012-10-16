#ifndef				TALISMAN_ADVENTURECARD
#define				TALISMAN_ADVENTURECARD

#include			<iostream>
using namespace std;

class				AdventureCard{
private:
	int				id;
	string			name;

public:
	AdventureCard(int,string);

	int				getId();
	string			getName();
};

#endif TALISMAN_ADVENTURECARD