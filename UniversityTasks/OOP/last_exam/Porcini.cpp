#include "Porcini.h"

#include <iostream>

using std::cout;
using std::endl;

Porcini::Porcini():Mushroom() {
    this -> can_get_blue = false;
}

Porcini::Porcini(bool poisonous, string cooked_with, bool can_get_blue):Mushroom(poisonous, cooked_with) {
    this -> can_get_blue = can_get_blue;
}

void Porcini::cook_mushroom() {
    cout << "A totally different way to eat a mushroom Porcini with " << this -> cooked_with << endl;
}
