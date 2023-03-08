#ifndef OVERLOADING_MONEY_H
#define OVERLOADING_MONEY_H

#include <iostream>

using std::istream;
using std::ostream;

class Money {
    public:
        Money();
        Money(int leva, int stotinki);

        int getLeva() const;
        int getStotinki() const;

        Money operator +(const Money &other);
        Money operator -(const Money &other);
        Money operator *(int x);
        Money operator /(int x);

        bool operator >(const Money &other);
        bool operator <(const Money &other);
        bool operator ==(const Money &other);
        bool operator !=(const Money &other);
        bool operator >=(const Money &other);
        bool operator <=(const Money &other);

        friend istream &operator >>(istream  &input, Money &m) {
            char dot;
            input >> m.leva >> dot >> m.stotinki;
            return input;
        }

        friend ostream &operator <<(ostream  &output, Money &m) {
            output << m.leva << '.' << m.stotinki;
            return output;
        }

        friend Money operator %(int intPercent, const Money &other) {
            int newStotinki = (other.leva * 100 + other.stotinki) * (intPercent / 100.00);

            int newLeva = newStotinki / 100;
            newStotinki = newStotinki % 100;

            return Money(newLeva, newStotinki);
        }

    private:
        int leva;
        int stotinki;
};


#endif //OVERLOADING_MONEY_H
