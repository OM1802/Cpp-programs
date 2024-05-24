/*
Category A: 0 - 50 kg
Category B: 51 - 75 kg
Category C: 76 - 100 kg
Category D: 101 - 125 kg
Category E: 126 kg and above
*/
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    float weight;

public:
    Person(std::string n, float w) : name(n), weight(w) {}

    float getWeight() const {
        return weight;
    }

    void checkWeightCategory() const {
        int category;
        if (weight <= 50) {
            category = 1;
        } else if (weight <= 75) {
            category = 2;
        } else if (weight <= 100) {
            category = 3;
        } else if (weight <= 125) {
            category = 4;
        } else {
            category = 5;
        }

        switch (category) {
            case 1:
                std::cout << "Category A: Suitable for boat riding.\n";
                break;
            case 2:
                std::cout << "Category B: Suitable for boat riding.\n";
                break;
            case 3:
                std::cout << "Category C: Suitable for boat riding.\n";
                break;
            case 4:
                std::cout << "Category D: Suitable for boat riding.\n";
                break;
            case 5:
                std::cout << "Category E: Not suitable for boat riding.\n";
                break;
            default:
                std::cout << "Invalid weight category.\n";
                break;
        }
    }
};

int main() {
    std::string name;
    float weight;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your weight (kg): ";
    std::cin >> weight;

    Person person(name, weight);
    person.checkWeightCategory();

    return 0;
}
