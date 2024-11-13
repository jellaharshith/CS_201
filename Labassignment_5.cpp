//Question 1 
/*
#include <iostream>

bool isPerfect(int n){

    if (n <= 0){
        return false;
    }
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n = 6;
    if (isPerfect(n)){
        std::cout << "It is a perfect number" << std::endl;
    } else {
        std::cout << "It is not perfect number" << std::endl;
    }

    return 0;
}

*/
//Question 2
/*
#include <iostream>

int reverseNumber(int n){
    if(n <= 0){
        return -1;
    }

    int reversed = 0;
    while (n >0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return reversed;

}

int main(){
    int n = 1234;
    int reversed = reverseNumber(n);
    std::cout << "Reversed Number is" << reversed << std::endl;

    return 0;
}
*/

//Question 3 
/*
#include <iostream>
#include <string>
#include <stack>

string decimalToBinary(int n) {

  if (n <= 0) {
    return "Error: Input must be a positive integer";
  }

  std::stack<int> remainders;
  while (n > 0) {
    int remainder = n % 2;
    remainders.push(remainder);
    n /= 2;
  }

  std::string binary;
  while (!remainders.empty()) {
    binary += (remainders.top() == 0) ? '0' : '1';
    remainders.pop();
  }

  return binary;
}

int main() {
  int n = 10; // sample input
  std::string binary = decimalToBinary(n);
  std::cout << "Binary number of " << n << " is " << binary << std::endl;

  return 0;
}
*/

//Question 4
/*
#include <cctype>
#include <string>

string checkCharacter(char ch) {
  if (std::isalpha(ch)) {
    return "Alphabet";
  } else if (std::isdigit(ch)) {
    return "Digit";
  } else {
    return "Special Character";
  }
}

*/
//Question 5
/*
#include <cctype>
#include <string>

void countVowelsConsonants(std::string str, int &vowels, int &consonants) {
  // Input validation
  for (char c : str) {
    if (!std::isalpha(c)) {
      throw std::invalid_argument("Input string must consist of alphabetic characters");
    }
  }

  vowels = 0;
  consonants = 0;

  for (char c : str) {
    c = std::tolower(c); // convert to lowercase for simplicity
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      vowels++;
    } else {
      consonants++;
    }
  }
}
*/

//Question 6

#include <iostream>

int sumOfDigits(int n) {
  // Input validation
  if (n <= 0) {
    return -1; // or throw an exception, depending on the requirement
  }

  int sum = 0;
  while (n > 0) {
    int digit = n % 10;
    sum += digit;
    n /= 10;
  }

  return sum;
}

int main() {
  int n = 1234; // sample input
  int sum = sumOfDigits(n);
  std::cout << "Sum of digits: " << sum << std::endl;

  return 0;
}

