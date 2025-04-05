#include <iostream>
#include <string>
#include <vector>
#include "entry.h"
#include "encryption.h"
using namespace std;

void addEntry(vector<Entry>& entries) {
    string site, user, pass;
    cout << "Enter the site name: ";
    cin >> site;
    cout << "Enter the username: ";
    cin >> user;
    cout << "Enter the password: ";
    cin >> pass;
    
    entries.push_back(Entry(site, user, pass));
    cout << "Entry added successfully!\n";
}

void viewEntries(const vector<Entry>& entries) {
    string key;
    cout << "Enter the decryption key: ";
    cin >> key;

    for (const auto& entry : entries) {
        string decryptedPassword = decryptPassword(entry.password, key);
        cout << "Site: " << entry.sitename << "\n";
        cout << "Username: " << entry.username << "\n";
        cout << "Password: " << decryptedPassword << "\n";
        cout << "--------------------------------\n";
    }
}

void editEntry(vector<Entry>& entries) {
    string site, key, newPassword;
    cout << "Enter the site name of the entry to edit: ";
    cin >> site;

    for (auto& entry : entries) {
        if (entry.sitename == site) {
            cout << "Enter decryption key: ";
            cin >> key;

            string decryptedPassword = decryptPassword(entry.password, key);
            cout << "Current password: " << decryptedPassword << "\n";

            cout << "Enter the new password: ";
            cin >> newPassword;

            entry.password = encryptPassword(newPassword, key);
            cout << "Password updated successfully!\n";
            return;
        }
    }
    cout << "Entry not found.\n";
}

void deleteEntry(vector<Entry>& entries) {
    string site;
    cout << "Enter the site name of the entry to delete: ";
    cin >> site;

    for (auto it = entries.begin(); it != entries.end(); ++it) {
        if (it->sitename == site) {
            entries.erase(it);
            cout << "Entry for " << site << " deleted successfully!\n";
            return;
        }
    }
    cout << "Entry for " << site << " not found.\n";
}

void searchEntry(const vector<Entry>& entries) {
    string site;
    cout << "Enter the site name to search for: ";
    cin >> site;

    for (const auto& entry : entries) {
        if (entry.sitename == site) {
            cout << "Found entry for " << site << ": " << entry.username << " | " << entry.password << endl;
            return;
        }
    }
    cout << "Entry for " << site << " not found.\n";
}