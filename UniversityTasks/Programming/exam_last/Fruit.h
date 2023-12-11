#ifndef EXAM_LAST_FRUIT_H
#define EXAM_LAST_FRUIT_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::endl;


class Fruit {
    friend ostream& operator << (ostream &os, const Fruit &fruit) {
        os << "Name: " << fruit.name
        << " torn off " << fruit.days_torn_off << " days"
        << " . Weight " << fruit.weight
        << " . Is bio " << fruit.is_bio << endl;

        return os;
    }

    public:
        Fruit();
        Fruit(const string& name, int days_torn_off, float weight, bool is_bio);

        ~Fruit() = default;

        void get_name() const;
        void get_days_torn_off() const;
        void get_weight() const;
        void get_is_bio() const;

        string set_name(string name);
        int set_days_torn_off(int days_torn_off);
        float set_weight(float weight);
        bool set_is_bio(bool is_bio);

        Fruit populate_from_console();

    private:
        string name;
        int days_torn_off;
        float weight;
        bool is_bio;
};


#endif //EXAM_LAST_FRUIT_H
