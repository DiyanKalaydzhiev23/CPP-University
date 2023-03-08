#include "BigInteger.h"


BigInteger::BigInteger() {
    number = std::stoi("0");
}

BigInteger::BigInteger(int num) {
    number = num;
}

BigInteger::BigInteger(const BigInteger &otherInteger){
    this -> number = otherInteger.number;
}

BigInteger::BigInteger(string numberInText) {
    number = std::stoi(numberInText);
}

BigInteger BigInteger::operator +(const BigInteger &other) {
    return BigInteger(number + other.number);
}

BigInteger BigInteger::operator -(const BigInteger &other) {
    return BigInteger(number - other.number);
}

BigInteger BigInteger::operator *(const BigInteger &other) {
    return BigInteger(number * other.number);
}
