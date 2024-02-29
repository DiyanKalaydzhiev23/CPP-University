#include <iostream>
#include <string>
#include "input.h"

using namespace std;

void eraseStudentFromNamesArray(string &names, int beginIndex, int endIndex) {
    names.erase(beginIndex, endIndex);
}

string  motivatedPeople(string &names, string input) {
    string returnedNames = "Motivated: ";

    int lastNameStartIndex = 0;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == ' ') {
            string name = input.substr(lastNameStartIndex, i);

            if (names.contains(name)) {
                returnedNames += (name + " ");
                eraseStudentFromNamesArray(names, lastNameStartIndex, i - 1);
            }

            lastNameStartIndex = i + 1;
        }
    }

    return returnedNames;
}



string doExam(string &names, const string &input) {
    string returnedNames = "Studying Business: ";

    int lastNameStartIndex = 0;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == ' ') {
            string name = input.substr(lastNameStartIndex, i - 1);

            if (names.contains(name)) {
                returnedNames += (name + " ");
                eraseStudentFromNamesArray(names, lastNameStartIndex, i - 1);
            }

            lastNameStartIndex = i + 1;
        }
    }

    return returnedNames;
}

string createATask(string &names, const string &input) {
    int lastNameIndex;
    string output = "Just coming: ";
    int counter = 0;

    if (input == "Taylor Swift") {
        lastNameIndex = input.length() - 1;

        for (int i = names.size() - 1; i >= 0 ; --i) {
            if (counter == 2)
                break;

            if(input[i] == ' ') {
                string name = input.substr(i+1, lastNameIndex);
                output += (name);
                eraseStudentFromNamesArray(names, i + 1, lastNameIndex);
                lastNameIndex = i-1;
                counter++;
            }
        }
    } else if(input == "Cancel Culture Task") {
        lastNameIndex = 0;

        for (int i = 0; i <= input.length() - 1; i++) {
            if (counter == 2)
                break;

            if (input[i] == ' ') {
                string name = input.substr(lastNameIndex, i - 1);
                output += (name);
                eraseStudentFromNamesArray(names, lastNameIndex, i - 1);
                lastNameIndex = i + 1;
                counter++;
            }
        }
    }

    return output;
}

int main() {
    string names;
    input::inputNamesInString(names);

    string input;

    do {
        getline(cin, input);
        if (input == "Tell a personal story") {
            input = "";
            cin.sync();
            input::inputNamesInString(input);
            cout << motivatedPeople(names, input) << endl;
        } else if(input == "Do a exam") {
            input = "";
            cin.sync();
            getline(cin, input);
            cout << doExam(names, input) << endl;
        } else if(input == "Create a task") {
            input = "";
            cin.sync();
            input::inputNamesInString(input);
            cout << createATask(names, input) << endl;
        }
    } while(input != "End");

    return 0;
}