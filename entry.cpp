#include <iostream>
#include "entry.h" 
using namespace std;

void displayEntry(const Entry& entry) {
    cout << "Site: " << entry.sitename << endl;
    cout << "Username: " << entry.username << endl;
    cout << "Password: " << entry.password << endl;
}