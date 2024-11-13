//Question 1
/* 
#include <iostream>

int main(){

    int num1 = 50;
    int num2 = 100;
    int total;

    total = num1 + num2;

    std::cout << "The sum of" <<  num1  <<  "and "  <<  "The sum of "  <<  num2  <<  " is"  <<   total  << std::endl ;




    return 0;
}
*/

//Question 2 
/*
#include <iostream>

int main(){
    int num1 = 28;
    int num2 = 32;
    int num3 = 73;
    int num4 = 54;
    int num5 = 105;
    
    int sum_of_total_numbers;
    int sum;

    sum_of_total_numbers = num1 + num2 + num3 + num4 + num5;

    sum = sum_of_total_numbers / 5 ;

    std:: cout << "The sum of 5 variables is :"  <<   sum_of_total_numbers   << std::endl;
    std::cout << "The average of the numers is : "   <<   sum   << std::endl;


    return 0;
}
*/

//Question 3 
/*
#include <iostream>
using namespace std;
int main() {
    float mealcharge = 88.67;
    float tax = mealcharge * 0.0675;
    float tip = (mealcharge + tax) * 0.2;
    double totalbill = mealcharge + tax + tip;
    std::cout << "The meal cost: $ " << mealcharge << endl;
    std::cout << "The Tax amount: $" << tax << endl;
    std::cout << "The tip amount: $" << tip << endl;
    std::cout << "The Totalbill: $" << totalbill << endl;
    return 0;
    }
*/

//Question 4 
/*
#include <iostream>

int main(){
    int tankcapcaity = 15;
    int town_miles = 20;
    int highway_miles = 25;
    int town_distance;
    int highway_distance;

    town_distance = tankcapcaity * town_miles;
    highway_distance = tankcapcaity * highway_miles;

    std::cout << "In car can travel the following distances" << std::endl;
    std::cout << "Distance in Town:"  << town_distance    <<  "miles" << std::endl;
    std::cout << "Distance in Highway:"  << highway_distance   << "miles"  << std::endl;
    
    return 0;

}
*/

//Question 5 
/*
#include <iostream>

int main() {
    std::cout << "The size of char is " << sizeof(char) << " bytes." << std::endl;
    std::cout << "The size of int is " << sizeof(int) << " bytes." << std::endl;
    std::cout << "The size of float is " << sizeof(float) << " bytes." << std::endl;
    std::cout << "The size of double is " << sizeof(double) << " bytes." << std::endl;

    return 0;
}
*/


//Question 6 
/*
#include <iostream>

int main() {
    
    double cost = 18.43;  
    double profitPercentage = 0.38;  


    double profitAmount = cost * profitPercentage;

   
    double sellingPrice = cost + profitAmount;

   
    std::cout << "The selling price of the circuit board is $" << sellingPrice << std::endl;

    return 0;
}
*/

//Question 7 
/*
#include <iostream>
int main() {
    double item1 = 17.24;  
    double item2 = 30.58;  
    double item3 = 13.67;  
    double item4 = 9.43;   
    double item5 = 4.86;   
    double salesTaxRate = 0.08;  
    double subtotal = item1 + item2 + item3 + item4 + item5;
    double salesTax = subtotal * salesTaxRate;
    double total = subtotal + salesTax;
    std::cout << "Item 1: $" << item1 << std::endl;
    std::cout << "Item 2: $" << item2 << std::endl;
    std::cout << "Item 3: $" << item3 << std::endl;
    std::cout << "Item 4: $" << item4 << std::endl;
    std::cout << "Item 5: $" << item5 << std::endl;
    std::cout << "Subtotal: $" << subtotal << std::endl;
    std::cout << "Sales Tax (8%): $" << salesTax << std::endl;
    std::cout << "Total: $" << total << std::endl;

    return 0;
}
*/


//Question 8 
/*
#include <iostream>

int main() {
    
    double fahrenheit;  
    double celsius;  

    
    std::cout << "Enter a temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    
    std::cout << "The temperature in Celsius is: " << celsius << std::endl;

    return 0;
}
*/

//Question 9 
/*
#include <iostream>

int main() {
    
    int numShares = 700;  
    double sharePrice = 40.00; 
    double commissionRate = 0.03;  

    
    double stockAmount = numShares * sharePrice;

    
    double commission = stockAmount * commissionRate;

    
    double totalAmount = stockAmount + commission;

    
    std::cout << "Amount paid for the stock alone: $" << stockAmount << std::endl;
    std::cout << "Amount of the commission: $" << commission << std::endl;
    std::cout << "Total amount paid: $" << totalAmount << std::endl;

    return 0;
}
*/

//Question 10 

#include <iostream>

int main() {
    
    int totalCustomers = 17000;  
    double energyDrinkPercentage = 0.16;  
    double citrusFlavorPercentage = 0.55;  

   
    int energyDrinkCustomers = totalCustomers * energyDrinkPercentage;

    
    int citrusFlavorCustomers = energyDrinkCustomers * citrusFlavorPercentage;

    
    std::cout << "Approximate number of customers who purchase one or more energy drinks per week: " << energyDrinkCustomers << std::endl;
    std::cout << "Approximate number of customers who prefer citrus-flavored energy drinks: " << citrusFlavorCustomers << std::endl;

    return 0;
}