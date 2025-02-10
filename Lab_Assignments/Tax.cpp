/*
    Tax Assignment
    Gather information about a purchase from the user, calculate the tax and total purchase amount
    Michael Maley
    2/5/2025
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const double SALES_TAX_RATE = 0.06;
    bool keepGoing = true;
    string purchaseDescription;
    string costInput;
    double cost;

    while (keepGoing) {
        // Get purchase description
        cout << "Enter a description of the purchase: ";
        getline(cin, purchaseDescription);

        // Get purchase cost and validate input
        do {
            cout << "Enter the cost of the purchase (in dollars and cents): ";
            getline(cin, costInput);
            try {
                cost = stod(costInput);
                if (cost < 0) {
                    cout << "Please enter a non-negative value.\n";
                }
            } catch (...) {
                cout << "Invalid input. Please enter a valid number.\n";
                cost = -1;
            }
        } while (cost < 0);

        // Calculate sales tax and total cost
        double salesTax = cost * SALES_TAX_RATE;
        double totalCost = cost + salesTax;

        // Display results
        cout << fixed << setprecision(2);
        cout << "\nPurchase Summary:\n";
        cout << "------------------------------\n";
        cout << "Description: " << purchaseDescription << "\n";
        cout << "Cost: $" << cost << "\n";
        cout << "Sales Tax (6%): $" << salesTax << "\n";
        cout << "Total Cost: $" << totalCost << "\n";
        cout << "------------------------------\n";

        // Ask if user wants to enter another purchase
        string response;
        cout << "Do you want to enter another purchase? (Yes/No): ";
        getline(cin, response);
        if (response != "Yes" && response != "yes") {
            keepGoing = false;
        }
    }
    
    cout << "Thank you for using the Sales Tax Calculator!\n";
    return 0;
}