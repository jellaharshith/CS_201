#include <iostream>
int main(){
    double speed;
    double timetraveled;

    while (true){
        std::cout << "What is the speed of the vehicle of mph?:";
        std::cin >> speed;
        if(speed < 0){
            std::cout << "Speed cannot be negative. Please try again.";

        }else{
            break;
        }
    }
    while (true){
        std::cout << "How many hours has it traveled?";
        std::cin >> timetraveled;
        if(timetraveled <1){
            std::cout << "Time traveled must be at least 1 houe. Please try again." << std::endl;

        }else{
            break;
        }
    }

    std::cout << "Hour \tDistance Traveled" << std::endl;
    std::cout << "-------------------------" << std::endl;
    for (int hour = 1; hour <= timetraveled; hour++){
        double distance = speed * hour;
        std::cout << hour << "\t" << distance << std::endl;
    }

    return 0;
}