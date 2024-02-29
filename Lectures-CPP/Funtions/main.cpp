#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

struct User {
    string username;
    string password;
    string accountType; // "user" or "creator"
};

bool userExists(User users[], int userCount, const string& username) {
    for (int i = 0; i < userCount; ++i) {
        if (users[i].username == username) {
            return true;
        }
    }
    return false;
}

void registerUser(User users[], int& userCount, const string& username, const string& password, const string& accountType) {
    if (userExists(users, userCount, username)) {
        cout << "Username is already taken" << endl;
        return;
    }

    users[userCount].username = username;
    users[userCount].password = password;
    users[userCount].accountType = accountType;
    userCount++;

    cout << username << " registered successfully!" << endl;
}

void loginUser(User users[], int userCount, const string& username, const string& password) {
    for (int i = 0; i < userCount; ++i) {
        if (users[i].username == username && users[i].password == password) {
            cout << username << " logged in" << endl;
            return;
        }
    }
    cout << "Username or password is invalid" << endl;
}

void followCreators(User users[], int userCount, const string& username, int followCount, ...) {
    string currentUserType;
    for (int i = 0; i < userCount; ++i) {
        if (users[i].username == username) {
            currentUserType = users[i].accountType;
            break;
        }
    }

    if (currentUserType != "user") {
        cout << "Only normal users can follow creators" << endl;
        return;
    }

    va_list args;
    va_start(args, followCount);

    string followedUsers;
    for (int i = 0; i < followCount; ++i) {
        string followUsername = va_arg(args, char*);
        bool isCreator = false;
        for (int j = 0; j < userCount; ++j) {
            if (users[j].username == followUsername && users[j].accountType == "creator") {
                isCreator = true;
                break;
            }
        }

        if (!isCreator) {
            cout << "Normal users can follow only creators" << endl;
            va_end(args);
            return;
        }

        if (i > 0) {
            followedUsers += ", ";
        }
        followedUsers += followUsername;
    }

    va_end(args);

    cout << username << " has followed " << followedUsers << endl;
}

int main() {
    int n;
    cin >> n;
    User* users = new User[n];
    int userCount = 0;

    // Register Users
    registerUser(users, userCount, "NoBalloonsUnused96", "pass1", "user");
    registerUser(users, userCount, "Ho_logram_hunter00", "pass2", "user");

    registerUser(users, userCount, "Cardi B", "pass3", "creator");
    registerUser(users, userCount, "The Rock", "pass4", "creator");

    // Login Users
    loginUser(users, userCount, "NoBalloonsUnused96", "pass1");
    loginUser(users, userCount, "Ho_logram_hunter00", "wrongpass");

    // Follow Creators
    string creator1 = "Cardi B";
    string creator2 = "The Rock";
    followCreators(users, userCount, "NoBalloonsUnused96", 2, &creator1, &creator2);
    string user1 = "user1";
    followCreators(users, userCount, "Ho_logram_hunter00", 1, &user1);

    delete[] users; // Free allocated memory

    return 0;
}
