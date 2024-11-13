#include <iostream>
#include <string>
#include <vector>

enum PetType {
    DOG,
    CAT,
    BIRD
};

struct Pet {
    int PetID;
    std::string Name;
    int Age;
    PetType Type;
};

void addPet(std::vector<Pet>& pets) {
    Pet newPet;
    std::cout << "Enter PetID, Name, Age, and Type (DOG, CAT, BIRD): ";
    std::string typeStr;

    std::cin >> newPet.PetID >> newPet.Name >> newPet.Age >> typeStr;

    if (typeStr == "DOG") {
        newPet.Type = DOG;
    } else if (typeStr == "CAT") {
        newPet.Type = CAT;
    } else if (typeStr == "BIRD") {
        newPet.Type = BIRD;
    } else {
        std::cerr << "Invalid pet type!" << std::endl;
        return;
    }

    pets.push_back(newPet);
}

void displayPetsByType(const std::vector<Pet>& pets, PetType type) {
    std::cout << "Pets of type " << (type == DOG ? "DOG" : type == CAT ? "CAT" : "BIRD") << ":\n";
    for (size_t i = 0; i < pets.size(); ++i) {
        if (pets[i].Type == type) {
            std::cout << "- ID: " << pets[i].PetID << ", Name: " << pets[i].Name << ", Age: " << pets[i].Age << std::endl;
        }
    }
}

int main() {
    int numberOfPets;
    std::vector<Pet> pets;

    std::cout << "Enter the number of pets (1-10): ";
    std::cin >> numberOfPets;

    if (numberOfPets < 1 || numberOfPets > 10) {
        std::cerr << "Number of pets must be between 1 and 10." << std::endl;
        return 1;
    }

    for (int i = 0; i < numberOfPets; ++i) {
        addPet(pets);
    }

    std::string filterType;
    std::cout << "Enter pet type to filter and display (DOG, CAT, BIRD): ";
    std::cin >> filterType;

    PetType selectedType;
    if (filterType == "DOG") {
        selectedType = DOG;
    } else if (filterType == "CAT") {
        selectedType = CAT;
    } else if (filterType == "BIRD") {
        selectedType = BIRD;
    } else {
        std::cerr << "Invalid pet type!" << std::endl;
        return 1;
    }

    displayPetsByType(pets, selectedType);

    return 0;
}