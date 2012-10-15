#ifndef		__COMP345_MAP__
#define		__COMP345_MAP__

#include	<iostream>
#include	<vector>
#include	<stdlib.h>
#include	"Case.hpp"

class		Map
{
	int		_width;
	int		_height;
	int		_currentTurn;
	Case***	_map;
	std::vector<Character*>	_charactersList;

 public:
	Map(int, int);
	~Map();
	
	void	createMap();
	
	int		getWidth() const;
	int		getHeight() const;
	
	bool	addCharacter(Character *, int, int);
	bool	moveCharacter(Character *, int, int, int, int);
	bool	removeCharacter(Character *, int, int);
	
	bool	playNextTurn();
	void	draw();
};

#endif		/* __COMP345_MAP__ */
