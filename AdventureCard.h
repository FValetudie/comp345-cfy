#ifndef				TALISMAN_ADVENTURECARD
#define				TALISMAN_ADVENTURECARD

#include			<iostream>
using namespace std;

class				AdventureCard{
public:
	AdventureCard(int,string);

	int				getId();
	string			getName();

private:
	int				id;
	string			name;
};

#endif				TALISMAN_ADVENTURECARD