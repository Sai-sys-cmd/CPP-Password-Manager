#include <iostream>
#include <limits>
#include <cstdlib>
#include "utils.h"
using namespace std;

void pauseAndClear() {
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
    system("clear");
}

string getInput(const string& prompt) {
    string input;
    cout << prompt;
    getline(cin >> ws, input);
    return input;
}

void printDivider() {
    cout << "------------------------------------------\n";
}