/*
    SpeedTrap Assignment
    Utilizng if statements
    Michael Maley
    1/29/2025
*/

#include <iostream>

int main() {
    int speedLimit;
    double vehicleSpeed;

    // Prompt the user for the speed limit
    std::cout << "Enter the speed limit (mph): ";
    std::cin >> speedLimit;

    // Prompt the user for the vehicle's speed
    std::cout << "Enter the vehicle's speed (mph): ";
    std::cin >> vehicleSpeed;

    // Using an if statement to determine whether or not the user is over the inputted speed limit
    if (vehicleSpeed <= speedLimit) // Less than or equal to
        std::cout << "Your speed is legal." << std::endl;
    else
        std::cout << "Your speed is over the legal limit." << std::endl;

    return 0;
}