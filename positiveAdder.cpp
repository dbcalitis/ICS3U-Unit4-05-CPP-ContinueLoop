// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program is a number guessing game

#include <iostream>
#include <string>

int main() {
    // This program adds all positive numbers together
    int total = 0;
    int amountOfNumbers;
    int numberInput;
    bool isValid = true;
    std::string amountOfNumbersString;
    std::string numberInputString;

    // input
    std::cout << "How many numbers are you going to add: ";
    std::cin >> amountOfNumbersString;

    try {
        amountOfNumbers = std::stoi(amountOfNumbersString);

        if (amountOfNumbers == std::stof(amountOfNumbersString)) {
            for (int num = 0; num < amountOfNumbers; num++) {
                // second input
                std::cout << "Enter a number to add: ";
                std::cin >> numberInputString;
                
                // process & output
                numberInput = std::stoi(numberInputString);
                if (numberInput == std::stof(numberInputString)) {
                    if (numberInput < 0) {
                        continue;
                    }
                    total += numberInput;
                } else {
                    std::cout << "Invalid Input." << std::endl;
                    isValid = false;
                    break;
                }
            }
            if (isValid) {
                std::cout << "Sum of just the positive numbers is " <<
                total << "." << std::endl;
            }
        } else {
            std::cout << "Invalid Input." << std::endl;
        }
    } catch (...) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
