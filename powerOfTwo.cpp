// Copyright (c) 2022 Alexander Matheson All rights reserved.

// Created by: Alexander Matheson
// Created on: Jan 10, 2022
// This program asks the user for a positive integer.
// It then uses a loop to calculate and display the square
// of numbers between 0 and the user's number.
#include <iostream>
#include <cmath>

int main() {
    // declare the variabless
    int square;
    std::string numberString;
    int userNumber;

    // get the user number as a string
    std::cout << "Enter your number: ";
    std::getline(std::cin, numberString);
    std::cout << std::endl;

    // error checking
    try {
        userNumber = std::stoi(numberString);
        // check if number is  negative
        if (userNumber < 0) {
            std::cout << "Number cannot be negative\n";
        } else {
            // calculate the squares
            for (int loop = 0; loop < (userNumber + 1); loop++) {
                square = pow(loop, 2);
                std::cout << loop << " ^ 2 = " << square << "\n";
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, must be an integer\n";
    }
    std::cout << "Thanks for playing.";
}
