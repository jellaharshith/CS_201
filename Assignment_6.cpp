#include <iostream>
#include <fstream>
#include <string>
#include <vector>


void displayFileContents(const std::string& fileName) {
    std::ifstream file(fileName);

    if (!file.is_open()) {
        std::cerr << "File not found. Please enter a valid file name." << std::endl;
        return;
    }

    std::vector<std::string> lines;
    std::string line;


    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();

   
    if (lines.size() <= 5) {
        std::cout << "File contents:" << std::endl;
        for (const auto& line : lines) {
            std::cout << line << std::endl;
        }
    } else {
        std::cout << "First 5 lines of the file:" << std::endl;
        for (size_t i = 0; i < 5; ++i) {
            std::cout << lines[i] << std::endl;
        }
    }
}

int main() {
    std::string fileName;

    
    std::cout << "Enter the name of the file: ";
    std::cin >> fileName;

    
    displayFileContents(fileName);

    return 0;
}