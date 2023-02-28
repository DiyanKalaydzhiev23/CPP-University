#ifndef OVERLOADING_MONEY_H
#define OVERLOADING_MONEY_H


class Money {
    public:
        Money(int leva, int stotinki);
        Money operator +(const Money &other);
        Money operator -(const Money &other);
        Money operator *(int x);
        Money operator /(int x);
        int getLeva() const;
        int getStotinki() const;
    private:
        int leva;
        int stotinki;
};


#endif //OVERLOADING_MONEY_H
