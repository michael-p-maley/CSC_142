#include <iostream>

class Goblin {
public:
    // Constructor
    Goblin() {
        std::cout << "A Goblin has been summoned!" << std::endl;
    }

    // Destructor
    ~Goblin() {
        std::cout << "The Goblin has been vanquished!" << std::endl;
    }
};

int main() {
    {
        Goblin goblin;  
    } 

    return 0;
}
