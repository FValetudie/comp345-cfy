#include <iostream>
#include "Warrior.h"

using namespace			std;

vector<string> abilities (1,"none");

Warrior::Warrior():Character("Warrior",5,3,4,4,1,"Neutral",abilities)
{}