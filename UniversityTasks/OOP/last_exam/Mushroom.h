#ifndef LAST_EXAM_MUSHROOM_H
#define LAST_EXAM_MUSHROOM_H

#include <string>


using std::string;


class Mushroom {
    public:
        Mushroom();
        Mushroom(bool poisonous, string cooked_with);

        virtual void cook_mushroom();

    bool poisonous;
protected:
    string cooked_with;
};

#endif //LAST_EXAM_MUSHROOM_H
