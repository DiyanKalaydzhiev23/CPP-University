#ifndef OVERLOADING_BIGINTEGER_H
#define OVERLOADING_BIGINTEGER_H

#include <iostream>
#include <string>

using std::string;
using std::ostream;


class BigInteger {
    friend ostream &operator <<(ostream  &output, BigInteger &i) {
        output << i.number;
        return output;
    }

    public:
        BigInteger();
        BigInteger(int num);
        explicit BigInteger(string numberText);

        BigInteger operator +(const BigInteger &other);
        BigInteger operator -(const BigInteger &other);
        BigInteger operator *(const BigInteger &other);

    private:
        int number;
};


#endif
