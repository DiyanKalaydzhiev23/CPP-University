#include <iostream>
#include <algorithm>
#include <string>
#include "Fruit.h"

using std::endl;
using std::cout;
using std::cin;
using std::begin;
using std::find;
using std::end;
using std::string;
using std::reverse;


void initialize_array_with_letters() {
    int size;
    int vowels_count = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    char *letters_array = new char[size];
    char all_vowels[] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < size; i++) {
        letters_array[i] = 'a' + rand() % 26;

        for (auto vowel : all_vowels) {

            if (vowel == letters_array[i]) {
                vowels_count += 1;
                break;
            }
        }
    }

    char *current_vowels = new char[vowels_count];

    // totally useless to iterate twice, would do it with a vector and iterate once or make the array the same size
    // memory is cheap
    for (int i = 0; i < size; i++) {
        for (auto vowel : all_vowels) {
            if (vowel == letters_array[i]) {
                current_vowels[i] = letters_array[i];

                break;
            }
        }
    }

    for (int i = 0; i < vowels_count; i++) {
        for (auto vowel : all_vowels) {
            if (vowel == current_vowels[i]) {
                cout << current_vowels[i] << endl;
            }
        }
    }
}


void print_sentence_with_reversed_words() {
    cout << "Enter a sentence: ";
    string word;

    while (cin >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }

    cout << endl;
}




int main() {
    srand(time(0));
    srand (time(nullptr));

    initialize_array_with_letters();
    print_sentence_with_reversed_words();

    Fruit fruit;

    fruit = fruit.populate_from_console();
    cout << fruit << endl;

    return 0;
}
