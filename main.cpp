#include	"Map.hpp"
#include	"Warrior.hpp"
#include	"Wizard.hpp"

int			main()
{
	Character *	war = new Warrior("Bran", 0, 0);
	Character *	wiz = new Wizard("Elias", 0, 0);
	Map *	map = new Map(45, 18);
	map->addCharacter(war, 0, 0);
	map->addCharacter(wiz, 0, 0);
	std::cout << "Type \"quit\" to leave, \"move\" to move your character, etc." << std::endl;
	map->draw();
	while (1)
	{
		if (!map->playNextTurn()){
			map->draw();
			return(0);
		}
		map->draw();
	}
	return (0);
}