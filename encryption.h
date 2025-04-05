#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>
using namespace std;

string encryptPassword(const string& password, const string& key);
string decryptPassword(const string& encryptedPassword, const string& key);

#endif