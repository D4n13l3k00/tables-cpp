// Copyright 2021 D4n13l3k00.
// SPDX-License-Identifier: MIT

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "table.h"

int main() {
    // EXPAMPLE 1 //
    std::vector<int> sizes {
        3, 6, 9, 4
    };
    std::vector<std::string> strings {
        "thr", "ssiixx", "nniinneee", "wtf?"
    };
    tline(sizes);                 // |-----|--------|-----------|------|
    ttable(sizes, strings, true); // | thr | ssiixx | nniinneee | wtf? |
    tline(sizes);                 // |-----|--------|-----------|------|


    std::cout << std::endl;


    // EXPAMPLE 2 //
    std::vector<int> sizes2 {
        2, 9, 18
    };
    std::vector<std::string> strings2 {
        "ID", "NAME", "DESCRIPTION"
    };
    std::vector<std::string> strings3 {
        "id", "some name", "some desc.."
    };
    tline(sizes2);                   // |----|-----------|--------------------|
    ttable(sizes2, strings2, true);  // | ID | NAME      | DESCRIPTION        |
    tline(sizes2);                   // |----|-----------|--------------------|
    ttable(sizes2, strings3, false); // | id | some name |        some desc.. |
    ttable(sizes2, strings3, true);  // | id | some name | some desc..        |
    tline(sizes2);                   // |----|-----------|--------------------|

    return 0;
    
}