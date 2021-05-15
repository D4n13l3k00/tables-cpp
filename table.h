// Copyright 2021 D4n13l3k00.
// SPDX-License-Identifier: MIT

#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

void ttable(
    std::vector<int> width,
    std::vector<std::string> columns,
    bool toleft);

void tline(
    std::vector<int> width);

#endif