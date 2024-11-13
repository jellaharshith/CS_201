#include <iostream> 
int main (){
    float speed, time, distance;
    std::cout << "Please enter the speed (mph): ";
    std::cin >> speed;
    std::cout << "Please enter the time (hr)";
    std::cin >> time;

    distance = speed * time;

    std::cout << "The Distance you is " << distance << "miles" << std::endl;

    return 0;
}