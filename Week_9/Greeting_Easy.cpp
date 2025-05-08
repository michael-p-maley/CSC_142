#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << "Please enter your age: ";
    std::cin >> age;

    int age_in_days = age * 365;

    std::cout << "\nHello, " << name 
              << ". You are approximately " 
              << age_in_days
 << " days old." << std::endl;

    return 0;
}