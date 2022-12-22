#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;

// dynamic array

int main() {
    int length;

    cout << "Enter sentence length: ";
    cin >> length;

    length++;

    char * sentence = new char[length];

    cout << "Enter sentence: ";

    cin.ignore();
    cin.getline(sentence, length);
    
    cout << sentence;

    if (sentence != nullptr) {
        delete[] sentence;
        sentence = nullptr;
    }

    return 0;
}