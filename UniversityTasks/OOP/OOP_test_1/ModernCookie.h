#ifndef OOP_TEST_1_MODERNCOOKIE_H
#define OOP_TEST_1_MODERNCOOKIE_H


#include "Cookie.h"
#include "Shape.h"


class ModernCookie: public Cookie {
    public:
        ModernCookie(int edges, bool isBaked, char *flour, bool isVegan);

        void print();

    private:
        Shape shape;
        bool isVegan;
};


#endif //OOP_TEST_1_MODERNCOOKIE_H
