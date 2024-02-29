#include <string>
#include <iostream>

using std::string;

namespace input {

    void inputNamesInString(string &value) {
        string userInput;

        while(true) {
            std::cin >> userInput;
            if(userInput != "End")
                value += (userInput + " ");
            else
                break;
        }
    }
}
