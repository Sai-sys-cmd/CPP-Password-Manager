#ifndef STORAGE_H
#define STORAGE_H

#include <vector>
#include "entry.h"

void saveEntriesToFile(const std::vector<Entry>& entries);
void loadEntriesFromFile(std::vector<Entry>& entries);

#endif