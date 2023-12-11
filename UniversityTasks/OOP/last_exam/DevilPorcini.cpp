#include "DevilPorcini.h"

#include <iostream>

using std::cout;
using std::endl;

DevilPorcini::DevilPorcini():Porcini(true,  "", true) {

}

DevilPorcini::DevilPorcini(string favourite_food):Porcini(true, favourite_food, true) {

}

void DevilPorcini::cook_mushroom() {
    cout << "A super special and totally different way to cook DevilPorcini with " << this -> cooked_with << endl;
}
