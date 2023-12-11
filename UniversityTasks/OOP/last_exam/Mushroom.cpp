#include "Mushroom.h"
#include <iostream>

using std::cout;
using std::endl;

Mushroom::Mushroom() {
    this -> poisonous = false;
    this -> cooked_with = "";
}

Mushroom::Mushroom(bool poisonous, string cooked_with) {
    this -> poisonous = poisonous;
    this -> cooked_with = cooked_with;
}

// getters and setter would fit nice :)

// no need to be abstract just saying
void Mushroom::cook_mushroom() {
    cout << "Cooking mushroom with " << this -> cooked_with << endl;
}
