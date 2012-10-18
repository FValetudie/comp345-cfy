#include <iostream>
#include "Weapon.h"

using namespace			std;

Weapon::Weapon(int id, string name, int str):Equipment(id, name), strength(str)
{}