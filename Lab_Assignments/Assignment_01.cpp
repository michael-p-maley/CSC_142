#include <iostream>
#include <iomanip> // For std::setprecision

int main() {
    // Constant declarations
    const double KM_PER_MILE = 1.60934; // Conversion factor: kilometers per mile
    const double LITERS_PER_GALLON = 3.78541; // Conversion factor: liters per gallon

    // Variable declarations
    std::string desc;
    int miles;
    float gallons;
    float mpg;
    float l_per_100km;

    // Prompt for user inputs
    std::cout << "Please enter a description of your car: ";
    std::getline(std::cin, desc);
    std::cout << "How many miles did you drive? ";
    std::cin >> miles;
    std::cout << "How many gallons of gas did you use? ";
    std::cin >> gallons;

    // Calculate the results
    mpg = miles / gallons;
    l_per_100km = (gallons * LITERS_PER_GALLON) / (miles * KM_PER_MILE) * 100;

    // Print the user inputs and final results
    std::cout << std::fixed << std::setprecision(2); // Format output to 2 decimal places
    std::cout << "\nFuel efficiency of your " + desc + ":" << std::endl;
    std::cout << "You drove " << miles << " miles and used " << gallons << " gallons." << std::endl;
    std::cout << "Your fuel efficiency is " << mpg << " miles per gallon (MPG)." << std::endl;
    std::cout << "This is equivalent to " << l_per_100km << " liters per 100 kilometers (L/100km)." << std::endl;

    return 0;
}
