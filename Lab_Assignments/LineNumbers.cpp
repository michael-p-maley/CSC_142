/*
    Line Numbers Assignment
    Detecting Line numbers
    Michael Maley
    2/5/2025
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string inputFileName, outputFileName;
    ifstream inputFile;
    ofstream outputFile;

    // Prompt user for input file name
    cout << "Enter the name of the input file: ";
    getline(cin, inputFileName);
    inputFile.open(inputFileName);
    
    if (!inputFile) {
        cerr << "Error opening input file." << endl;
        return 1;
    }

    // Prompt user for output file name
    cout << "Enter the name of the output file: ";
    getline(cin, outputFileName);
    outputFile.open(outputFileName);
    
    if (!outputFile) {
        cerr << "Error opening output file." << endl;
        inputFile.close();
        return 1;
    }

    string line;
    int lineNumber = 1;

    while (getline(inputFile, line)) {
        outputFile << setw(5) << lineNumber << ". " << line << endl;
        lineNumber++;
    }

    // Close files
    inputFile.close();
    outputFile.close();
    
    cout << "File processing complete. Check " << outputFileName << " for results." << endl;
    
    return 0;
}