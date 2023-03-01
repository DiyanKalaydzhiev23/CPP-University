#include "Money.h"


Money::Money() {
    leva = 0;
    stotinki = 0;
}

Money::Money(int l, int s) {
    leva = l;
    stotinki = s;
}

int Money::getLeva() const {
    return leva;
}

int Money::getStotinki() const {
    return stotinki;
}

Money Money::operator +(const Money &other) {
    int currentLeva = leva + other.leva;
    int currentStotinki = stotinki + other.stotinki;

    if (currentStotinki >= 100) {
        currentLeva += 1;
        currentStotinki -= 100;
    }

    return Money(currentLeva, currentStotinki);
}

Money Money::operator -(const Money& other) {
    int currentLeva = leva - other.leva;
    int currectStotinki = stotinki - other.stotinki;

    if (currectStotinki < 0) {
        currentLeva -= 1;
        currectStotinki += 100;
    }

    return Money(currentLeva, currectStotinki);
}

Money Money::operator *(int x) {
    int currentLeva = leva * x;
    int currentStotinki = stotinki * x;

    if (currentStotinki >= 100) {
        currentLeva += currentStotinki / 100;
        currentStotinki += currentStotinki % 100;
    }

    return Money(currentLeva, currentStotinki);
}

Money Money::operator /(int x) {
    int number = leva * 100 + stotinki;
    int newNumber = number / x;

    int currentLeva = newNumber / 100;
    int currentStotinki = newNumber % 100;

    return Money(currentLeva, currentStotinki);
}

bool Money::operator >(const Money &other) {
    if (leva > other.leva) {
        return true;
    } else if (leva == other.leva && stotinki > other.stotinki) {
        return true;
    } else {
        return false;
    }
}

bool Money::operator <(const Money &other) {
    if (leva < other.leva) {
        return true;
    } else if (leva == other.leva && stotinki < other.stotinki) {
        return true;
    } else {
        return false;
    }
}

bool Money::operator ==(const Money &other) {
    return (leva == other.leva && stotinki == other.stotinki);
}

bool Money::operator !=(const Money &other) {
    Money newObject = Money(leva, stotinki);

    return !(newObject == other);
}

bool Money::operator >=(const Money &other) {
    Money newObject = Money(leva, stotinki);

    return newObject > other || newObject == other;
}

bool Money::operator <=(const Money &other) {
    Money newObject = Money(leva, stotinki);

    return newObject < other || newObject == other;
}
