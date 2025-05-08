#include <iostream>
#include <string>

// Class representing a magical item
class MagicItem {
public:
    MagicItem(const std::string& name, const std::string& powerType, int charges)
        : name_{name}, powerType_{powerType}, charges_{charges} {
        announceCreation();
    }

    void use() {
        if (charges_ > 0) {
            charges_--;
            std::cout << name_ << " (" << powerType_ << " power) used! Charges left: " << charges_ << "\n";
        } else {
            std::cout << name_ << " (" << powerType_ << " power) has no charges left!\n";
        }
    }

private:
    std::string name_;
    std::string powerType_;
    int charges_;

    void announceCreation() const {
        std::cout << name_ << " (" << powerType_ << " power) created with " << charges_ << " charges!\n";
    }
};

// A function to demonstrate usage of a MagicItem
void demonstrateUsage(MagicItem& item, int times) {
    for (int i = 0; i < times; ++i) {
        item.use();
    }
}

int main() {
    MagicItem wand{"Wand of Pythonic Wisdom", "Python", 3};
    demonstrateUsage(wand, 1);

    MagicItem sword{"Sword of Javanium", "Javanium", 2};
    demonstrateUsage(sword, 3);

    MagicItem amulet{"Amulet of Pythonic Strength", "Python", 1};
    demonstrateUsage(amulet, 1);

    return 0;
}