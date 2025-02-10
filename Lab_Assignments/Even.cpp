/*
    Even Numbers Assignment
    Making use of randomly generated integers
    Michael Maley
    2/10/2025
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    srand(time(0));
    int evenCount = 0;
    int oddCount = 0;
    const int TOTAL_NUMBERS = 1000;
    
    for (int i = 0; i < TOTAL_NUMBERS; i++) {
        int num = rand() % 101; // Generates a random number between 0 and 100
        if (isEven(num)) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display results in a "creative" format
    cout << "Total numbers generated: " << TOTAL_NUMBERS << "\n";
    cout << "Even numbers count: " << evenCount << "\n";
    cout << "Odd numbers count: " << oddCount << "\n";
    
    return 0;
}