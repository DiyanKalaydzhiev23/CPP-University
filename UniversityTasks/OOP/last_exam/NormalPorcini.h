#ifndef LAST_EXAM_NORMALPORCINI_H
#define LAST_EXAM_NORMALPORCINI_H


#include "Porcini.h"

class NormalPorcini:public Porcini {
    public:
        NormalPorcini();

        void cook_mushroom() override;
};


#endif //LAST_EXAM_NORMALPORCINI_H
