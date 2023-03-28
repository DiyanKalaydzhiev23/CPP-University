#include "People.h"

#include <iostream>
#include <cassert>
#include <cstring>

using std::strlen;

People::People(char *n, char *e) {
    name = new char[strlen(n) + 1];
    assert(name != NULL);
    strcpy_s(name, strlen(n) + 1, n);

    egn = new char[strlen(e) + 1];
    assert(egn != NULL);
    strcpy_s(egn, strlen(e) + 1, e);
}

People::People(const People &p) {
    name = new char[strlen(p.name) + 1];
    assert(name != NULL);
    strcpy_s(name, strlen(p.name) + 1, p.name);

    egn = new char[strlen(p.egn) + 1];
    assert(egn != NULL);
    strcpy_s(egn, strlen(p.egn) + 1, p.egn);
}

People::~People() {
    delete[] egn;
    delete[] name;
}

void People::set_name(char *n) {
    if (name != NULL) delete[] name;
    name = new char[strlen(n) + 1];
    assert(name != NULL);
    strcpy_s(name, strlen(n) + 1, n);
}

void People::set_egn(char *e) {
    if (egn != NULL) delete[] egn;
    egn = new char[strlen(e) + 1];
    assert(egn != NULL);
    strcpy_s(egn, strlen(e) + 1, e);
}

char *People::get_name() const {
    return name;
}

char *People::get_egn() const {
    return egn;
}

void People::print() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "EGN: " << egn << std::endl;
}

std::ostream &operator<<(std::ostream &out, const People &p) {
    out << "Name: " << p.name << " EGN: " << p.egn << std::endl;
    return out;
}

std::istream &operator>>(std::istream &in, People &p) {
    in >> p.name >> p.egn;
    return in;
}

