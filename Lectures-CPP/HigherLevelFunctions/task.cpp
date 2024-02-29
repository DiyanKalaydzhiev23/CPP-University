#include <iostream>
#include <string>

using namespace std;

void workout(int& energy, int& desire) {
    int duration;
    string name;
    cin >> duration >> name;

    energy -= duration;
    desire += (duration < 45) ? -duration : duration;
    cout << "Finished " << name << " workout in " << duration << " minutes\n";
}

void socializeInRealWorld(int& energy, int& desire) {
    int friends;
    cin >> friends;

    desire += 10 * friends;
    energy -= 2 * friends;
    cout << "Seeing some friends once a week keeps my depression weak\n";
}

void goOnDate(int& energy, int& desire) {
    string outcome;
    cin >> outcome;

    if (outcome == "success") {
        energy *= 2;
        desire *= 2;
        cout << "[Favorite song lyrics]\n";
    } else {
        energy /= 3;
        desire /= 3;
        cout << "Why can’t you be normal?\n";
    }
}

void goOnTinder(int& energy, int& desire) {
    string opinion;
    cin >> opinion;

    energy /= 2;
    desire += (opinion == "like") ? 68 : -70;
    cout << "Google search: Tinder+ mod apk\n";
}

void eatHealthy(int& energy, int& desire) {
    int foodQuantity;
    cin >> foodQuantity;

    energy += foodQuantity / 100;
    desire /= 4;
    cout << "Who ** eats ginger?\n";
}

void eatUnhealthy(int& energy, int& desire) {
    int foodQuantity;
    cin >> foodQuantity;

    energy *= foodQuantity / 1000;
    desire *= 2;
    cout << "With all that pizza in my stomach I am a ninja turtle!\n";
}

void doFromSchedule(void (*func)(int&, int&), int& energy, int& desire) {
    if (energy < 50 && func != eatHealthy && func != eatUnhealthy) {
        cout << "Too tired to do anything other than eat.\n";
    } else {
        func(energy, desire);
    }
}

int main() {
    int energy, desire;
    cin >> energy >> desire;
    cin.ignore();

    string command;
    while (true) {
        getline(cin, command);
        
        if (command == "End") {
            break;
        } else if (command == "workout") {
            doFromSchedule(workout, energy, desire);
        } else if (command == "socialize in the real world") {
            doFromSchedule(socializeInRealWorld, energy, desire);
        } else if (command == "go on a date") {
            doFromSchedule(goOnDate, energy, desire);
        } else if (command == "go on tinder") {
            doFromSchedule(goOnTinder, energy, desire);
        } else if (command == "eat healthy") {
            doFromSchedule(eatHealthy, energy, desire);
        } else if (command == "eat unhealthy") {
            doFromSchedule(eatUnhealthy, energy, desire);
        }
    }

    return 0;
}