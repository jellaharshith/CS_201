#include <iostream>

long long factorial(int n){
    long long result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;

}

int main(){
    int num;
    do{
        std::cout << "Enter a positive integer:";
        std::cin >> num;
        if(num <= 0){
            std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        }
    }while (num <= 0);

    long long fact = factorial(num);
    std::cout << "Factorial of" << num << "is:" << fact << std::endl;

    return 0;

}