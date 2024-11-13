//Question 1 

#include <iostream>

int main() {
    int seconds; 
    std::cout << "Entre the number of seconds:";
    std::cin >> seconds;
//FOR CONVERSTING SECONDS INTO DAYS 
    if (seconds >= 86,400){
        int days = seconds/86400;
        int reaminingseconds = seconds % 86400;
        int hours = reaminingseconds /3600;
        int reaminingseconds2 = reaminingseconds % 3600;
        int  mintues = reaminingseconds / 60;
        int reaminingssecond3 = reaminingseconds2 % 60;

        std::cout << seconds << "seconds is equivalent to " << days << "days,"  << std::endl; 

    }
// FOR CONVERSTING SECONDS INTO HOURS
    else if (seconds >= 3600){
        int hours = seconds / 3600;
        int reaminingseconds = seconds % 3600;
        int mintues = reaminingseconds / 60;
        int reaminingseconds2  = reaminingseconds % 60;
        std::cout << seconds << "seconds is equivalent to" << hours << "hours,"  << reaminingseconds2 << "seconds" << std::endl; 

    }
 // FOR CONVERSTING SECONDS INTO MINTUES 
    else if (seconds >= 60){
        int minutes = seconds / 60 ; 
        int reamininfseconds = seconds % 60 ; 

        std::cout << seconds << "seconfds is equivalent to" << minutes << "mintues, and " << reamininfseconds << "seconds" << std::endl;
    }
      
    return 0;


}

//Question 2 

#include <iostream>

int main(){
    int month, day, year;
    std::cout << "Enter a month(in number format):";
    std::cin >> month;
    std::cout <<"Enter a day:";
    std::cin>>day;
    std::cout << "Enter a only last digits of the year:";
    std::cin>>year;

    int product = month * day;
    

    if (product = year){
        std::cout << "The data is magic" << std::endl;

    }
    else {
        std::cout << "The dat is not magic" << std::endl;
    }
    return 0;

}


//Question 3 

#include <iostream>

int main() {
    int numBooks;

    
    std::cout << "Enter the number of books purchased this month: ";
    std::cin >> numBooks;

   
    int points;
    if (numBooks == 0) {
        points = 0;
    } else if (numBooks == 1) {
        points = 5;
    } else if (numBooks == 2) {
        points = 15;
    } else if (numBooks == 3) {
        points = 30;
    } else {
        points = 60;
    }

    std::cout << "You have earned " << points << " points this month." << std::endl;

    return 0;
}


//Question 4 

#include <iostream>
int main(){
    const double carbon_bioxide_speed = 258.0;
    const double air_speed = 331.5;
    const double helium_speed = 972.0;
    const double hydrogen_speed = 1270.0;

    std::cout << "Select a medium: \n";
    std::cout << "1. Carbon Dioxide\n";
    std::cout << "2.Air\n";
    std::cout << "3.Helium\n";
    std::cout << "4.Hydrogen\n";

    int choices;
    std::cout << "Enter your choice (1-4)";
    std::cin >> choices;

    while (choices <1 || choices >4){
        std::cout << "Invalid choice. Please enter a number between 1 and 4:";
        std::cin >> choices;
    }


    double speed;
    switch (choices){
        case 1:
            speed = carbon_bioxide_speed;
            break;
        case 2:
            speed = air_speed;
            break;
        case 3:
            speed = helium_speed;
            break;
        case 4:
            speed = hydrogen_speed;
            break;
    }

    
    double time;
    std::cout << "Enter the time it took for the sound to travel (in seconds): ";
    std::cin >> time;

  
    while (time < 0 || time > 30) {
        std::cout << "Invalid time. Please enter a time between 0 and 30 seconds: ";
        std::cin >> time;
    }

    
    double distance = speed * time;

    std::cout << "The source of the sound was " << distance << " meters away from the detection location." << std::endl;

    return 0;
    

}


//Question 5

#include <iostream>
int main(){
    std::cout << "Geometry Calculator\n";
    std::cout << "1. Calcuate the Area of a Circle\n";
    std::cout << "2. Calcuate the Area of a Rectangle\n";
    std::cout << "3. Calcuate the Area of a Triangle\n";
    std::cout << "4.Quit\n";
    int choices;
    std::cout << "Enter your choices (1-4)";
    std::cin >> choices;

    while (choices < 1 || choices > 4){
        std::cout << "Invalid choice, Please enter a number between 1 and 4:";
        std::cin >> choices;
    }

    if (choices = 1){
        double radius;
        std::cout << "Enter the radius of the circles;";
        std::cin >> radius;

        while (radius < 0){
            std::cout << "Invalid radius. Please enter a non-negative value:";
            std::cin >> radius;
            
        }

        const double pi = 3.14156;
        double area = pi * radius * radius;
        std::cout << "The area of the circle is " << area << " square units." << std::endl;
    } else if (choices == 2) {
        
        double length, width;
        std::cout << "Enter the length and width of the rectangle: ";
        std::cin >> length >> width;

        
        while (length < 0 || width < 0) {
            std::cout << "Invalid length or width. Please enter non-negative values: ";
            std::cin >> length >> width;
        }

        double area = length * width;
        std::cout << "The area of the rectangle is " << area << " square units." << std::endl;
    } else if (choices == 3) {
      
        double base, height;
        std::cout << "Enter the base and height of the triangle: ";
        std::cin >> base >> height;

        
        while (base < 0 || height < 0) {
            std::cout << "Invalid base or height. Please enter non-negative values: ";
            std::cin >> base >> height;
        }

        double area = base * height * 0.5;
        std::cout << "The area of the triangle is " << area << " square units." << std::endl;
    } else {
        std::cout << "Goodbye!" << std::endl;
    }

    return 0;
  
    
}


//Question 6 

#include <iostream>

int main() {
    
    double calories, fatGrams;
    std::cout << "Enter the number of calories: ";
    std::cin >> calories;

    
    while (calories < 0) {
        std::cout << "Invalid calories. Please enter a non-negative value: ";
        std::cin >> calories;
    }

    std::cout << "Enter the number of fat grams: ";
    std::cin >> fatGrams;

   
    while (fatGrams < 0) {
        std::cout << "Invalid fat grams. Please enter a non-negative value: ";
        std::cin >> fatGrams;
    }

    
    double caloriesFromFat = fatGrams * 9;

    
    if (caloriesFromFat > calories) {
        std::cout << "Error: Either the calories or fat grams were incorrectly entered." << std::endl;
        return 1;
    }

    
    double percentage = (caloriesFromFat / calories) * 100;

    
    std::cout << "The percentage of calories that come from fat is " << percentage << "%" << std::endl;

    
    if (percentage < 30) {
        std::cout << "This food is low in fat." << std::endl;
    }

    return 0;
}


//Question 7 

#include <iostream>

int main() {
    
    double startTime, minutes;
    std::cout << "Enter the starting time of the call (HH.MM): ";
    std::cin >> startTime;

    int hours = static_cast<int>(startTime);
    double fractionalPart = startTime - hours;
    int minutesPart = static_cast<int>(fractionalPart * 100);
    while (hours > 23 || minutesPart > 59) {
        std::cout << "Invalid time. Please enter a time between 00:00 and 23:59: ";
        std::cin >> startTime;
        hours = static_cast<int>(startTime);
        fractionalPart = startTime - hours;
        minutesPart = static_cast<int>(fractionalPart * 100);
    }

    std::cout << "Enter the number of minutes of the call: ";
    std::cin >> minutes;

    
    while (minutes < 0) {
        std::cout << "Invalid number of minutes. Please enter a non-negative value: ";
        std::cin >> minutes;
    }
    double rate;
    if (hours < 7) {
        rate = 0.05;
    } else if (hours < 19) {
        rate = 0.45;
    } else {
        rate = 0.20;
    }

    double totalCharge = minutes * rate;

    
    std::cout << "The total charge for the call is $" << totalCharge << std::endl;

    return 0;
}
