// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program generates a random number so
// the user can guess what the number is

#include <iostream>
#include <string>
#include <random>

int main() {
    std::string integerAsString;
    int input_number;
    int RANDOM_NUMBER;


    std::cout << " enter a number from 1-10: ";

    // input
    std::cout << "Enter a number: ";
    std::cin >> integerAsString;

    // process & output
    try {
        input_number = std::stoi(integerAsString);
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 10);
        RANDOM_NUMBER = idist(rgen);

        if ( input_number == RANDOM_NUMBER ) {
            // Output
            std::cout << " correct ";
      } else {
            // Output
            std::cout << " Icorrecct " << std::endl;
            std::cout << " the correct guess was "
            <<  RANDOM_NUMBER << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }
}
