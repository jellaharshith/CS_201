#include <iostream>
int main(){
    int month;
    std::cout << "Enter a month as a number between 1 and 12"  ;
    std::cin >>month;
    if (month < 1 || month > 12){
        std::cout <<"The month is not within in the vaild range month" << std::endl;
    }else{
        if (month <= 3){
            std::cout << "The month is in the first quarter" << std::endl;

        }else if (month <= 6){
            std::cout << "The month is in the second quarter" << std::endl;

        }else if (month <= 9){
            std::cout << "The month is in the third quarter" << std::endl;

        }else{
            std::cout << "The month is in the fourth quarter" << std::endl;
        }
    
    }
    return 0;
}