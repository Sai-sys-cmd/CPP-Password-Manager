#ifndef ENTRY_H
#define ENTRY_H

#include <string>

struct Entry {
    std::string sitename;
    std::string username;
    std::string password;
    Entry(std::string site, std::string user, std::string pass)
        : sitename(site), username(user), password(pass) {}
};

void displayEntry(const Entry& entry);

#endif