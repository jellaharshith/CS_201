//Question 1 

#include <iostream>
void findDivisor(int n){
    if (n<= 0){
        std::cout << "ERROR: Input should be a positive integer." << std::endl;
        return;
        
    } 
    std::cout << "Divisots of"  <<  n  << ":";
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            std::cout << i << "";
        }
    }
    std::cout << std::endl;

}

int main(){
    int n;
    std::cout << "Enter a positive integer:";
    std::cin >> n;
    findDivisor(n);
    return 0;
}


//Question 2 

#include <iostream>

int computerGCD(int a, int b){
    if (a<= 0 || b <= 0){
        std::cout << "Error:Both number should be positive integers." << std::endl;
        return -1;
    
    }
    int gcd = 1;
    for (int i = 2; i <= fmin(a,b); i++){
        if(a % i == 0  && b % i == 0){
            gcd = i;
        }
    }
    return gcd;

}

int main(){
    int a, b;
    std::cout << "Enter two positive integers:";
    std::cin >> a >> b;
     int gcd = computerGCD(a,b);
     if(gcd != -1){
        std::cout << "GCD of" << a << "and" << b << "is:" << gcd << std::endl;
     }
     return 0;
}


//Question 3 

#include <iostream>

long long factorial(int n){
    long long result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}

long long binominalCoefficient(int n, int k){
    return factorial(n)/(factorial(n-k)*factorial(k));
}

void generatePascalsTriangle(int n){
    if (n <= 0){
        std::cout << "Error:Input should be a positive integer." << std::endl;
        return;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            std::cout << binominalCoefficient(i,j) << " ";
        }
        std::cout << std:: endl;
    }
}

int main(){
    int n;
    std::cout << "Enter the number of rows;";
    std::cin >> n;
    generatePascalsTriangle(n);
    return 0;
}

//Question 4 

#include <iostream>

int main() {
    
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    
    while (n <= 0) {
        std::cout << "Invalid number of rows. Please enter a positive value: ";
        std::cin >> n;
    }

    
    int num = 1;

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << num << " ";
            num++;
        }
        std::cout << std::endl;
    }

    return 0;
}


//Question 5

#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    
    int m, n;
    std::cout << "Enter the lower bound (m): ";
    std::cin >> m;
    std::cout << "Enter the upper bound (n): ";
    std::cin >> n;

    
    while (m <= 0 || n <= 0) {
        std::cout << "Invalid input. Please enter positive integers: ";
        std::cout << "Enter the lower bound (m): ";
        std::cin >> m;
        std::cout << "Enter the upper bound (n): ";
        std::cin >> n;
    }

    
    std::cout << "Prime numbers between " << m << " and " << n << " are: ";
    for (int i = m; i <= n; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}


//Question 6 
#include <iostream>
#include <cmath>

bool isArmstrong(int num){
    int originalNum = num;
    int sum = 0;
    int numDigits = 0;

    int temp = num;
    while(temp != 0){
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }
    return sum = originalNum;
}

int main(){
    std::cout << "Armstrong numbers between 1 and 1000 are:";
    for (int i = 1; i<= 1000; i++){
        if(isArmstrong(i)){
            std::cout << i << "";
        }
    }
    std::cout << std::endl;
    return 0;
}
