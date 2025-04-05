#ifndef MANAGER_H
#define MANAGER_H

#include <vector>
#include "entry.h"

void addEntry(std::vector<Entry>& entries);
void viewEntries(const std::vector<Entry>& entries);
void editEntry(std::vector<Entry>& entries);
void deleteEntry(std::vector<Entry>& entries);
void searchEntry(const std::vector<Entry>& entries);

#endif