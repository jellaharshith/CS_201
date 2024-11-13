#include <iostream>

int main(){
    int arraySize;
    std::cout << "Enter the size of the array:";
    std::cin >> arraySize;

    int*array = new int[arraySize];
    
    std::cout << "Enter values for each element in the array:" << std::endl;
    for (int i = 0; i < arraySize; i++){
        std::cout << "Element" << i+1 << ":";
        std::cin >> array[i];
    }

    int sum = 0;
    int max = array[0];
    for (int i = 0; i <arraySize; i++){
        sum += array[i];
        if (array[i] > max){
            max = array[i];
        }
    }

    double average = static_cast<double>(sum)/arraySize;

    std::cout << "Average of the array:" << average << std::endl;
    std::cout << "Largest number in the array:" << max << std::endl;

    delete[] array;
    return 0;
}