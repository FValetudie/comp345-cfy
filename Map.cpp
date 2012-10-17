#include	"Map.hpp"
#include	"Character.hpp"

Map::Map(int w, int h)
: _width(w), _height(h), _currentTurn(0)
{
	this->_map = new Case**[w];//(Case***)malloc((w) * sizeof(Case**));
	for (int i = 0; i < w; i++){
		this->_map[i] = new Case*[h];//(Case**)malloc((h) * sizeof(Case*));
		for (int j = 0; j < h; j++)
			this->_map[i][j] = new Case();
	}
}

Map::~Map()
{
	for (int i = 0; i < this->_width; i++){
		for (int j = 0; j < this->_height; j++)
			delete this->_map[i][j];
		delete[] this->_map[i];
	}
	delete[] this->_map;
}

int		Map::getWidth() const
{
	return this->_width;
}

int		Map::getHeight() const
{
	return this->_height;
}

bool	Map::addCharacter(Character * c, int x, int y)
{
	this->_map[x][y]->addCharacter(c);
	this->_charactersList.push_back(c);
	return true;
}

bool	Map::moveCharacter(Character * c, int px, int py, int x, int y)
{
	std::vector<Character*> v;
	
	v = this->_map[px][py]->getCharactersList();
	for (unsigned int i = 0; i < v.size(); i++)
		if (v[i] == c)
		{
			this->_map[px][py]->dropCharacter(i);
			this->_map[x][y]->addCharacter(c);
			return true;
		}
	return false;
}

bool	Map::removeCharacter(Character * c, int x, int y)
{
	std::vector<Character*> v;
	
	v = this->_map[x][y]->getCharactersList();
	for (unsigned int i = 0; i < v.size(); i++)
		if (v[i] == c)
		{
			this->_map[x][y]->dropCharacter(i);
			return true;
		}
	return false;
}

bool	Map::playNextTurn()
{
	std::string s;

	std::cout << "Player number " << _currentTurn << ", what do you want to do ? ";
	std::cin >> s;
	if (s == "move"){
		int x,y;

		std::cout << "X position : ";
		std::cin >> x;
		std::cout << "Y position : ";
		std::cin >> y;
		if (this->moveCharacter(this->_charactersList[this->_currentTurn], this->_charactersList[this->_currentTurn]->getPosition().x, this->_charactersList[this->_currentTurn]->getPosition().y, x, y))
			this->_charactersList[this->_currentTurn]->setPosition(x, y);
	}
	else if(s == "quit"){
		std::cout << "Really quit ? (yes/no) : ";
		std::cin >> s;
		if (s == "yes")
			return false;
		return true;
	}
	this->_currentTurn = (this->_currentTurn + 1) % this->_charactersList.size();
	return true;
}

void		Map::draw()
{
	std::cout << "|";
	for (int i = 0; i < this->_width; i++)
		std::cout << "-";
	std::cout << "-" << std::endl;
	for (int i = 0; i < this->_height; i++){
		std::cout << "|";
		for (int j = 0; j < this->_width; j++)
		{
			int s = this->_map[j][i]->getCharactersList().size();
			if (s > 0)
				std::cout << s;
			else
				std::cout << " ";
		}
		std::cout << "|" << std::endl;
	}
	std::cout << "-";
	for (int i = 0; i < this->_width; i++)
		std::cout << "-";
	std::cout << "|" << std::endl;
}