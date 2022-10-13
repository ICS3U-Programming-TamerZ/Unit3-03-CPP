// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Sep.26, 2022
// This program checks if the user guessed a number correctly
// using an If.. Then.. Else statement.

#include <iostream>
#include <random>

int main() {
    // Stating Variables
    int secretNumber, userGuess;

    // Assigning a random integer from 0-9 to secretNumber
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    secretNumber = idist(rgen);

    // Requesting the user's guess
    std::cout << "The secret number is within the range of 0-9 \n";
    std::cout << "Enter your guess \n\n >> ";
    std::cin >> userGuess;
    std::cout << "\n"
              << std::endl;

    // If the user guessed correctly:
    if (secretNumber == userGuess) {
        std::cout << "You guessed correctly!";

        // If the user guessed incorrectly:
    } else {
        std::cout << "You guessed incorrectly. ";
        std::cout << secretNumber << " was the correct number. \n";
    }
}
