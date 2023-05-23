#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void getDiffTime(const string& first_time, const string& second_time) {
    int first_time_minutes = stoi(first_time.substr(0, 2)) * 60 + stoi(first_time.substr(2, 2));
    int second_time_minutes = stoi(second_time.substr(0, 2)) * 60 + stoi(second_time.substr(2, 2));

    int diff_in_minutes = second_time_minutes - first_time_minutes;

    int diff_hours = diff_in_minutes / 60;
    int diff_minutes = diff_in_minutes % 60;

    cout << diff_hours << " hours " << diff_minutes << " minutes" << endl;
}

int get_count_of_sub_string_occurrences(const string& sub_string, const string& original_string) {
    int occurrences = 0;
    string::size_type pos = 0;

    while ((pos = original_string.find(sub_string, pos )) != string::npos) {
        ++occurrences;
        pos += sub_string.length();
    }

    return occurrences;
}

void print_words_and_letters_count(const string& sentence) {
    string punctuation = ".,!?";

    int words_count = 1;
    int marks_count = 0;

    for (char letter : sentence) {
        if (punctuation.find(letter) != string::npos) {
            marks_count += 1;
        } else if (letter == ' '){
            words_count += 1;
        }
    }

    cout << "Words: " << words_count << " Marks count: " << marks_count << endl;
}


int main() {
    getDiffTime("0920", "1730");
    cout << " " << get_count_of_sub_string_occurrences("ma", "mama bought me muma");
    print_words_and_letters_count("mama bought me muma. in a huma, but a luma.");
    return 0;
}