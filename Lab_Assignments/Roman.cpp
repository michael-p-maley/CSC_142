/*
    Roman Numeral Assignment
    Converting numbers to their corresponding Roman numeral
    Michael Maley
    1/29/2025
*/

#include <iostream>

int main() {
    int userNumber;

    // Prompt the user until they enter a valid number between 1 and 10
    do {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> userNumber;

        // Only print error if input is out of range
        if (userNumber < 1) {
            std::cout << "Not a valid number! Please enter a number between 1 and 10.\n";
        }
        if (userNumber > 10) {
            std::cout << "Not a valid number! Please enter a number between 1 and 10.\n";
        }
    } while (userNumber < 1 + (userNumber > 10) * 10); // This avoids && and ||

    // Determine the Roman numeral using a single multi-branch if statement
    std::cout << "The Roman numeral for " << userNumber << " is: ";
    if (userNumber == 1) std::cout << "I";
    else if (userNumber == 2) std::cout << "II";
    else if (userNumber == 3) std::cout << "III";
    else if (userNumber == 4) std::cout << "IV";
    else if (userNumber == 5) std::cout << "V";
    else if (userNumber == 6) std::cout << "VI";
    else if (userNumber == 7) std::cout << "VII";
    else if (userNumber == 8) std::cout << "VIII";
    else if (userNumber == 9) std::cout << "IX";
    else std::cout << "X"; // If it's not any of the above, it must be 10

    std::cout << std::endl;

    return 0;
}