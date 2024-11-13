#include <iostream>
#include <string>

struct Employee {
    std::string name;
    int idNumber;
    std::string department;
    std::string jobTitle;
};

int main() {
    // Creating Employee objects
    Employee employee1;
    employee1.name = "Susan Meyers";
    employee1.idNumber = 47899;
    employee1.department = "Accounting";
    employee1.jobTitle = "Vice President";

    Employee employee2;
    employee2.name = "Mark Jones";
    employee2.idNumber = 39119;
    employee2.department = "IT";
    employee2.jobTitle = "Programmer";

    Employee employee3;
    employee3.name = "Joy Rogers";
    employee3.idNumber = 81774;
    employee3.department = "Manufacturing";
    employee3.jobTitle = "Engineer";

    // Displaying Employee information
    std::cout << "Employee 1: " << employee1.name << ", ID: " << employee1.idNumber 
              << ", Department: " << employee1.department << ", Job Title: " << employee1.jobTitle << std::endl;

    std::cout << "Employee 2: " << employee2.name << ", ID: " << employee2.idNumber 
              << ", Department: " << employee2.department << ", Job Title: " << employee2.jobTitle << std::endl;

    std::cout << "Employee 3: " << employee3.name << ", ID: " << employee3.idNumber 
              << ", Department: " << employee3.department << ", Job Title: " << employee3.jobTitle << std::endl;

    return 0;
}