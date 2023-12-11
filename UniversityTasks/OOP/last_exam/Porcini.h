#ifndef LAST_EXAM_PORCINI_H
#define LAST_EXAM_PORCINI_H

#include "Mushroom.h"


class Porcini: public Mushroom {
    public:
        Porcini();
        Porcini(bool poisonous, string cooked_with, bool can_get_blue);

        void cook_mushroom() override;

    protected:
        bool can_get_blue;
};


#endif //LAST_EXAM_PORCINI_H
