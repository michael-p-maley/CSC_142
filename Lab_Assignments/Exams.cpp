/*
    Exams Assignment
    Calculating averages
    Michael Maley
    1/29/2025
*/

#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    int score1, score2, score3;
    double average;

    // Asking the user for their name
    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    // The user must enter three exam scores separately
    std::cout << "Enter your first exam score: ";
    std::cin >> score1;

    std::cout << "Enter your second exam score: ";
    std::cin >> score2;

    std::cout << "Enter your third exam score: ";
    std::cin >> score3;

    // Calculate the average
    average = (score1 + score2 + score3) / 3.0;

    // Display the input data and calculated average
    std::cout << "\nHello, " << name << "." << std::endl;
    std::cout << "Your three exam scores are " << score1 << ", " << score2 << ", " << score3 << "." << std::endl;
    std::cout << "Your avreage exam score is " << std::fixed << std::setprecision(2) << average << "." << std::endl;

    return 0;
}