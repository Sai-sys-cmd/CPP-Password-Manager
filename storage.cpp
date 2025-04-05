#include <fstream>
#include <iostream>
#include "storage.h"
#include "entry.h"
using namespace std;

void saveEntriesToFile(const vector<Entry>& entries) {
    ofstream outFile("data.txt", ios::out | ios::trunc);

    if (!outFile) {
        cout << "Error opening file to save data.\n";
        return;
    }

    for (const auto& entry : entries) outFile << entry.sitename << "\n" << entry.username << "\n" << entry.password << "\n";

    outFile.close();
    cout << "Entries saved to file.\n";
}

void loadEntriesFromFile(vector<Entry>& entries) {
    ifstream inFile("data.txt", ios::in);

    if (!inFile) {
        cout << "Error opening file to load data.\n";
        return;
    }

    string sitename, username, password;

    while (getline(inFile, sitename) && getline(inFile, username) && getline(inFile, password)) entries.push_back(Entry(sitename, username, password));

    inFile.close();
    cout << "Entries loaded from file.\n";
}