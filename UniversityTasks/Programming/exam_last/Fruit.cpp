#include "Fruit.h"
#include <string>
#include <iostream>

using std::cin;
using std::cout;

using std::string;

Fruit::Fruit() {
    this -> set_name("");
    this -> set_days_torn_off(0);
    this -> set_weight(0);
    this -> set_is_bio(false);
}

Fruit::Fruit(const string& name, int days_torn_off, float weight, bool is_bio) {
    this -> set_name(name);
    this -> set_days_torn_off(days_torn_off);
    this -> set_weight(weight);
    this -> set_is_bio(is_bio);
}

string Fruit::set_name(string name) {
    this -> name = name;
    return name;
}

int Fruit::set_days_torn_off(int days_torn_off) {
    this -> days_torn_off = days_torn_off;
    return days_torn_off;
}

float Fruit::set_weight(float weight) {
    this -> weight = weight;
    return weight;
}

bool Fruit::set_is_bio(bool is_bio) {
    this -> is_bio = is_bio;
    return is_bio;
}

void Fruit::get_name() const {

}

void Fruit::get_days_torn_off() const {

}

void Fruit::get_weight() const {

}

void Fruit::get_is_bio() const {

}

Fruit Fruit::populate_from_console() {
    string name;
    int days_torn_off;
    float weight;
    bool is_bio;

    cout << "Enter the name of the fruit: ";
    cin >> name;

    cout << "Enter the number of days torn off: ";
    cin >> days_torn_off;

    cout << "Enter the weight of the fruit: ";
    cin >> weight;

    cout << "Enter if fruit is bio [0/1]: ";
    cin >> is_bio;

    return Fruit(name, days_torn_off, weight, is_bio);
}