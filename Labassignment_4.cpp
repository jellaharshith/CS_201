//Question 1 

#include<fstream>
#include<iostream>

int main(){
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if(!inputFile){
        std::cerr << "Error; Unable to open input file." << std::endl;
        return 1;
    }
    if(!outputFile){
        std::cerr << "Erroe:Unable to open output file." << std::endl;
        return 1;

    }

    char character;
    while (inputFile.get(character)){
        outputFile.put(character);
    }
    inputFile.close();
    outputFile.close();

    std::cout << "File copied succesfully." <<std::endl;
    return 0;
}


//Question 2

#include <fstream>
#include <string>
#include <iostream>

int main(){
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("Filtered_output.txt");

    if (!inputFile){
        std::cerr <<"Error opening input file." << std::endl;
        return 1;
    }

    if(!outputFile){
        std::cerr << "Error opening output file. " << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile,line)){
        if(!line.empty()){
            outputFile << line << std::endl;
        }
    }

    inputFile.close();
    outputFile.close();
    return 0;
}


//Question 3 

#include <fstream>
#include <iostream>

int main(){
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("line_count.txt");

    if (!inputFile){
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    if (!outputFile){
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    int linecount = 0;

    std::string line;
    while (std::getline(inputFile, line)){
        linecount++;
    
    }
    outputFile << "Total number of line:" << linecount << std::endl;

    inputFile.close();
    outputFile.close();

    return 0;
}


//Question 4 

#include <fstream>
#include <iostream>

int main(){
    std::ifstream inputfile("input.txt");
    std::ofstream outputfile("numbered_output.txt");

    if (!inputfile){
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    if(!outputfile){
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }
    int lineNumber = 1; 

    std::string line;
    while (std::getline(inputfile, line)){
        outputfile << lineNumber << ":" << line << std::endl;
        lineNumber++;
    }
    inputfile.close();
    outputfile.close();

    return 0;
}


//Question 5 

#include <fstream>
#include <iostream>

int main(){
    std::ofstream outputfile("existing_file.txt", std::ios::app);

    if (!outputfile){
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string newline = "File I/O Operations";
    outputfile << newline << std::endl;

    outputfile.close();
}


//Question 6 

#include <fstream>
#include <iostream>
#include <sstream>

int main(){
    std::ifstream inputfile("input.txt");
    std::ofstream outputfile("word_count.txt");

    if (!inputfile){
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    int wordcount = 0;
    std::string line;
    while (std::getline(inputfile, line)){
        std::istringstream iss(line);
        std:: string word;
        while (iss >> word){
            wordcount++;
        }
    }

    outputfile << "Total number of words:" << wordcount << std::endl;

    inputfile.close();
    outputfile.close();

    return 0;
}
