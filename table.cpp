#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

void ttable(std::vector<int> width, std::vector<std::string> columns, bool toleft) {
    if(width.size() != columns.size()) {
        std::cout << "[Tables::ttable] Sizes `width` and `columns` not matched!" << std::endl;
        return;
    }
    std::cout << "| ";
    for(int i = 0; i < width.size(); i++) {
        std::cout << std::setw(width[i]);
        if (toleft) { std::cout << std::left; }
        else {std::cout << std::right; }
        std::cout << columns[i] << std::setw(3) << " | ";
    }
    std::cout << std::endl;
}
void tline(std::vector<int> width) {
    std::cout << "|";
    for(int x = 0; x < width.size(); x++) {
        std::cout
            << std::string(width[x]+2, '-')
            << "|";
    }
    std::cout << std::endl;
}