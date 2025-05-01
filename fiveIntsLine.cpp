// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: April 23, 2025
// Number guess loop program in c++

#include <iostream>
#include <vector>

int main() {
    std::vector<int> to_print;

    for (int i = 1000; i <= 2000; i += 5) {
        to_print.clear();

        for (int n = 0; n < 5; n++) {
            if (i + n <= 2000) {
                to_print.push_back(i + n);
            }
        }

        // Print the years in one row
        for (size_t j = 0; j < to_print.size(); j++) {
            std::cout << to_print[j] << " ";
            
        }
        std::cout << "\n";
    }

    return 0;
}
