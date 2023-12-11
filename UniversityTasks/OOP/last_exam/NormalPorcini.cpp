#include "NormalPorcini.h"

#include <iostream>

using std::cout;
using std::endl;


NormalPorcini::NormalPorcini():Porcini(false, "rice", false) {

}

void NormalPorcini::cook_mushroom() {
    cout << "A super special and totally different way to cook NormalPorcini with " << this -> cooked_with << endl;
}