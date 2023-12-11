#ifndef LAST_EXAM_DEVILPORCINI_H
#define LAST_EXAM_DEVILPORCINI_H


#include "Porcini.h"

class DevilPorcini: public Porcini {
    public:
        DevilPorcini();
        DevilPorcini(string favourite_food);

        void cook_mushroom() override;
};


#endif //LAST_EXAM_DEVILPORCINI_H
