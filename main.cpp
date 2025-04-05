#include <iostream>
#include <string>
#include <vector>
#include "entry.h"
#include "utils.h"
#include "encryption.h"
#include "manager.h"
#include "storage.h"
using namespace std;

int main() {
    vector<Entry> entries;

    entries.push_back(Entry("Google", "user1", "password123"));
    entries.push_back(Entry("Facebook", "user2", "mypassword456"));
    entries.push_back(Entry("Twitter", "user3", "tweetpassword789"));

    for (const Entry& entry : entries) {
        displayEntry(entry);
        cout << "---------------------" << endl;
    }

    int choice;

    do {
        cout << "==========================================\n";
        cout << "\t🔐 Password Manager 1.0 🔐\n";
        cout << "==========================================\n";
        cout << "1. Add New Entry\n";
        cout << "2. View All Entries\n";
        cout << "3. Edit an Entry\n";
        cout << "4. Delete an Entry\n";
        cout << "5. Search for an Entry\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addEntry(entries); break;
            case 2: viewEntries(entries); break;
            case 3: editEntry(entries); break;
            case 4: deleteEntry(entries); break;
            case 5: searchEntry(entries); break;
            case 6: cout << "Exiting Password Manager. Goodbye!\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
        
    } while (choice != 6);

    return 0;
}