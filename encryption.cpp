#include "encryption.h"
#include <string>
using namespace std;

string encryptPassword(const string& password, const string& key) {
    string encrypted = password;
    for (size_t i = 0; i < password.size(); ++i) {
        encrypted[i] = password[i] ^ key[i % key.length()];
    }
    return encrypted;
}

string decryptPassword(const string& encryptedPassword, const string& key) {
    return encryptPassword(encryptedPassword, key);
}