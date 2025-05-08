#include <iostream>
#include <string>

enum class CharacterClass { Warrior, Mage, Archer, Rogue };

struct Character {
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

// Converts enum class to a string representation
std::string classToString(CharacterClass type) {
    switch (type) {
        case CharacterClass::Warrior: return "Warrior";
        case CharacterClass::Mage:    return "Mage";
        case CharacterClass::Archer:  return "Archer";
        case CharacterClass::Rogue:   return "Rogue";
        default:                      return "Unknown";
    }
}

// Displays a single character's information
void displayCharacter(const Character& c) {
    std::cout << "Name: " << c.name
              << ", Type: " << classToString(c.type)
              << ", Health: " << c.health
              << ", Strength: " << c.strength << std::endl;
}

// Calculates and returns average health
float calculateAverageHealth(const Character characters[], int size) {
    int sumHealth = 0;
    for (int i = 0; i < size; ++i) {
        sumHealth += characters[i].health;
    }
    return static_cast<float>(sumHealth) / size;
}

int main() {
    const int numCharacters = 4;
    Character characters[numCharacters] = {
        {"Aragon",  CharacterClass::Warrior, 100, 90.5f},
        {"Gandalf", CharacterClass::Mage,    120, 75.0f},
        {"Legolas", CharacterClass::Archer,   85, 80.0f},
        {"Frodo",   CharacterClass::Rogue,    80, 60.5f}
    };

    std::cout << "Characters:\n------------\n";
    for (int i = 0; i < numCharacters; ++i) {
        displayCharacter(characters[i]);
    }

    float avgHealth = calculateAverageHealth(characters, numCharacters);
    std::cout << "\nAverage Health: " << avgHealth << std::endl;

    return 0;
}