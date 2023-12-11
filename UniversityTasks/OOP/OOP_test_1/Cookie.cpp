#include "Cookie.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::strcpy;

Cookie::Cookie() {
    char *newFlour = new char[10];

    setPercentSugar(0);
    setIsBaked(false);
    setFlourType(newFlour);
}

Cookie::Cookie(int percentSugar, bool isBaked, char *flour) {
    setPercentSugar(percentSugar);
    setIsBaked(isBaked);
    setFlourType(flour);
}

int Cookie::getPercentSugar() const {
    return this -> percentSugar;
}

bool Cookie::getIsBaked() const {
    return this -> isBaked;
}

const char * Cookie::getFlourType() const {
    return this -> flour;
}

int Cookie::setPercentSugar(int percentSugar) {
    this -> percentSugar = percentSugar;

    return percentSugar;
}

bool Cookie::setIsBaked(bool isBaked) {
    this -> isBaked = isBaked;

    return false;
}

const char *Cookie::setFlourType(const char *newFlour) {
    this -> flour = new char[strlen(newFlour) + 1];
    strcpy(this -> flour, newFlour);

    return newFlour;
}

void Cookie::print() {
    cout << "Cookie info:" << endl
    << "Is baked: " << this -> isBaked << endl
    << "Made with " << this -> flour << " flour" << endl
    << "Has " << this -> percentSugar << "% sugar" << endl;
}

Cookie::~Cookie() {
    delete[] this->flour;
}

Cookie Cookie::operator+(int sugar) {
    int newSugar = percentSugar + sugar;

    return Cookie(newSugar, false, "");
}
